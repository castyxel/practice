//简单题...
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
int dir[4][2]={1, 0, -1, 0, 0, 1, 0, -1};
int g[15][15];
int n, m;
bool inedge(int x, int y){
	if(1<=x && x<=n && 1<=y && y<=m)return true;
	return false;
}
bool isallgrass(){
	RP(i, 1, n)RP(j, 1, m)
		if(g[i][j]==0) return false;
	return true;
}
bool isadj(){
	RP(i, 1, n ){
		RP(j, 1, m){
			if(g[i][j])continue;
			RP(k, 0, 4){
				int nx=i+dir[k][0], ny=j+dir[k][1];
				if(!inedge(nx, ny))continue;
				if(g[nx][ny]==0) return true;
			}
		}
	}
	return false;
}
int main(){
	while(cin>>n>>m, n||m){
		RP(i, 1, n)RP(j, 1, m)cin>>g[i][j];
		if(!isadj()&&!isallgrass())puts("Yes");
		else puts("No");
	}
}

