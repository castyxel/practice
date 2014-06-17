//模拟过程就好了
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn =65;
int num[maxn];
string str;
int sf[maxn];
int af[maxn];
bool check(int n){
	sort(sf, sf+n);
	for(int i=1; i<=n; i++){
		int carry=0;
		for(int j=n-1; j>=0; j--){
			int ans = num[j]*i;
			af[j] = ans+carry;
			carry = af[j]/10;
			af[j] %= 10;
			if(j==0 && carry) return false;
		}
		for(int j=0; j<n; j++)
			//     cout<<af[j];
			//    puts("");
			sort(af, af+n);
		for(int j=0; j<n; j++){
			if(af[j]!=sf[j])
				return false;
		}
	}
	return true;
}
int main(){
	while(cin>>str){
		int sz=str.size();
		for(int i=0; i<sz; i++)
			num[i]=str[i]-'0', sf[i]=num[i];
		if(check(sz)){
			cout<<str<<" is cyclic"<<endl;
		}else{
			cout<<str<<" is not cyclic"<<endl;
		}
	}
}

