//好好读题吧……下降距离永远是第一天的%fac。。。
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <map>
using namespace std;
double eps = 1e-6;
#define zero(x) ((x)<eps && -(x)<eps)?1:0
int main(){
	double h, u, d, f;
	int a, b, c, dd;
	while(cin>>a>>b>>c>>dd, a){
		h=a, u=b, d=c, f=dd;
		f/=100.0;
		f *= u;
		int cnt=0, day=0;
		double hs=0.0;
		while(1){
			if(hs<0){
				printf("failure on day %d\n", day);
				break;
			}
			if(hs>h){
				printf("success on day %d\n", day);
				break;
			}
			day++;
			//  cout<<"day: "<<day<<" Init H: "<<hs<<" Dis climed: "<<u<<" Heigh After: ";
			hs += u;
			// cout<<hs<<" Sliding: ";
			if(hs>h){
				printf("success on day %d\n", day);
				break;
			}
			// int lost = (u*f+5)/10;
			// u = u-lost*1.0*0.1;
			u -= f;
			if(u<0)u=0;
			hs -= d;
			//cout<<hs<<endl;
		}
	}
}

