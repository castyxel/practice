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
int main(){
	int n;cin>>n;
	int d, s, a, b;
	while(n--){
		cin>>s>>d;
		a=s+d;
		if(a&1){
			puts("impossible");
			continue;
		}
		a>>=1;
		b=s-a;
		if(b<0){
			puts("impossible");
			continue;
		}
		cout<<a<<" "<<b<<endl;

	}

}

