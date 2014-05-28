//简单题……看多少个没有定义的数这样
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
using namespace std;
int v[30];
int main()
{
	int n, id=0;
	string a, equ, b;
	while(cin>>n, n){
		memset(v, 0, sizeof(v));
		v[0]=1;
		for(int i=0; i<n; i++){
			cin>>a>>equ>>b;
			int x=a[0]-'a';
			int y=b[0]-'a';
			v[x]=v[y];
		}
		printf("Program #%d\n", ++id);
		vector<int>ans;
		for(int i=0; i<=25; i++)
			if(v[i])ans.push_back(i);
		int sz=ans.size();
		if(sz){
			for(int i=0; i<sz; i++){
				printf("%c ", 'a'+ans[i]);
				// else printf("%c", 'a'+ans[i]);
			}
			puts("");
		}else
			puts("none");
		puts("");

	}
	return 0;
}
