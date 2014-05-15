//就是一些进制转换之类的
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
int b;
string s;
bool check(){
	cin>>s;
	int len=s.size();
	int sum=0, n=0;
	for(int i=0; i<len; i++){
		n*=b;
		n+=s[i]-'0';
		sum+=s[i]-'0';
	}
	if(n%sum)return false;
	else return true;
}
int main() {
	int ncase;cin>>ncase;
	while(ncase--){
		while(cin>>b, b){
			if(check())puts("yes");
			else puts("no");
		}
		if(ncase)puts("");
	}
}

