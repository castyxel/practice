//我真的好讨厌这种纯粹的模拟题啊QvQ，好麻烦QvQ
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
struct node{
	string name;
	int que[7];
	int sol;
	int t;
	int val;
	bool operator<(const node& b)const{
		if(sol==b.sol){
			if(t==b.t){
				if(val==b.val)
					return name<b.name;
				else return val<b.val;
			}
			return t<b.t;
		}else
			return sol>b.sol;
	}
	bool operator ==(const node& b)const{
		return sol==b.sol && t==b.t && val==b.val;
	}
};
node te[25];
int main(){
	int n, id=0;
	while(cin>>n, n){
		id++;
		RP(i, 0, n-1){
			cin>>te[i].name;
			te[i].sol=0;
			te[i].t=0;
			double up=0;
			RP(j, 0, 6){
				cin>>te[i].que[j];
				if(te[i].que[j]){
					te[i].sol++;
					te[i].t+=te[i].que[j];
					up+=log(te[i].que[j]*1.0);
				}
			}
			if(te[i].sol==0)te[i].val=0;
			else te[i].val=exp(up/(te[i].sol*1.0))+0.5;
		}
		sort(te, te+n);
		printf("CONTEST %d\n", id);
		int rk=1;
		RP(i, 0, n-1){
			if(i){
				if(te[i]==te[i-1]);else rk=i+1;
			}
			printf("%02d %-10s %d %4d %3d ", rk, te[i].name.c_str(), te[i].sol, te[i].t, te[i].val);
			RP(j, 0, 6){
				if(j<6)printf("%3d ", te[i].que[j]);
				else printf("%3d\n", te[i].que[j]);
			}
			//puts("");
		}
	}
}

