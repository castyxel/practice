//用map也能过的0 0
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <map>
using namespace std;
map<string, double>mm;
int main() {
	int m, n;
	string str;
	double pr;
	scanf("%d%d", &m, &n);
	while(m--) {
		cin>>str>>pr;
		mm[str]=pr;
	}
	int pt=0;
	double sum=0;
	map<string, double>::iterator it;
	while(cin>>str) {
		if(str==".") {
			cout<<sum<<endl;
			sum=0;
			pt++;
			if(pt==n) break;
			else continue;
		}
		it = mm.find(str);
		if(it!=mm.end()) {
			sum+=mm[str];
		}
	}

}

