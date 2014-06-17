//暴力打表做了，才5000＋
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>
using namespace std;
typedef long long ll;
const int maxn = 100000;
const ll uplimit = 2000000000;
int pt;
ll ans[maxn];
ll fac[5]={2, 3, 5, 7};
void dfs(ll state , ll id){
	if(state>uplimit) return;
	if(id>=4){
		ans[pt++]=state;
		return;
	}
	//dfs(state, id+1);
	for(ll st=state; st<=uplimit; st*=fac[id]){
		dfs(st, id+1);
	}
}
int main(){
	pt=1;
	dfs(1, 0);
	int n;
	sort(ans, ans+pt);
	while(cin>>n, n){
		printf("The ");
		if(n%100==11 || n%100==12 || n%100==13){
			printf("%dth", n);
		}else if(n%10 == 1){
			printf("%dst", n);
		}else if(n%10 == 2){
			printf("%dnd", n);
		}else if(n%10 == 3){
			printf("%drd", n);
		}else{
			printf("%dth", n);
		}
		printf(" humble number is ");
		cout<<ans[n]<<"."<<endl;
	}
}
