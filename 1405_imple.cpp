//继续是这样……酒店入住之类的模拟，如果加大数据量可用堆优化吧？
#include <cmath>
#include <ctime>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <functional>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <vector>
#define inf 1e8
#define eps 1e-8
#define zero(x) (((x)>0?(x):-(x))<eps)
using namespace std;
#define RP(x, st, ed) for(int x=st; x<=ed; x++)
#define RPS(x, st, ed) for(int x=ed; x>=st; x--)
#define MS(name, val) memset(name, val, sizeof(name))
int n;
int r[25];
bool vis[126];
int check(int x){
	for(int i=0; i<n; i++){
		if(r[i]==x){
			r[i]=-1;
			return 1;
		}
	}
	for(int i=0; i<n; i++){
		if(r[i]==-1){
			r[i]=x;
			return 1;
		}
	}
	return 0;
}
int main(){
	string tmp;
	while(cin>>n, n){
		memset(r, -1, sizeof(r));
		memset(vis, false, sizeof(vis));
		cin>>tmp;
		int sum=0;
		for(int i=0; i<tmp.size(); i++){
			if(check(tmp[i]))continue;
			if(vis[tmp[i]])continue;
			vis[tmp[i]]=true;
			sum++;
		}
		if(sum==0)
			puts("All customers tanned successfully.");
		else{
			printf("%d customer(s) walked away.\n", sum);
		}
	}
}

