#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
#define MS(name, val) memset(name, val, sizeof(name))
int main(){
	int w, d;
	int id=0;
	double ww, dd;
	while(cin>>w>>d, w||d){
		id++;
		printf("Sample #%d\n", id);
		ww=w, dd=d;
		double dw=dd/ww;
		double left=dw/810;left=log(left);
		double right=log(0.5);
		double ans=left/right*5730;
		int a;
		if(ans<10000.0){
			a=ans/100+0.5;
			a*=100;
			printf("The approximate age is %d years.\n", a);
		}else{
			a=(ans/1000+0.5);
			a*=1000;
			printf("The approximate age is %d years.\n", a);
		}
		puts("");
	}
}

