//模拟什么的，确实要认真地读题
//首先，题目说，算tab出现了几次，所以要扫整个的数组
//然后，表明tab算4个空格，而trailing空格是从行末连续的一段，所以如果是tab接空格再接行末，要记得计算上tab代表的空格数
//最后，题目说仅仅包括##的行才算一个case的结尾，所以那些##开头的，##结尾的其它行，都是要计算的行
//以上……出题人还是很严谨的，怪我……
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
#define Lc (id<<1)
#define Rc (Lc|1)
using namespace std;
char str[1000005];
void read() {
	int pt=0;
	char x=getchar();
	while(x!='\n') {
		str[pt++]=x;
		x=getchar();
	}
	str[pt]='\0';
}
int main() {
	int ncase;
	cin>>ncase;
	int tc=0, sc=0;
	while(ncase--) {
		bool needb=false;
		while(gets(str)) {
			int len=strlen(str);
			if(str[len-1]=='#'&&str[len-2]=='#'&&len==2) {
				needb=true;
				str[len-2]='\0';
				len=strlen(str);
			}
			if(str[0]=='\n')continue;
			else {
				RP(i, 0, len-1) if(str[i]=='\t')tc++;
				int pt=len-1;
				while((str[pt]==' '||str[pt]=='\t') && pt>=0){
					if(str[pt]==' ')sc++;
					else sc+=4;
					pt--;
				}
			}
			if(needb) {
				printf("%d tab(s) replaced\n", tc);
				printf("%d trailing space(s) removed\n", sc);
				tc=0, sc=0;
				break;
			}

		}
	}
}

