//模拟个宝塔形这样……可怕……我想当然地写了挺久……果然还是要认真想想再下手啊
#include <iostream>
#include <cstdio>
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
vector<string>s;
string as[25];
bool cmp(const string& a, const string& b){
	int aa=a.size(), bb=b.size();
	return aa<bb;
}
int main(){
	int n;
	string str;
	int id=0;
	while(cin>>n, n){
		id++;
		cout<<"SET "<<id<<endl;
		s.clear();
		RP(i, 1, n){
			cin>>str;
			s.push_back(str);
		}
		sort(s.begin(), s.end(), cmp);
		int ss=s.size();
		int l=1, r=ss, pt=0;
		for(int i=1; i<=ss; i+=2, l++, r--){
			if(i==ss){
				as[l]=s[i-1];
			}else{
				as[l]=s[i-1];
				as[r]=s[i];
			}
		}
		RP(i, 1, ss)
			cout<<as[i]<<endl;
	}
}

