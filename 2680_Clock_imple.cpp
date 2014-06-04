//注意一下时间是24时制，或者注意下角度超360的情况就行了
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;
const double pis = 4*acos(0.0);
const int maxn = 10005;
struct node{
	double h, m, angle;
	bool operator< (const node& b) const{
		return angle < b.angle;
	}
	void cal(){
		double ma = m*6.0; if(ma>360)ma-=360;
		double hm = h*30.0+m*0.5;if(hm>360)hm-=360;
		angle = fabs(hm-ma);if(angle>360)angle-=360;
		if(angle>180.0) angle = 360.0-angle;
	}
	void print(){
		printf("%02.0lf:%02.0lf\n", h, m);
	}
	void read(){
		scanf("%lf:%lf", &h, &m);
		cal();
	}
};
node t[6];
int main(){
	int ncase;cin>>ncase;
	while(ncase--){
		for(int i=0; i<5; i++){
			t[i].read();
		}
		sort(t, t+5);
		t[2].print();
	}
}

