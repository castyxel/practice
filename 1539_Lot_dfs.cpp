#include <iostream>
#include <cstdio>
using namespace std;
int ans;
void dfs(int n){
	if(n==3){
		ans++; return;
	}
	if(n<3) return;
	if(n&1){
		dfs(n/2);
		dfs(n/2+1);
	}else{
		dfs(n/2);
		dfs(n/2);
	}
}
int main(){
	int n;
	while(~scanf("%d", &n)){
		ans=0;
		dfs(n);
		printf("%d\n", ans);
	}
}

