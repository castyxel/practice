//仔细想想，还是可暴力过的
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
#define MS(name, val) memset(name, val, sizeof(name))
using namespace std;
const int maxn=1000005;
bool vis[maxn];
int cal(int n){
	int ret=n;
	while(n){
		ret+=n%10;
		n/=10;
	}
	return ret;
}
void gao(){
	RP(i, 1, maxn-5){
		int ger=cal(i);
		while(!vis[ger]){
			vis[ger]=true;
			ger=cal(ger);
			if(ger>maxn-5)break;
		}
	}
}
int main(){
	MS(vis, false);
	gao();
	RP(i, 1, maxn-5){
		if(!vis[i])printf("%d\n", i);
	}
}

