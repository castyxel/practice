#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
#define MS(name, val) memset(name, val, sizeof(name))
#define eps 1e-8
#define zero(x) (((x)>0?(x):-(x))<eps)
int cal(int n){
	int cnt=1, ret=0, cur=1;
	RP(i, 1, n){
		ret+=cur;
		cnt++;
		if(cnt==cur+1){
			cnt=1;
			cur++;
		}
	}
	return ret;
}
int main() {
	int ncase;
	cin>>ncase;
	while(ncase--){
		int n;
		while(cin>>n, n){
			cout<<n<<" "<<cal(n)<<endl;
		}
		if(ncase)puts("");
	}
}

