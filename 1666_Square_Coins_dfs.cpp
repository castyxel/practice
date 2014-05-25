//用了dfs暴搜了所有情况，感觉数据量再大点的话，可以记忆化搜索？组合数学？
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
int c[18];
int cnt, n;
void dfs(int v, int ci){
	if(ci>17)return;
	if(v>n)return ;
	if(v==n){
		cnt++;
		return;
	}
	RP(i, 0, 300){
		if(v+i*c[ci]>n)break;
		dfs(v+i*c[ci], ci+1);
	}
}
int main(){
	RP(i, 1, 17)c[i]=i*i;
	while(cin>>n, n){
		cnt=0;
		dfs(0, 1);
		cout<<cnt<<endl;
	}
}

