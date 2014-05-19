#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
#define MS(name, val) memset(name, val, sizeof(name))
int num(string s){
	int ret=0;
	for(int i=0; i<s.size();i++){
		ret<<=1;
		ret+=s[i]-'0';
	}
	return ret;
}
int main(){
	int n;cin>>n;
	string s;
	while(n--){
		cin>>s;
		int a=num(s.substr(0, 8));
		int b=num(s.substr(8, 8));
		int c=num(s.substr(16, 8));
		int d=num(s.substr(24, 8));
		printf("%d.%d.%d.%d\n", a, b, c, d);
	}

}

