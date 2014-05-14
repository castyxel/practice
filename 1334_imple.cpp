//进制的转换，今天跪了一中午的格式
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
char bf[10];
int trans(char x){
	if(isdigit(x))return x-'0';
	return x-'A'+10;
}
int retrans(int x){
	if(x<=9)return '0'+x;
	else return 'A'+x-10;
}
int toten(int base){
	int len=strlen(bf);
	int ret=0;
	int b=1;
	for(int i=len-1; i>=0; i--){
		ret+=trans(bf[i])*b;
		b*=base;
	}
	return ret;
}
string fromten(int a, int base){
	string ret="";
	while(a){
		ret+=retrans(a%base);
		a/=base;
	}
	reverse(ret.begin(), ret.end());
	return ret;
}
int main(){
	int a, b;
	while(~scanf("%s%d%d", bf, &a, &b)){
		int v = toten(a);
		string ans = fromten(v, b);
		if(ans.size()<=7){
			for(int i=0; i<ans.size(); i++)bf[i]=ans[i];
			bf[ans.size()]='\0';
			printf("%7s\n", bf);
		}
		else
			puts("  ERROR");
	}
}

