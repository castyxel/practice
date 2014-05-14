//简单模拟下，做这种东西脑袋有些晕...
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
const int MAXN =1000+5;
string save[MAXN];
int main(){
	int n;
	while(cin>>n, n){
		RP(i, 1, n)cin>>save[i];
		sort(save+1, save+n+1);
		int cnt=1, anss=0;
		string tmp=save[1], ans;
		RP(i, 2, n+1){
			if(i==n+1){
				if(cnt>anss){
					ans=tmp;anss=cnt;
				}
				continue;
			}
			if(save[i]==tmp){
				cnt++;
			}else if(save[i]!=tmp){
				if(cnt>anss){
					ans=tmp;anss=cnt;
				}
				tmp=save[i], cnt=1;
			}
		}
		cout<<ans<<endl;
	}
}

