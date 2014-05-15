//简单题..
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
	int n;
	scanf("%d\n", &n);
	char s[105];
	while(n--){
		scanf("%s", s);
		int len=strlen(s);
		s[len]='*';
		//cout<<len<<endl;
		int cnt=1;
		for(int i=0; i<len; i++){
			if(s[i+1]!=s[i]){
				if(cnt>1)
					printf("%d%c", cnt, s[i]);
				else
					printf("%c", s[i]);
				cnt=1;
			}else cnt++;
		}
		puts("");
	}
}

