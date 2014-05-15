//其实大整数类也算一种模拟？
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
	int len;
	int v[105];
};
void read(string t, node& a){
	a.len=t.size();
	for(int i=1; i<=a.len; i++)
		a.v[i]=t[a.len-i]-'0';
}
void add(node& c, node& a){
	c.len=max(c.len,a.len);
	for(int i=1; i<=c.len; i++){
		c.v[i]+=a.v[i];
		c.v[i+1]+=c.v[i]/10;
		c.v[i]%=10;
	}
	while(c.v[c.len+1]>=10){
		c.len++;
		c.v[c.len+1]+=c.v[c.len]/10;
		c.v[c.len]%=10;
	}
	if(c.v[c.len+1])c.len++;
}
void print(node& c){
	reverse(c.v+1, c.v+c.len+1);
	for(int i=1; i<=c.len; i++)
		printf("%d", c.v[i]);
	puts("");
}
void go(){
	node a,c;
	string t;
	MS(c.v, 0);a.len=0;
	MS(a.v, 0);c.len=0;
	while(cin>>t, t!="0"){
		read(t, a);
		add(c, a);
	}
	print(c);
}
int main(){
	int n;
	while(~scanf("%d",&n)){
		while(n--){
			go();
			if(n)puts("");
		}
	}
}

