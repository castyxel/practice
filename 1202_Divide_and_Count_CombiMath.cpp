#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
#define MS(name, val) memset(name, val, sizeof(name))
int fac[15], a[15], s[15];
int c(int m, int n){
	return fac[m]/fac[m-n]/fac[n];
}
int main(){
	int n;
	fac[0]=1;
	for(int i=1; i<15; i++)
		fac[i]=fac[i-1]*i;
	while(cin>>n){
		int sum=0;
		MS(s, 0);
		int sed=0;
		RP(i, 1, n){
			cin>>a[i];
			sum+=a[i];
			s[a[i]]++;
			sed = max(sed, a[i]);
		}
		int ans=1, used=0;
		RP(i, 1, n){
			ans*=c(sum-used, a[i]);
			used+=a[i];
		}
		RP(i, 1, sed){
			ans/=fac[s[i]];
		}
		cout<<ans<<endl;
	}
}


