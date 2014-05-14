//暴力求解n=o＊2^p中的o和p这样..
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
int main(){
	int ncase;
	cin>>ncase;
	while(ncase--){
		int n;
		cin>>n;
		int p=0;
		while(n%2==0){
			p++;n/=2;
		}
		cout<<n<<" "<<p<<endl;
	}
}

