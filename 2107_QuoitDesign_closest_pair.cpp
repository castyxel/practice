//好烦。。。输出是要用%f而不是%lf啊。。。我一直用的%lf，然后不停地在WA，好痛苦
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <string>
#include <map>
using namespace std;
const int maxn = 100000+5;
const double eps = 1e-8;
const double inf = 1e8;
struct point{
	double x, y;
	point(double xx=0, double yy=0):x(xx), y(yy){};
};
bool cmp(point a, point b){
	return a.y<b.y;
}
bool cmpx(point a, point b){
	return a.x<b.x;
}
point p[maxn];
double getdis(point& a, point& b){
	double dx=a.x-b.x, dy=a.y-b.y;
	return sqrt(dx*dx+dy*dy);
}
double closest(point *pp, int n){
	if(n<=1)return inf;
	int m=(n>>1);
	double midx = pp[m].x;
	double d=min(closest(pp, m), closest(pp+m, n-m));
	inplace_merge(pp, pp+m, pp+n, cmp);

	vector<point> mid;
	for(int i=0; i<n; i++){
		if(fabs(pp[i].x-midx)>=d)continue;
		//   if(fabs(pp[i].x-midx)+eps<d){
		int sz = mid.size();
		for(int j=sz-1; j>=0; j--){
			double dy = fabs(mid[j].y-pp[i].y);
			if(dy>=d)break;
			//if(dy+eps<d){
			d = min(d, getdis(mid[j], pp[i]));
			//}else
			//    break;
		}
		mid.push_back(pp[i]);
		//    }
	}
	return d;
}
int main(){
	int n;
	while(scanf("%d", &n), n){
		for(int i=0; i<n; i++){
			scanf("%lf%lf", &p[i].x, &p[i].y);
		}
		sort(p, p+n, cmpx);
		double ans=closest(p, n);
		printf("%.2f\n", ans/2);
	}
}

