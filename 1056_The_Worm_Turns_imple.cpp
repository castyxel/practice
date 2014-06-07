//water
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <string>
#include <map>
using namespace std;
const int maxn = 55;
bool vis[maxn][maxn];
struct pos{
	int x, y;
};
struct sunit{
	pos pre, cur;
};
vector<sunit>snake;
void moveto(pos& cur, char x){
	if(x=='E'){
		cur.y ++;
	}else if(x=='W'){
		cur.y --;
	}else if(x=='N'){
		cur.x--;
	}else{
		cur.x++;
	}
}
void paint(){
	puts("PAINT>>>>>>>>>>>>>>>>>>>>>>>>>>>");
	for(int i=24; i<=27; i++){
		for(int j=1; j<=35; j++){
			if(vis[i][j])putchar('X');
			else putchar('.');
		}
		puts("");
	}

	puts("PAINT>>>>>>>>>>>>>>>>>>>>>>>>>>>");
}
enum state{success, raninto, ranoff};
int update(char x){
	int ox=snake[0].cur.x, oy=snake[0].cur.y;
	moveto(snake[0].cur, x);
	int nx=snake[0].cur.x, ny=snake[0].cur.y;
	if(nx<=0 || ny<=0 || nx>50 || ny>50)return ranoff;
	vis[ox][oy]=false;
	for(int i=1; i<20; i++){
		pos cur = snake[i].cur;
		pos pre = snake[i].pre;
		vis[cur.x][cur.y]=false;
		vis[pre.x][pre.y]=true;
		snake[i].cur = snake[i].pre;
		snake[i].pre = snake[i-1].cur;
	}
	// paint();
	if(vis[nx][ny]) return raninto;
	vis[nx][ny]=true;
	return success;
}
void init(){
	memset(vis, false, sizeof(vis));
	snake.clear();
	sunit pt;
	for(int i=0; i<20; i++){
		snake.push_back(pt);
		snake[i].cur.y=30-i;
		snake[i].cur.x=25;
		if(i)snake[i].pre=snake[i-1].cur;
	}
}
string mk;
int main(){
	int n;
	while(cin>>n, n){
		init();
		cin>>mk;
		for(int i=0; i<n; i++){
			int ret=update(mk[i]);
			if(ret==success){
				if(i==n-1)printf("The worm successfully made all %d moves.\n", n);
			}else if(ret==raninto){
				printf("The worm ran into itself on move %d.\n", i+1);
				break;
			}else{
				printf("The worm ran off the board on move %d.\n", i+1);
				break;
			}
		}
	}

}

