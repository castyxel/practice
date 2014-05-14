//模拟下桌子安排什么的...
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
int t[33],tt[33];
int cal(int n){
	int sum=0;tt[0]=0;
	for(int i=1; i<=n; i++){
		sum+=t[i];
		tt[i]=t[i]+tt[i-1];
	}
	for(int i=1; i<n; i++){
		if(tt[i]==sum-tt[i])return i;
	}
	return -1;

}
int main(){
	int n;
	while(cin>>n, n){
		for(int i=1; i<=n; i++)cin>>t[i];
		int pt=cal(n);
		if(pt==-1)
			puts("No equal partitioning.");
		else
			printf("Sam stops at position %d and Ella stops at position %d.\n", pt, pt+1);
	}
}

