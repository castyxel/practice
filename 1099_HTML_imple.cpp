//这种纯模拟什么的真的好麻烦……忘掉了<hr>时要判断是不是在行首了，错了好麻烦
//题目最后一句不太懂，我没管
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
#define MS(name, val) memset(name, val, sizeof(name))
using namespace std;
string s;
string l="--------------------------------------------------------------------------------";
int main() {
	bool ns=true;
	string pre="";
	int len=0;
	while(cin>>s) {
		if(s=="<br>") {
			puts("");
			ns=true;
			len=0;
		} else if(s=="<hr>") {
			if(pre=="<hr>"||pre=="<br>")cout<<l<<endl;
			else{
				puts("");
				cout<<l<<endl;
			}
			ns=true;
			len=0;
		} else {
			int l=s.size();
			if(!ns&&len+l+1>80){
				puts("");
				ns=true;
				len=0;
			}
			if(ns) {
				ns=false;
				cout<<s;
				len+=l;
			} else {
				cout<<" "<<s;
				len+=1+l;
			}
		}
		pre=s;
	}
	//cout<<endl;
}

