//解密什么的好像好多模拟啊（不如说我一直在刷水题orzzz)
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
string cur;
int main(){
	while(getline(cin, cur)){
		if(cur=="START")continue;
		if(cur=="END")continue;
		if(cur=="ENDOFINPUT")break;
		int len = cur.size();
		for(int i=0; i<len; i++)
			if(isalpha(cur[i]))
				putchar((cur[i]-'A'-5+26)%26+'A');
			else
				putchar(cur[i]);
		puts("");
	}
}

