//计算几何题，给出正多边形上三点求包围它的最小矩形面积，矩形边与轴平行
//求出圆心中，把各个点等量旋转，记录x\y极值即可
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
#define RRP(i, ed, st) for(int i=ed; i>=st; i--)
#define MS(name, val) memset(name, val, sizeof(name))
#define eps 1e-8
#define zero(x) (((x)>0?(x):-(x))<eps)
struct point{
	double x, y;
};
struct line{
	point a, b;
};
point intersec(line u, line v){
	point ret = u.a;
	double t = ((u.a.x - v.a.x)*(v.a.y-v.b.y)-(u.a.y-v.a.y)*(v.a.x-v.b.x));
	t /= ((u.a.x-u.b.x)*(v.a.y-v.b.y)-(u.a.y-u.b.y)*(v.a.x-v.b.x));
	ret.x += (u.b.x-u.a.x)*t;
	ret.y += (u.b.y-u.a.y)*t;
	return ret;
}
point curcumcenter(point a, point b, point c){
	line u, v;
	u.a.x = (a.x+b.x)/2;
	u.a.y = (a.y+b.y)/2;
	u.b.x = u.a.x-a.y+b.y;
	u.b.y = u.a.y+a.x-b.x;
	v.a.x = (a.x+c.x)/2;
	v.a.y = (a.y+c.y)/2;
	v.b.x = v.a.x-a.y+c.y;
	v.b.y = v.a.y+a.x-c.x;
	return intersec(u, v);
}
point rota(point v, point p, double angle){
	point ret = p;
	v.x -= p.x, v.y -= p.y;
	p.x = cos(angle);
	p.y = sin(angle);
	ret.x += v.x*p.x-v.y*p.y;
	ret.y += v.x*p.y+v.y*p.x;
	return ret;
}
int main(){
	int n;
	point a, b, c, cur;
	int id=0;
	while(cin>>n, n){
		id++;
		cin>>a.x>>a.y;
		cin>>b.x>>b.y;
		cin>>c.x>>c.y;
		point center = curcumcenter(a, b, c);
		double minx = min(a.x, b.x), maxx = max(a.x, b.x);
		double miny = min(a.y, b.y), maxy = max(a.y, b.y);
		cur = a;
		double angle = 2*2*acos(0.0)/(n*1.0);
		RP(i, 2, n){
			cur = rota(cur, center, angle);
			minx = min(minx, cur.x), maxx = max(maxx, cur.x);
			miny = min(miny, cur.y), maxy = max(maxy, cur.y);
		}
		printf("Polygon %d: %.3lf\n", id, (maxx-minx)*(maxy-miny));
	}
}

