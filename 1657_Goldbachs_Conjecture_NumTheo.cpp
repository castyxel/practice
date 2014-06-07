//暴力搜的
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <string>
#include <map>
using namespace std;
const int maxn = 500000;
bool isprime[maxn];
int prime[maxn], npt;
void preHandle(){
	memset(isprime, true, sizeof(isprime));
	npt=0;
	for(int i=2; i<maxn; i++){
		if(isprime[i]){
			prime[npt++]=i;
			for(int j=i+i; j<maxn; j+=i){
				isprime[j]=false;
			}
		}
	}
}
int cal(int n){
	int ans=0;
	for(int i=0; i<npt; i++){
		int u=prime[i];
		if(u+u==n){
			ans++;
			break;
		}
		if(u+u>n){
			break;
		}
		int v=n-prime[i];
		if(isprime[v])ans++;
	}
	return ans;
}

int main(){
	preHandle();
	int n;
	while(cin>>n, n){
		cout<<cal(n)<<endl;
	}
}

