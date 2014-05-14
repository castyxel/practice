//一点点的数学计算就可以了
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
	cin>>n;
	int x, y, base;
	while(n--){
		cin>>x>>y;
		if(x&1){
			base=1+4*(x/2);

		}else{
			base=4*(x/2);
		}
		if(y==x)cout<<base<<endl;
		else if(y==x-2&&y>=0)cout<<base-2<<endl;
		else puts("No Number");
	}
}

