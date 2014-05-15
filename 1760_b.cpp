//简单题...
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
int n[60];
bool v[60];
int main() {
	int x;
	int pt=0;
	while(cin>>x){
		MS(v, false);
		if(x==-1)break;
		pt=0;
		n[pt++]=x;v[x]=true;
		while(cin>>x, x){n[pt++]=x;v[x]=true;}
		int cnt=0;
		for(int i=0; i<pt; i++)if(v[2*n[i]])cnt++;
		cout<<cnt<<endl;
	}
}

