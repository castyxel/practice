//用了欧拉定理先确定一个暴力的上界，然后用枚举＋快速幂判断
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
using namespace std;
int euler(int n){
	int ret=n;
	RP(i, 2, n){
		if(n%i==0){
			while(n%i==0)n/=i;
			ret=ret*(i-1)/i;
		}
	}
	return ret;
}
int quick(int a, int b, int c){
	int ret=1;
	while(b){
		if(b&1)ret*=a, ret%=c;
		a*=a, a%=c;
		b>>=1;
	}
	return ret;
}
bool check(int& x, int ed, int c){
	RP(i, 1, ed){
		if(quick(2, i, c)==1){
			x=i;
			return true;
		}
	}
	return false;
}
int main(){
	int n;
	while(cin>>n){
		int ans=0;
		if(check(ans, euler(n), n)){
			printf("2^%d mod %d = 1\n", ans, n);
		}else{
			printf("2^? mod %d = 1\n", n);
		}
	}
}

