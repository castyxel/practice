//有点郁闷...卡了一下
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
const int MAXN =5000+5;
char str[MAXN];
int main(){
	int n;
	while(scanf("%d\n", &n), n){
		gets(str);
		int len=strlen(str);
		for(int j=0; j<n; j++){
			for(int i=0, k=0; i+j<len; i+=n, k++){
				if((k&1)&&(i+n-j-1<len))cout<<str[i+n-j-1];
				else cout<<str[i+j];
			}
		}
		puts("");
	}
}

