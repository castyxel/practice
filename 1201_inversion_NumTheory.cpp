//由逆序数反推的简单题....
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
#define MAXN 105
#define inf 1e8
#define eps 1e-8
#define zero(x) (((x)>0?(x):-(x))<eps)
using namespace std;
int bit[MAXN], n, m;
int p[MAXN], I[MAXN];
int sum(int i){
	int res=0;
	while(i){
		res += bit[i];
		i -= i&-i;
	}
	return res;
}
void add(int i){
	while(i<=m){
		bit[i]++;
		i += i&-i;
	}
}
int main(){
	while(~scanf("%d", &m), m){
		string oper;
		cin>>oper;
		vector<int>ans;
		if(oper=="P"){
			memset(bit, 0, sizeof(bit));
			for(int i=0; i<m; i++){
				int v;scanf("%d", &v);
				add(v);
				p[v]=i+1-sum(v);
			}
			for(int i=1; i<=m;i++){
				printf("%d%c", p[i], (i==m)?'\n':' ');
			}
		}else{
			for(int i=1; i<=m; i++){
				scanf("%d", &I[i]);
			}
			for(int i=m; i>=1; i--){
				ans.insert(ans.begin()+I[i], i);
			}
			for(int i=0; i<m; i++){
				printf("%d%c", ans[i], (i==m-1)?'\n':' ');
			}
		}
	}
}
