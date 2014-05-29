//模拟下，这个比较贴心，确定了点不在边界上
#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
#define MS(name, val) memset(name, val, sizeof(name))
#define Lc (id<<1)
#define Rc (Lc|1)
using namespace std;
const double pi=2*acos(0.0);
struct point{
	double x, y;
	void tran(){
		double lt=x, it=y;
		x = lt*pi/180.0;
		y = log(tan(pi/4.0+(it*pi/180.0)/2.0));
	}
};
void cal(point tg, point& a, point& b){
	point interp;
	interp.x=(a.x+b.x)/2.0;
	interp.y=(a.y+b.y)/2.0;
	if(tg.x<interp.x && tg.y>interp.y){
		putchar('q');
		b=interp;
	}else
		if(tg.x>interp.x && tg.y>interp.y){
			putchar('r');
			a.x=interp.x;
			b.y=interp.y;
		}else
			if(tg.x<interp.x && tg.y<interp.y){
				putchar('t');
				a.y=interp.y;
				b.x=interp.x;
			}else{
				putchar('s');
				a=interp;
			}
}
int main(){
	point tg;
	int n;
	double x, y;
	while(cin>>x>>y>>n){
		point a, b;
		a.y=85.0, a.x=-180.0;a.tran();
		b.y=-85.0, b.x=180.0;b.tran();
		tg.x=x, tg.y=y; tg.tran();
		putchar('t');
		while(n--){
			cal(tg, a, b);
		}
		puts("");
	}
}

