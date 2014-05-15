//仍然是枚举...但是我比较好奇如果数很大该怎么做，即是说正解该如何，感觉是能用组合数学解的题
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
int v[100005];
typedef long long ll;
void pre(){
	int pt=1;
	for(int i=3;pt<=100000; i++){
		if(i%3==0)v[pt++]=i;
		else if(i%5==0)v[pt++]=i;
	}
}
int main() {
	int n;
	pre();
	while(cin>>n){
		cout<<v[n]<<endl;
	}
}

