//小学生数学题0 0
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
int n;
int main(){
	int n, u, d;
	while(cin>>n>>u>>d, n||u||d){
		int left=n-u;
		int t=ceil(left*1.0/((u-d)*1.0));
		//cout<<left<<endl;
		//cout<<u-d<<endl;
		t=t*2+1;
		cout<<t<<endl;
	}
}

