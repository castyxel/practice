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
	int cnt=0;
	while(cin>>n, n){
		cnt=0;
		while(n>1){
			if(n&1){
				n--;
				cnt++;
				n>>=1;
				n++;
			}else{
				cnt++;
				n>>=1;
			}
		}
		cout<<cnt<<endl;
	}
}

