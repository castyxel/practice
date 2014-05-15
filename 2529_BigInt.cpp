//变进制的大数运算，没计算好素数个数，各种坑爹错误……太弱了QvQ
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
const int MAXN =5000+5;
bool isprime[10000];
int prime[10000], ptp;
int a[33], b[33];
string as, bs;
int la, lb;
void pre(){
	memset(isprime, true, sizeof(isprime));
	ptp=0;
	for(int i=2; i<10000; i++){
		if(ptp>25)break;
		if(isprime[i]){
			prime[ptp++]=i;
			for(int j=i; j<10000; j+=i){
				isprime[j]=false;
			}
		}
	}
}
void tran(string s, int t[], int& l){
	int apt=0, bpt=0;
	int ss=s.size();
	for(int i=0; i<=ss; i++){
		if(s[i]==','||i==ss){
			for(int j=apt; j<i; j++){
				t[bpt]*=10;
				t[bpt]+=s[j]-'0';
				l=bpt;
			}
			bpt++;
			apt=i+1;
		}
	}
}
void add(){
	reverse(a, a+la+1);
	reverse(b, b+lb+1);
	la=max(la, lb);
	for(int i=0; i<=la; i++){
		a[i]+=b[i];
		a[i+1]+=a[i]/prime[i];
		a[i]%=prime[i];
	}
	while(a[la+1]>=prime[la+1]){
		la++;
		a[la+1]+=a[la]/prime[la];
		a[la]%=prime[la];
	}
	if(a[la+1])la++;
	reverse(a, a+la+1);
}
int main(){
	pre();
	while(cin>>as>>bs){
		MS(a, 0);
		MS(b, 0);
		tran(as, a, la);
		tran(bs, b, lb);
		add();
		for(int i=0; i<la; i++){
			printf("%d,", a[i]);
		}
		printf("%d\n", a[la]);
	}
}

