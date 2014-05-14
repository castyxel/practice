//简单的模拟吧，开错数组大小之类的又梦游了好久...真是累爱……
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
int jail[105];
int main(){
	int ncase;
	cin>>ncase;
	int n;
	while(ncase--){
		cin>>n;
		memset(jail, 1, sizeof(jail));
		int pt=0;
		for(int i=2; i<=n; i++){
			for(int j=0; j<=n; j+=i){
				jail[j]^=1;
			}
		}
		int ans=0;
		for(int i=1; i<=n; i++)if(jail[i]&1)ans++;
		cout<<ans<<endl;
	}
}

