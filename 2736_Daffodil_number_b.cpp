#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
#define MS(name, val) memset(name, val, sizeof(name))
int main(){
	int n;
	while(cin>>n){
		int a=n%10;
		int b=n/10%10;
		int c=n/100;
		if(a*a*a+b*b*b+c*c*c==n)puts("Yes");
		else puts("No");
	}

}

