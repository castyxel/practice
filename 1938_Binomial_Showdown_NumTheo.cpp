//神烦啊……没有n的范围，只知道答案不会超，然后我就不断求分子分母的gcd，然后不知道为什么，如果不加k>n-k,k=n-k的话，还会超时……怀疑有超大数据在这里，比如一个特别特别大的int，再来个比较小的k，答案是不超
//这样一来，中间运算可能会超的，我后来用了long long 才过，有水过的感觉……可能正解应该是求了所有上下的gcd吧
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
typedef long long ll;
ll gcd(ll a, ll b){
	while(b){
		ll t=a%b;
		a=b;
		b=t;
	}
	return a;
}
int main(){
	ll n, k;
	while(scanf("%lld%lld", &n, &k), n||k){
		if(k>n-k)k=n-k;
		ll u=1, d=1;
		ll gd;
		for(ll i=n, j=k; j>=1; j--, i--){
			u*=i; d*=j;
			gd=gcd(u, d);
			u/=gd; d/=gd;
		}
		printf("%lld\n", u/d);
	}
}

