//一开始想求圆心再求半径，后来发现是三维，然后有点懵，最后发现求半径有另外的方法，数学法推导三角形边和圆半径关系……
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
struct point{
	double x, y, z;
	bool read(){
		return cin>>x>>y>>z;
	}
};
double dis(point a, point b){
	double dx=a.x-b.x;
	double dy=a.y-b.y;
	double dz=a.z-b.z;
	return sqrt(dx*dx+dy*dy+dz*dz);
}
double area(double a, double b, double c){
	double p=0.5*(a+b+c);
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
double getans(point m, point n, point q){
	double a=dis(m,n);
	double b=dis(n, q);
	double c=dis(q, m);
	double s=area(a, b, c);
	double l=a+b+c;
	double r=2*s/l;
	double R=a*b*c/4.0/s;
	return r*r/(R*R);
}
int main(){
	point a, b, c;
	while(a.read(), b.read(), c.read()){
		printf("%.3lf\n", getans(a, b, c));
	}
}

