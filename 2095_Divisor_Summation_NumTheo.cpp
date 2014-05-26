//筛法就能nlogn
#include <iostream>
#include <cstdio>
#include <cctype>
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
const int maxn=500000;
int sum[maxn+5];
void pre(){
	MS(sum, 0);
	RP(i, 1, maxn){
		for(int j=i+i; j<=maxn; j+=i){
			sum[j]+=i;
		}
	}
}
int main(){
	pre();
	int ncase;
	cin>>ncase;
	int n;
	while(ncase--){
		cin>>n;
		cout<<sum[n]<<endl;
	}
}
