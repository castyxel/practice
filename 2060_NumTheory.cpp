//考察的大概是取模的性质吧
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
int f[MAXN];
void preHandle(){
	f[0]=7%3, f[1]=11%3;
	for(int i=2; i<MAXN; i++){
		f[i]=f[i-1]+f[i-2];
		f[i]%=3;
	}
}
int main(){
	preHandle();
	int n;
	while(~scanf("%d", &n)){
		if(f[n])puts("no");
		else puts("yes");
	}
}

