//终于见到一图论的了……虽然还是简单图论
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
const int maxn = 4*1000005;
int t[maxn];
string s;
int sz;
bool dfs(int pt, int id){
	if(pt==sz){
		t[id]=1;
		return true;
	}
	if(s[pt]=='0'){
		if(t[Lc]==1)return false;
		else return dfs(pt+1, Lc);
	}else{
		if(t[Rc]==1)return false;
		else return dfs(pt+1, Rc);
	}
}
int main(){
	bool haveans=true;
	int id=0;
	MS(t, 0);
	while(cin>>s){
		if(s=="9"){
			id++;
			printf("Set %d is ", id);
			if(haveans)printf("immediately decodable\n");
			else printf("not immediately decodable\n");
			haveans=true;
			MS(t, 0);
		}else{
			sz = s.size();
			if(!dfs(0, 1))haveans=false;
		}
	}
}

