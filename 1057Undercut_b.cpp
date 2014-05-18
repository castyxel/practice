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
int a[30],b[30];
int main(){
	int n;
	bool fst=true;
	while(cin>>n, n){
		if(fst)fst=false;
		else puts("");
		RP(i, 1, n)cin>>a[i];
		RP(i, 1, n)cin>>b[i];
		int aa=0, bb=0;
		RP(i, 1, n){
			if(a[i]==b[i])continue;
			if(a[i]<3&&b[i]<3&&a[i]<b[i])aa+=6;
			else if(b[i]<3&&a[i]<3&&b[i]<a[i])bb+=6;
			else if(abs(a[i]-b[i])==1){
				if(a[i]<b[i])aa+=a[i]+b[i];
				else bb+=a[i]+b[i];
			}else if(a[i]<b[i])bb+=b[i];
			else if(b[i]<a[i])aa+=a[i];
		}
		printf("A has %d points. B has %d points.\n", aa, bb);
	}
}


