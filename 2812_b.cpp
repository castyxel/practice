//easy one，模拟一下过程就行了，感觉模拟题好多进制转换啊。。
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
int gao(){
	int len=str.size();
	int ret=0;
	for(int i=0; i<len; i++){
		if(str[i]==' ')continue;
		ret += (i+1)*(str[i]-'A'+1);
	}
	return ret;
}
int main() {
	while(getline(cin, str), str!="#"){
		cout<<gao()<<endl;
	}
}

