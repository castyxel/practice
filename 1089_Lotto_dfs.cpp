//用dfs暴力所有情况就好，读题略慢了
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
const int maxn=55;
int s[maxn], n;
const int k=6;
int st[maxn], stop;
void dfs(int lv, int pt){
	if(lv==k){
		RP(i, 0, 5){
			if(i==5)printf("%d\n", st[i]);
			else printf("%d ", st[i]);
		}
		return;
	}
	if(pt>=n) return ;
	if(n-pt+1+lv<k) return;
	st[stop++]=s[pt];
	dfs(lv+1, pt+1);
	stop--;
	dfs(lv, pt+1);
}
int main(){
	bool fst=true;
	while(cin>>n, n){
		if(fst)fst=false;
		else puts("");
		RP(i, 0, n-1)cin>>s[i];
		stop=0;
		dfs(0, 0);
	}
}

