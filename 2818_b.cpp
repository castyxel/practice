//.....
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
string str;
typedef long long ll;
int gao(int x){
	int ret=0;
	while(x>1){
		if(x==2){ret++;x=1;}
		else{
			ret+=(x/3);
			x=x/3+x%3;
		}
	}
	return ret;
}
int main() {
	int a, aa; double b, n;
	while(cin>>b>>n, n||b){
		double x=pow(b, 1.0/n);
		a=x, aa=x+0.5;
		int an=pow(a, n), aan=pow(aa, n);
		if(abs(an-b)<abs(aan-b))
			cout<<a<<endl;
		else
			cout<<aa<<endl;
	}
}

