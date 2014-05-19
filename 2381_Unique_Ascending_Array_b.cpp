#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <set>
using namespace std;
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
#define MS(name, val) memset(name, val, sizeof(name))
#define eps 1e-8
#define zero(x) (((x)>0?(x):-(x))<eps)
set<int>s;
int main() {
	int n;
	while(cin>>n, n){
		int v;
		s.clear();
		RP(i, 1, n){
			cin>>v;
			s.insert(v);
		}
		set<int>::iterator st;
		for(st=s.begin();st!=s.end();st++){
			if(st!=s.begin())cout<<" "<<*st;
			else cout<<*st;
		}
		puts("");
	}
}

