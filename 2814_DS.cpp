//这题枚举加判重什么的，用STL……真的好快啊………………当然我指写得快0 0
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
set<string>save;
bool gao(string s){
	int len=s.size();
	for(int i=0; i<len; i++){
		save.clear();
		int cnt=0;
		for(int j=0; j+i+1<len; j++){
			string tmp="";
			tmp=tmp+s[j];
			tmp=tmp+s[j+i+1];
			save.insert(tmp);
			cnt++;
		}
		if(cnt==save.size())continue;
		else return false;
	}
	return true;
}
int main() {
	string s;
	while(cin>>s, s!="*"){
		if(gao(s)){
			cout<<s<<" is surprising."<<endl;
		}else{
			cout<<s<<" is NOT surprising."<<endl;
		}
	}
}

