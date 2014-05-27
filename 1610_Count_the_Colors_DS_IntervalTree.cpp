//区间[a, b)类型lazy线段树题……题面还是比较容易看出的，但是我太弱了，只会[a, b]类型还不怎么写lazy的我，又折腾了好久QvQ，继续努力0.0
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
const int maxn=8192;
int t[maxn*4+5];
bool lazy[4*maxn+5];
void pushdown(int id){
	if(lazy[id]){
		t[Lc]=t[id], lazy[Lc]=true;
		t[Rc]=t[id], lazy[Rc]=true;
		lazy[id]=false;
	}
}
void update(int l, int r, int id, int st, int ed, int tg){
	if(l==st && r==ed){
		lazy[id]=true;
		t[id]=tg;return ;
	}
	if(r-l<=1)return ;
	pushdown(id);
	int mid=l+r; mid>>=1;
	if(ed-1<mid){
		update(l, mid, Lc, st, ed, tg);
	}else if(st>=mid){
		update(mid, r, Rc, st, ed, tg);
	}else{
		update(l, mid, Lc, st, mid, tg);
		update(mid, r, Rc, mid, ed, tg);
	}
}
int query(int l, int r, int id, int tg){
	if(l==tg && r-l<=1){
		return t[id];
	}
	if(r-l<=1)return t[id];
	pushdown(id);
	int mid=l+r; mid>>=1;
	if(tg-1<mid)
		return query(l, mid, Lc, tg);
	else
		return query(mid, r, Rc, tg);
}
int color[maxn+5];
int main(){
	int ncase;
	int n;
	int x, y, c;
	bool fst=true;
	while(~scanf("%d", &ncase)){
		n=ncase+1;
		MS(t, 0);
		MS(lazy, false);
		RP(i, 1, ncase){
			scanf("%d%d%d", &x, &y, &c);
			x++, y++, c++;
			update(1, maxn, 1, x, y, c);
		}
		MS(color, 0);
		int pre=-1, cur;
		RP(i, 1, 8005){
			cur=query(1, maxn, 1, i);
			if(cur==pre)continue;
			else{
				color[cur]++;
				pre=cur;
			}
		}
		RP(i, 1, 8005){
			if(color[i]){
				printf("%d %d\n", i-1, color[i]);
			}
		}
		puts("");
	}
}

