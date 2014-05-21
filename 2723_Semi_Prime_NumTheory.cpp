//简单的数学知识好像更恰当
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
#define MS(name, val) memset(name, val, sizeof(name))
#define eps 1e-8
#define zero(x) (((x)>0?(x):-(x))<eps)
bool check(int n){
	int cnt=0;
	for(int i=2; i<=n; i++){
		if(cnt>3)return false;
		if(n%i)continue;
		while(n%i==0){
			cnt++;n/=i;
		}
	}
	if(cnt==2)return true;
	return false;
}
int main(){
	int n;
	while(cin>>n){
		if(check(n))puts("Yes");
		else puts("No");
	}
}


