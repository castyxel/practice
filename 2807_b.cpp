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
string str;
typedef long long ll;
int main() {
	int ncase;cin>>ncase;
	int n, v;
	while(ncase--){
		cin>>n;
		int ret=0;
		RP(i, 1, n){
			cin>>v;
			ret+=v;
		}
		cout<<ret-n+1<<endl;
	}
}

