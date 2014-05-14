//就是简单的大整数吧，注意下一开始读入时去除前导0，加完后也去除前导0就行
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
const int MAXN =10000+5;
int a[MAXN], la, b[MAXN], lb;
void rmzero(int c[], int lc){
	reverse(c, c+lc+1);
	while(c[lc]==0 && lc){
		lc--;
	}
	reverse(c, c+lc+1);
}
void add(){
	la = max(la, lb);
	for(int i=0; i<=la; i++){
		a[i]+=b[i];
		a[i+1]+=a[i]/10;
		a[i]%=10;
	}
	while(a[la+1]>=10){
		la++;
		a[la+1]=a[la]/10;
		a[la]%=10;
	}
	if(a[la+1])la++;
	reverse(a, a+la+1);
	while(a[la]==0&&la)la--;
	reverse(a, a+la+1);
}
void read(int c[], int& lc){
	string s;
	cin>>s;
	lc=s.size()-1;
	for(int i=0; i<=lc; i++)
		c[i]=s[i]-'0';
}
int main(){
	int n;
	string s;
	cin>>n;
	while(n--){
		MS(a, 0); MS(b, 0);
		la=lb=0;
		read(a, la);read(b, lb);
		rmzero(a,la);rmzero(b,lb);
		add();
		for(int i=0;i<=la;i++)
			printf("%d", a[i]);
		puts("");
	}
}

