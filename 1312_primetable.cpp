//prime table, 我好像总是搞错格式，PE了三回了……依旧b题...
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
const int MAXN = 1010;
int prime[MAXN], ptp;
bool isprime[MAXN];
int id[MAXN];
void preHandle(){
	ptp=2;
	memset(id, -1, sizeof(id));
	memset(isprime, true, sizeof(isprime));
	prime[1]=1;id[1]=1;
	for(int i=2; i<MAXN; i++){
		if(isprime[i]){
			prime[ptp++]=i;id[i]=ptp-1;
			for(int j=i+i; j<MAXN; j+=i)
				isprime[j]=false;
		}
	}
}
int main(){
	preHandle();
	int n, c;
	bool first=true;
	while(~scanf("%d%d", &n, &c)){
		//if(first)first=false;
		//else puts("");
		int cnt=0, nc=n;
		while(isprime[nc]==0)nc--;
		cnt = max(cnt, id[nc]);
		printf("%d %d:", n, c);
		if(cnt==0)continue;
		vector<int>ans;
		if(cnt&1){
			int mid = cnt/2+1;
			ans.push_back(prime[mid]);
			for(int i=mid-1, j=0; i>=1&&j<c-1; i--, j++){
				ans.push_back(prime[i]);
			}
			for(int i=mid+1, j=0; j<c-1 && prime[i]<=n; i++, j++){
				ans.push_back(prime[i]);
			}
		}else{
			int mid = cnt/2;
			for(int i=mid, j=0; j<c&&i>=1; i--, j++)
				ans.push_back(prime[i]);
			for(int i=mid+1, j=0; j<c&&prime[i]<=n; i++, j++)
				ans.push_back(prime[i]);
		}
		sort(ans.begin(), ans.end());
		for(int i=0; i<ans.size(); i++)
			printf(" %d", ans[i]);
		puts("");
		puts("");
	}
}
