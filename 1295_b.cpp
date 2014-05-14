//easy one, with 2 pointers, you can solve it
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
const int MAXN = 100;
char a[MAXN];
int main(){
	int n;cin>>n;getchar();
	while(n--){
		gets(a);
		int len = strlen(a);
		int pta=0, ptb=len-1;
		while(pta<=ptb){
			swap(a[pta], a[ptb]);
			pta++, ptb--;
		}
		puts(a);
	}
}

