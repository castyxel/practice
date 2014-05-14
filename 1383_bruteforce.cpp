//也是暴力求解这样...求某数中1的位置
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
int main(){
	int ncase;
	cin>>ncase;
	while(ncase--){
		int n;
		cin>>n;
		vector<int>ans;
		int pt=0;
		while(n){
			if(n&1)ans.push_back(pt);
			pt++;
			n>>=1;
		}
		for(int i=0;i<ans.size(); i++){
			if(i<ans.size()-1)cout<<ans[i]<<" ";
			else cout<<ans[i]<<endl;
		}
	}
}

