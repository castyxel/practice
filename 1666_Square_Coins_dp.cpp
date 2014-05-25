//加大数据的话，就用背包写吧，复杂度是k*n，k是硬币各类，n是钱
#include <iostream>
#include <cstdio>
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
int dp[305], c[18];
int main() {
	int n;
	RP(i, 1, 17)c[i]=i*i;
	n=300;
	MS(dp, 0);
	dp[0]=1;
	RP(j, 1, 17) {
		for(int i=c[j]; i<=n; i++)
			dp[i]+=dp[i-c[j]];
	}
	while(cin>>n, n) {
		cout<<dp[n]<<endl;
	}
}

