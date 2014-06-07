//十分简单的模拟
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <string>
#include <map>
using namespace std;
struct node{
	string name, code;
};
vector<node>ans;
int check(string& s){
	int sz=s.size();
	int cnt=0;
	for(int i=0; i<sz; i++){
		if(s[i]=='1')s[i]='@';
		else if(s[i]=='0') s[i]='%';
		else if(s[i]=='l') s[i]='L';
		else if(s[i]=='O') s[i]='o';
		else cnt++;
	}
	return cnt;
}
void gao(int n){
	ans.clear();
	string name, code;
	node tmp;
	while(n--){
		cin>>name>>code;
		if(check(code)==code.size())continue;
		else{
			tmp.name=name, tmp.code=code;
			ans.push_back(tmp);
		}
	}
	int cnt=ans.size();
	if(cnt==0)puts("No account is modified.");
	else{
		printf("%d\n", cnt);
		for(int i=0; i<cnt; i++){
			cout<<ans[i].name<<" "<<ans[i].code<<endl;
		}
	}
}
int main(){
	int n;
	while(cin>>n, n){
		gao(n);
	}
}

