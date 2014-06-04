//手速题....
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
const int maxn = 15;
int g[maxn][maxn];
bool vis[1005];
int n;
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
bool check(){
	memset(vis, false, sizeof(vis));
	RP(i, 1, n)RP(j, 1, n){
		if(vis[g[i][j]])return false;
		vis[g[i][j]]=true;
	}
	int sum=0;
	RP(j, 1, n)sum+=g[1][j];
	int t=0;
	RP(i, 2, n){
		t=0;
		RP(j, 1, n){
			t+=g[i][j];
		}
		if(t!=sum) return false;
	}
	RP(j, 1, n){
		t=0;
		RP(i, 1, n) t+=g[i][j];
		if(t!=sum) return false;
	}
	t=0;
	RP(i, 1, n)
		t+=g[i][i];
	if(t!=sum) return false;
	t=0;
	RP(i, 1, n)
		t+=g[i][n-i+1];
	if(t!=sum) return false;
	return true;
}
int main(){
	while(scanf("%d", &n), n){
		RP(i, 1, n)RP(j, 1, n)scanf("%d", &g[i][j]);
		if(check())puts("Yes");
		else puts("No");
	}
}

