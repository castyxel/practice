//嗯……仍然是数学题
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
double s[1005];
int main(){
	int ncase; cin>>ncase;
	while(ncase--){
		int n;
		cin>>n;
		double aver=0;
		RP(i, 1, n){
			cin>>s[i];
			aver+=s[i];
		}
		aver/=n*1.0;
		int cnt=0;
		RP(i, 1, n){
			if(s[i]>aver)cnt++;
		}
		double  ans = cnt*1.0 / (n*1.0);
		printf("%.3lf%%\n", ans*100.0);
	}
}

