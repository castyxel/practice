//看错题真是捉急……就是简单的二分……QvQ
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
int cube[205];
struct node{
	int v, a, b, c;
	node(int vv=0, int aa=0, int bb=0, int cc=0): v(vv), a(aa), b(bb), c(cc){}
	bool operator<(const node& t)const{
		if(v==t.v)
			if(a==t.a)
				if(b==t.b)
					return c<t.c;
				else return b<t.b;
			else return a<t.a;
		else return v<t.v;
	}
};
vector<node>ans;
int bisear(int st, int target){
	int ed=200;
	int l=st, r=ed;
	int ret=-1;
	while(l<=r){
		int mid=l+r; mid>>=1;
		if(cube[mid]==target)return mid;
		if(cube[mid]<target)l=mid+1;
		else r=mid-1;
	}
	return ret;
}
int main(){
	for(int i=1; i<=200; i++)
		cube[i]=i*i*i;
	for(int a=2; a<=200; a++){
		for(int b=a+1; b<=200; b++){
			for(int c=b+1; c<=200; c++){
				int target=cube[a]+cube[b]+cube[c];
				int getit=bisear(c+1, target);
				if(getit==-1)continue;
				ans.push_back(node(getit, a, b, c));
			}
		}
	}
	sort(ans.begin(), ans.end());
	for(int i=0; i<ans.size(); i++)
		printf("Cube = %d, Triple = (%d,%d,%d)\n", ans[i].v, ans[i].a, ans[i].b, ans[i].c);

}

