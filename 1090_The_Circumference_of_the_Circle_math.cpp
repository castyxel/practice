//纯粹就是数学题，数学弱星人打开了模板，然后有了个１Ａ。。。。
#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <set>
using namespace std;
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
#define MS(name, val) memset(name, val, sizeof(name))
#define eps 1e-8
#define zero(x) (((x)>0?(x):-(x))<eps)
const double pi=3.141592653589793;
double xa, ya, xb, yb, xc, yc;
double dis(double dx, double dy){
	return sqrt(dx*dx+dy*dy);
}
double cal(){
	double ca=(xa*xa+ya*ya-xb*xb-yb*yb)/2.0;
	double cb=(xa*xa+ya*ya-xc*xc-yc*yc)/2.0;
	double xx=(ca*(ya-yc)-cb*(ya-yb))/((xa-xb)*(ya-yc)-(xa-xc)*(ya-yb));
	double yy=(ca*(xa-xc)-cb*(xa-xb))/((ya-yb)*(xa-xc)-(ya-yc)*(xa-xb));
	double r=dis(xx-xa, yy-ya);
	return 2*pi*r;
}
int main(){
	while(cin>>xa>>ya>>xb>>yb>>xc>>yc){
		printf("%.2lf\n", cal());
	}
}

