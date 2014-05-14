//请叫我小错误达人...把xa写成xb然后就WA成汪酱了QvQ
#include <cmath>
#include <ctime>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <functional>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <vector>
#define inf 1e8
#define eps 1e-8
#define zero(x) (((x)>0?(x):-(x))<eps)
using namespace std;
#define RP(x, st, ed) for(int x=st; x<=ed; x++)
#define RPS(x, st, ed) for(int x=ed; x>=st; x--)
#define MS(name, val) memset(name, val, sizeof(name))
int n;
int main(){
	double a, b, ra, rb;
	while(cin>>a>>b>>ra>>rb){
		if(a<2*ra || a<2*rb || b<2*ra || b<2*rb){
			puts("No");continue;
		}
		double xa=ra, ya=ra;
		double xb=a-rb, yb=b-rb;
		double dx=xb-xa, dy=yb-ya;
		if((dx*dx+dy*dy)<(ra+rb)*(ra+rb)){
			puts("No");
		}else{
			puts("Yes");
		}
	}
}

