//读错题两次，take all from 1 through n-1，这个意思是指从1到n-1所有值都要被选中
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
bool vis[3005];
bool check(int n){
	int pre, cur;
	MS(vis, false);
	RP(i, 1, n){
		if(i==1){
			cin>>cur;
			pre=cur;
		}
		else{
			cin>>cur;
			int ab=abs(pre-cur);
			if(ab>3000)continue;
			vis[ab]=true;
			pre=cur;
		}
	}
	RP(i, 1, n-1)
		if(!vis[i])return false;
	return true;
}
int main(){
	int n;
	while(cin>>n){
		if(check(n))  puts("Jolly");
		else puts("Not jolly");
	}
}

