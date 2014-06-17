//找个最长个数的序列们输出
#include  <cstdio>
#include  <vector>
#include  <iostream>
#include  <algorithm>
using namespace std;
const int maxn = 1000+5;
struct node{
	int bf, af;
	int id;
	bool operator < (const node& b) const{
		return af<b.af;
	}
};
node ex[maxn];
int main(){
	int n;
	while(cin>>n, n){
		for(int i=0; i<n; i++){
			scanf("%d%d", &ex[i].bf, &ex[i].af);
			ex[i].id=i+1;
		}
		sort(ex, ex+n);
		vector<int>ans;
		int pre=-1;
		for(int i=0; i<n; i++){
			if(ex[i].bf>pre){
				ans.push_back(ex[i].id);
				pre = ex[i].af;
			}
		}
		int sz=ans.size();
		for(int i=0; i<sz; i++){
			printf("%d", ans[i]);
			if(i==sz-1)puts("");
			else putchar(' ');
		}
	}
}

