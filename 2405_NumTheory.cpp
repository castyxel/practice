//一些简单的位运算，感觉对进制间的转换稍稍熟了点
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
int a[5];
int gao(int n, int base){
	int ret=0;
	while(n){
		ret+=n%base;
		n/=base;
	}
	return ret;
}
int main(){
	for(int i=2992; i<10000; i++){
		int a=gao(i, 10);
		int b=gao(i, 12);
		int c=gao(i, 16);
		if(a==b&&b==c){
			cout<<i<<endl;
		}
	}
}

