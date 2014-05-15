//暴力就行了..
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
string check(int n){
	int sum=0;
	for(int i=1; i*i<=n; i++){
		if(i*i==n)sum+=i;
		else if(n%i)continue;
		else sum+=i, sum+=(n/i);
	}
	sum-=n;
	if(sum==n)return "PERFECT";
	else if(sum<n)return "DEFICIENT";
	else return "ABUNDANT";
}
int main(){
	int n;
	cout<<"PERFECTION OUTPUT"<<endl;
	while(cin>>n, n){
		printf("%5d  ", n);
		cout<<check(n)<<endl;
	}
	cout<<"END OF OUTPUT"<<endl;
}

