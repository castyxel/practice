//也是暴力的做法，自己有些想当然了，要比较两遍的，自以为交换就行了，还有些急躁，CE了两次…………一定是因为太饿了QvQ
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
int gcd(int a, int b){
	while(b^=a^=b^=a%=b);
	return a;
}
struct num{
	int up, down;
	void print(){
		int gd;
		if(up) gd=gcd(up, down);
		if(up) up/=gd, down/=gd;
		if(up==0)puts("0");
		else if(down==1)cout<<up<<endl;
		else cout<<up<<"/"<<down<<endl;
	}
};
void gao(string& a, string& b){
	int la=a.size(), lb=b.size();
	int up=-1, cnt;
	for(int i=0; i<la; i++){
		cnt=0;
		for(int j=0; j<lb&&i+j<la; j++){
			if(a[j+i]==b[j])cnt++;
		}
		up=max(up, cnt);
	}
	for(int i=0; i<lb; i++){
		cnt=0;
		for(int j=0; j<la&&i+j<lb; j++){
			if(b[j+i]==a[j])cnt++;
		}
		up=max(up, cnt);
	}
	num x;
	x.up=up*2, x.down=la+lb;
	cout<<"appx("<<a<<","<<b<<") = ";
	x.print();
}
int main(){
	string a, b;
	while(cin>>a){
		if(a=="-1")break;
		cin>>b;
		gao(a, b);
		a.clear(), b.clear();
	}
}

