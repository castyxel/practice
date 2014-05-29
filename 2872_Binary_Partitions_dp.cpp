//仍然是考整数划分的，求划分为2的幂的整数的划分法，一听到划分就往DP上想去了，转移方程还是很好想的，从只有1，到用上2，到4……这样想
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
const int mod = 1000000;
int t[32];
int dp[2000005];
int main(){
	int ncase;
	cin>>ncase;
	t[0]=1;
	RP(i, 1, 31)t[i]=2*t[i-1];
	while(ncase--){
		int n;
		scanf("%d",&n);
		MS(dp, 0);
		dp[0]=1;
		RP(i, 0, 31){
			if(t[i]>n)break;
			RP(j, t[i], n)
				dp[j] = (dp[j-t[i]]+dp[j])%mod;
		}
		printf("%d\n", dp[n]);
	}
}

