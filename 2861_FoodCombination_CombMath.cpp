//考点组合数学……我数学实在太渣了想了好久才出题……由这个价位得到一个性质，如果C(m, n)的值比target大的话，第n＋1位肯定不能选了，因为第n位的排位是C(m, n)+1,好了，用这点就可以解...
#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
#define MS(name, val) memset(name, val, sizeof(name))
#define Lc (id<<1)
#define Rc (Lc|1)
using namespace std;
const int maxn = 35;
typedef long long ll;
ll c[maxn][maxn];
ll t[maxn];
void pre(){
	RP(i, 0, maxn-1)RP(j, 0, maxn-1)c[i][j]=0;
	c[0][0]=1;
	t[0]=0;
	t[1]=1;
	//t[2]=1;
	RP(i, 2, maxn)t[i]=2*t[i-1];
	RP(i, 1, maxn-1){
		c[i][0]=1;
		RP(j, 1, i){
			c[i][j]=c[i-1][j]+c[i-1][j-1];
		}
	}
}
ll ans;
ll m;
void dfs(int n, int l){
	if(n<0 || l<0) return;
	ll sum=0;
	RP(i, 0, l)sum+=c[n-1][i];
	if(sum>=m)dfs(n-1, l);
	else{
		ans+=t[n];
		m-=sum;
		dfs(n-1, l-1);
	}
}
int main(){
	ll n, l;
	bool fst=true;
	pre();
	while(cin>>n>>l>>m){
		//if(fst)fst=false;
		// else puts("");
		ans=0;
		dfs(n, l);
		cout<<ans<<endl;
	}
}

