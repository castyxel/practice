//多组数据的大整数fibnacci运算，虽然我觉得这种题用java更快....
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
	int v[1005];
};
node f[3];
void read(node& a){
	string t;
	cin>>t;
	a.len=t.size();
	for(int i=1; i<=a.len; i++)
		a.v[i]=t[a.len-i]-'0';
}
void add(node& c, node& a, node& b){
	MS(c.v, 0);
	c.len=max(a.len, b.len);
	for(int i=1; i<=c.len; i++){
		c.v[i]+=a.v[i]+b.v[i];
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
int main(){
	int n;
	while(cin>>n){
		if(n==0)cout<<0<<endl;
		else if(n==1)cout<<1<<endl;
		else if(n==2)cout<<1<<endl;
		else{
			MS(f[0].v, 0);
			MS(f[1].v, 0);
			f[0].v[1]=1, f[0].len=1;
			f[1].v[1]=1, f[1].len=1;
			for(int i=0; i<n-2; i++){
				add(f[(2+i)%3], f[(2+i-1+3)%3], f[(2+i-2+3)%3]);
			}
			print(f[(2+n-3+3)%3]);
		}
	}
}

