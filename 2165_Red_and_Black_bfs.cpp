//用bfs来记算可行块
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
#define MS(name, val) memset(name, val, sizeof(name))
using namespace std;
const int maxn=25;
char g[maxn][maxn];
int dir[4][2]={1, 0, -1, 0, 0, 1, 0, -1};
int n, m, cnt;
bool inedge(int x, int y){
	if(0<=x && x<n && 0<=y && y<m){
		return true;
	}
	return false;
}
struct p{
	int x, y;
};
p st;
bool vis[maxn][maxn];
void bfs(){
	MS(vis, false);
	queue<p> qb;
	qb.push(st);
	cnt=0;
	vis[st.x][st.y]=true;
	while(!qb.empty()){
		p fst=qb.front();qb.pop();
		cnt++;
		for(int i=0; i<4; i++){
			p nt;
			nt.x=fst.x+dir[i][0];
			nt.y=fst.y+dir[i][1];
			if(!inedge(nt.x, nt.y))continue;
			if(vis[nt.x][nt.y])continue;
			if(g[nt.x][nt.y]=='#')continue;
			qb.push(nt);
			//cout<<g[nt.x][nt.y]<<endl;
			vis[nt.x][nt.y]=true;
		}
	}
}
void findst(){
	RP(i, 0, n-1){
		RP(j, 0, m-1){
			if(g[i][j]=='@'){
				st.x=i, st.y=j;
				return;
			}
		}
	}
}
int main(){
	while(cin>>m>>n, n||m){
		RP(i, 0, n-1)scanf("%s", g[i]);
		findst();
		bfs();
		cout<<cnt<<endl;
	}
}

