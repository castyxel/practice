//问能不能把单词连起来，抽象为给出连接情况，问是否存在一条欧拉路径，首先要保证图连通，这个可以用并查集实现，然后判断入度==出度，如果是路径，考虑下两端的出入度情况即可
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <string>
#include <map>
using namespace std;
const int maxn = 100000+5;
vector<int>g[60];
int pre[60], ranks[60], in[60], out[60];
int Find(int x){
	if(x==pre[x])return x;
	return pre[x]=Find(pre[x]);
}
void Union(int x, int y){
	int fx=Find(x), fy=Find(y);
	if(fx==fy) return;
	if(ranks[x]>=ranks[y]){
		pre[y]=x;
	}else{
		ranks[y]++;
		pre[x]=y;
	}
}
bool isok(int mk){
	int fmk = Find(mk);
	for(int i=0; i<26; i++){
		if(in[i]||out[i]){
			if(Find(i) != fmk)return false;
		}
	}
	int acnt=0, bcnt=0;
	for(int i=0; i<26; i++){
		if(in[i]==out[i])continue;
		if(in[i]==out[i]+1)acnt++;
		else if(in[i]+1==out[i])bcnt++;
		else return false;
	}
	if(acnt==1 && bcnt==1) return true;
	if(acnt==0 && bcnt==0) return true;
	return false;
}
int idx(char x){
	return x-'a';
}
void addedge(char a, char b){
	g[idx(a)].push_back(idx(b));
	g[idx(b)].push_back(idx(a));
	Union(idx(a), idx(b));
	in[idx(a)]++, out[idx(b)]++;
}
void init(){
	memset(in, 0, sizeof(in));
	memset(out, 0, sizeof(out));
	for(int i=0; i<52; i++){
		g[i].clear();
		pre[i]=i;
	}
}
char str[1005];
int main(){
	int ncase;cin>>ncase;
	while(ncase--){
		int n;
		init();
		cin>>n;
		for(int i=0; i<n; i++){
			scanf("%s", str);
			int len=strlen(str)-1;
			addedge(str[0], str[len]);
		}
		if(isok(str[0]-'a'))puts("Ordering is possible.");
		else puts("The door cannot be opened.");
	}
}

