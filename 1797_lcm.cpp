//求一堆数的最小公倍数这样。。。
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
typedef long long ll;
ll gcd(ll a, ll b){
	while(b^=a^=b^=a%=b);
	return a;
}
int main(){
	int ncase;cin>>ncase;
	while(ncase--){
		int n;cin>>n;
		int v;cin>>v;
		ll lcm=v; ll gd;
		for(int i=1; i<n; i++){
			cin>>v;
			gd = gcd(lcm, v);
			lcm = lcm*v/gd;
		}
		cout<<lcm<<endl;
	}
}

