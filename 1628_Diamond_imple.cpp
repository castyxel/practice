//判断下当前是不是“合法”，我还以为合法就是判断有没有三个连着的，没想到……还包括移动方法本身不合法………………难怪用illeagal
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
const int maxn=10;
char s[maxn][maxn];
bool check(int x, int y){
	char c=s[x][y];
	RP(i, 1, 8){
		if(i+2>8)break;
		if(s[x][i]==c && s[x][i+1]==c && s[x][i+2]==c) return true;
	}
	RP(i, 1, 8){
		if(i+2>8) break;
		if(s[i][y]==c && s[i+1][y]==c && s[i+2][y]==c) return true;
	}
	return false;
}
bool outedge(int x, int y){
	if(1<=x && x<=8 && 1<=y && y<=8)return false;
	return true;
}
bool okmove(int sx, int sy, int ex, int ey){
	if(outedge(sx, sy))return false;
	if(outedge(ex, ey))return false;
	if(sx==ex && abs(sy-ey)==1) return true;
	if(sy==ey && abs(sx-ex)==1) return true;
	return false;
}
int main(){
	while(~scanf("%s", s[1]+1)){
		RP(i, 2, 8){
			scanf("%s", s[i]+1);
		}
		int sx, sy, ex, ey;
		cin>>sx>>sy>>ex>>ey;
		swap(s[sx][sy], s[ex][ey]);
		if(!okmove(sx, sy, ex, ey)){
			puts("Illegal move!");
		}else if(check(sx, sy)||check(ex, ey)){
			puts("Ok!");
		}else
			puts("Illegal move!");
	}

}

