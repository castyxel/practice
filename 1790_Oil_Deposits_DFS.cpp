//题目开始有点样子了……简单dfs求连通块
#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <set>
using namespace std;
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
#define RRP(i, ed, st) for(int i=ed; i>=st; i--)
#define MS(name, val) memset(name, val, sizeof(name))
#define eps 1e-8
#define zero(x) (((x)>0?(x):-(x))<eps)
#define Lc (id<<1)
#define Rc (Lc|1)
const int maxn=105;
char g[maxn][maxn];
bool vis[maxn][maxn];
int dir[8][2]={
	0, 1, 1, 0, 1, 1,
	0, -1, -1, 0, -1, -1,
	1, -1, -1, 1
};
int n, m;
bool inedge(int x, int y){
	if(0<=x&&x<n&&0<=y&&y<m)return true;
	else return false;
}
void dfs(int x, int y){
	if(vis[x][y])return ;
	vis[x][y]=true;
	int nx, ny;
	for(int i=0; i<8; i++){
		nx = x+dir[i][0];
		ny = y+dir[i][1];
		if(!inedge(nx, ny))continue;
		if(g[nx][ny]=='@')dfs(nx, ny);
	}
}
int main(){
	while(cin>>n>>m, n||m){
		for(int i=0; i<n; i++){
			scanf("%s", g[i]);
		}
		MS(vis, false);
		int ans=0;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(g[i][j]=='*')continue;
				if(vis[i][j])continue;
				dfs(i, j);
				ans++;
			}
		}
		cout<<ans<<endl;
	}
}

