//简单小问题...
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
string s;
typedef long long ll;
int main() {
	int n;
	ll ret=0;
	while(cin>>s){
		if(s=="0")break;
		ret=0;
		for(long long k=2, i=0; i<s.size();i++, k<<=1){
			ret+=(k-1)*(s[s.size()-i-1]-'0');
		}
		cout<<ret<<endl;
	}
}

