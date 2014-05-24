//模拟什么的，练习码力必备啦
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <stack>
#include <string>
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
#define MS(name, val) memset(name, val, sizeof(name))
using namespace std;
stack<string>fw, bw;
string cur;
bool gao(string ord){
	if(ord=="BACK"){
		if(bw.empty())return false;
		else{
			fw.push(cur);
			cur=bw.top();bw.pop();
		}
	}else if(ord=="FORWARD"){
		if(fw.empty())return false;
		else{
			bw.push(cur);
			cur=fw.top();fw.pop();
		}
	}else if(ord=="VISIT"){
		bw.push(cur);
		cin>>cur;
		while(!fw.empty())fw.pop();
	}
	return true;
}
void init(){
	while(!fw.empty())fw.pop();
	while(!bw.empty())bw.pop();
	cur="http://www.acm.org/";
}
int main(){
	int ncase;cin>>ncase;
	string ord;
	while(ncase--){
		init();
		while(cin>>ord, ord!="QUIT"){
			if(gao(ord))
				cout<<cur<<endl;
			else
				cout<<"Ignored"<<endl;
		}
		if(ncase)puts("");
	}
}

