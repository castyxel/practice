//打素数表再二分，再枚举来证哥德巴赫猜想的题...
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
const int MAXN =1000000+5;
bool isprime[MAXN];
int prime[MAXN], ptp;
void preHandle(){
	ptp=0;
	memset(isprime, true, sizeof(isprime));
	for(int i=2; i<MAXN; i++){
		if(isprime[i]){
			if(i!=2)prime[ptp++]=i;
			for(int j=i+i; j<MAXN; j+=i){
				isprime[j]=false;
			}
		}
	}
}
int bisear(int target){
	int l=0, r=ptp-1, mid;
	while(l<=r){
		mid=l+r; mid>>=1;
		if(prime[mid]==target)return prime[mid];
		else if(prime[mid]<target)l=mid+1;
		else r=mid-1;
	}
	return 0;
}
int main(){
	int n;
	preHandle();
	while(scanf("%d", &n), n){
		int a, b;
		int lim=n/2+1;
		for(int i=0; i<MAXN&&prime[i]<=lim; i++){
			a=prime[i];
			b=bisear(n-prime[i]);
			if(b)break;
		}
		printf("%d = %d + %d\n", n, a, b);
	}
}

