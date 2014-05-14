//模拟，注意下当前层去当前层的话，仍然＋5就好了
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
const int MAXN =1000+5;
string save[MAXN];
int main(){
	int n;
	while(cin>>n, n){
		int st=0, t=0;
		RP(i, 1, n){
			int v;cin>>v;
			t+=5;
			if(v>st)t+=(v-st)*6;
			else t+=(st-v)*4;
			st=v;
		}
		cout<<t<<endl;
	}
}

