//问用n个方块建楼梯的方法...实际上可转换为，用n个不同的数组成n的方法...于是变成背包问题了
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>
using namespace std;
const int maxn = 505;
typedef long long ll;
ll dp[maxn];
void gao(){
	for(int i=0; i<maxn; i++)dp[i]=0;
	dp[0]=1;
	for(int i=500; i>=1; i--){
		for(int j=500; j>=i; j--){
			dp[j]+=dp[j-i];
		}
	}
}
int main(){
	int n;
	gao();
	while(cin>>n, n){
		cout<<dp[n]-1<<endl;
	}
}
