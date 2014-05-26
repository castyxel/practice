//伤心……题目好坑啊……或者是我不明白……总之有空格，在这里我跪了无数次，然后是那个整数后面不一定是换行吧？我用scanf("%d\n%)这种读法，又WA了无数次，改成了加个getchar()才过的
//嘤嘤嘤，今天肯定不宜编程对吧……以后都用getchar()好了
#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
#define MS(name, val) memset(name, val, sizeof(name))
using namespace std;
string s, t;
int main(){
	int ncase;
	cin>>ncase;
	int k;
	while(ncase--){
		scanf("%d", &k);getchar();
		getline(cin, s);
		getline(cin, t);
		int sz=s.size(), tz=t.size();
		int ans=0;
		for(int i=0, j=0; 1; i++, j++ ){
			if(i==sz){
				ans+=tz-j;break;
			}
			if(j==tz){
				ans+=sz-i;break;
			}
			if(s[i]!=t[j]){
				ans+=tz-j;
				ans+=sz-i;
				break;
			}
		}
		cout<<ans*k<<endl;
	}
}
