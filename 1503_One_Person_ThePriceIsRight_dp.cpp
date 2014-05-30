//嗯……果然我对DP很不在行……想了很久很久……最后fail了
//看了题解觉得自己好笨，dp[g][l]代表着g\l所能到达的最大值，我没想好最大值同时可表一个范围，然后一直在想着二分搜，被各种影响，dp推得也和二分有关系了，残念…………
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
#define maxn 35
using namespace std;
int dp[maxn][maxn];
int dfs(int g, int l){
	if(g<=0 || l<0) return 0;
	if(dp[g][l]!=-1) return dp[g][l];
	if(l==0){
		dp[g][l] = g; return g;
	}else{
		dp[g][l] = dfs(g-1, l-1)+dfs(g-1, l)+1;
		return dp[g][l];
	}
}
int main(){
	MS(dp, -1);
	int g, l, id=0;
	while(cin>>g>>l, g||l){
		id++;
		int ans=dfs(g, l);
		printf("Case %d: %d\n", id, ans);
	}
}

