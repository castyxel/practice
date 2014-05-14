//是普通的模拟，但一开始没考虑到，给的数是无序的，直接赋值可以会错，每次都有取极值，沙茶地WA了几次……真是9……
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
int main(){
	int low=1, up=10;
	int v;
	string s;char ss[20];
	while(scanf("%d\n", &v), v){
		gets(ss);
		s=ss;
		if(s=="too high"){
			up=min(up, v-1);
		}else if(s=="too low"){
			low=max(low, v+1);
		}else{
			if(low<=v && v<=up)puts("Stan may be honest");
			else puts("Stan is dishonest");
			up=10, low=1;
		}
	}
}

