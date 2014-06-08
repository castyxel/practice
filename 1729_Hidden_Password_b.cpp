//
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <string>
#include <map>
using namespace std;
const int maxn = 200005;
char str[maxn];
int gao(int n){
	int apt=0, bpt=1;
	while(apt<n && bpt<n){
		if(str[apt]<str[bpt]) bpt++;
		else if(str[apt]>str[bpt]) apt=bpt, bpt++;
		else{
			int j;
			for(j=1; j<n; j++){
				if(str[apt+j]>str[bpt+j]){
					apt+=j;
					break;
				}else if(str[apt+j]<str[bpt+j]){
					apt+=j, bpt=apt+1;
					break;
				}
			}
			if(j==n)break;
			if(apt==bpt)bpt++;
		}
	}
	return min(apt, bpt);
}
int main(){
	int ncase;cin>>ncase;
	while(ncase--){
		int n;cin>>n;
		scanf("%s", str);
		for(int i=0; i<n; i++)
			str[n+i]=str[i];
		str[n+n]='\0';
		cout<<gao(n)<<endl;

	}
}
