//仍然是简单问题...叹...
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
int l[10005];
int main() {
	int n;
	while(cin>>n){
		RP(i, 1, n){
			cin>>l[i];
		}
		int st=0,ca=0, cb=0;
		RP(i, 1, n){
			if(l[i]!=st)ca++;
			st^=1;
		}
		st=1;
		RP(i, 1, n){
			if(l[i]!=st)cb++;
			st^=1;
		}
		cout<<min(ca, cb)<<endl;
	}
}

