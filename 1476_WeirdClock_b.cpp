//读错题简直不能更坑了……还以为每次转的都一定……妄想是线性方程组……really think too much
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
using namespace std;
int gcd(int a, int b) {
	while(b^=a^=b^=a%=b);
	return a;
}
int exgcd( int a, int b, int &x, int &y) {
	if(!b) {
		x=1, y=0;
		return a;
	}
	int ret = exgcd(b, a%b, x, y);
	int t; t=x, x=y, y=t-a/b*y;
	return ret;
}
int InverseMod(int a, int n) {
	if( n<= 0)return -1;
	int x, y;
	int comDiv = exgcd( a, n, x, y);
	if( comDiv != 1) return -1;
	return (x%n+n)%n;
}
bool vis[100];
int main() {
	int b, k;
	while(cin>>b>>k, b||k) {
		MS(vis, false);
		int a=b*k;
		int cnt=0;
		int cur=b;
		vis[cur]=true;
		bool findit=false;
		while(1){
			cur=cur+a;
			cur%=60;
			cnt++;
			if(cur==0){
				findit=true;
				break;
			}
			if(vis[cur])break;
			vis[cur]=true;
			a=k*cur;
		}
		if(findit)cout<<cnt<<endl;
		else puts("Impossible");

	}
}

