//试用了下快速GCD，还是很好记的b^=a^=b^=a%=b
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
int gcd(int a, int b){
	while(b^=a^=b^=a%=b);
	return a;
}
int main(){
	int a, b;
	while(~scanf("%d%d", &a, &b)){
		printf("%10d%10d    ", a, b);
		if(gcd(a, b)==1){
			puts("Good Choice");
		}else{
			puts("Bad Choice");
		}
		puts("");
	}
}

