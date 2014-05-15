//眼泪都掉下来了……还是复制粘贴大法好，拼错单词好麻烦，还有就是，这种写法果然很头晕啊...
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
int main() {
	int n;
	cin>>n;
	int id=0;
	while(n--) {
		id++;
		cout<<"URL #"<<id<<endl;
		string s;
		cin>>s;
		int len=s.size();
		int pt=0;
		int cnt=0;
		bool get=false;
		int pbt=-1;

		for(int i=0; i<len; i++) {
			if(s[i]==':') {
				if(cnt==0)continue;
				pbt=i+1;
			} else if(s[i]=='/'&& cnt==0) {
				cnt++;
				if(cnt==1) {
					cout<<"Protocol = "<<s.substr(pt, i-1)<<endl;
					pt=i+2;
					i++;
				}
			} else if(s[i]=='/') {
				cnt++;
				if(pbt==-1) {
					cout<<"Host     = "<<s.substr(pt, i-pt)<<endl;
					cout<<"Port     = <default>"<<endl;
				} else {
					cout<<"Host     = "<<s.substr(pt, pbt-1-pt)<<endl;
					cout<<"Port     = "<<s.substr(pbt, i-pbt)<<endl;
				}
				cout<<"Path     = "<<s.substr(i+1, len-i-1)<<endl;
				break;
			}else if(cnt==1&&i==len-1){
				if(pbt==-1) {
					cout<<"Host     = "<<s.substr(pt, i-pt+1)<<endl;
					cout<<"Port     = <default>"<<endl;
				} else {
					cout<<"Host     = "<<s.substr(pt, pbt-1-pt)<<endl;
					cout<<"Port     = "<<s.substr(pbt, i-pbt+1)<<endl;
				}
				cout<<"Path     = <default>"<<endl;
			}
		}
		puts("");
	}
}

