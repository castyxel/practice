//纯粹数学题
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>
using namespace std;
typedef long long ll;
const int maxn = 5;
ll m[maxn][maxn];
ll ans[maxn];
int main(){
	double x, y, z;
	while(cin>>x>>y>>z){
		double c=x;
		y-=c, z-=c;
		double a=(z-2*y)/2;
		double b=y-a;
		double fa=9*a+3*b+c;
		double fb=16*a+4*b+c;
		double fc=25*a+5*b+c;
		cout<<fa<<" "<<fb<<" "<<fc<<endl;
	}
}
				
