//模拟模拟模拟。。。
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
const int MAXN = 105;
string keyb[4]={
	"`1234567890-=",
	"QWERTYUIOP[]\\",
	"ASDFGHJKL;'",
	"ZXCVBNM,./"
};
char sear(char x){
	if(x==' ')return ' ';
	for(int i=0; i<4; i++){
		for(int j=0; j<keyb[i].size(); j++){
			if(keyb[i][j]==x){
				return keyb[i][j-1];
			}
		}
	}
}
int main(){
	string tmp;
	while(getline(cin, tmp)){
		for(int i=0; i<tmp.size();i++)
			putchar(sear(tmp[i]));
		puts("");
	}
}

