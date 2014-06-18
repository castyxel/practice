//模拟过程
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>
using namespace std;
typedef long long ll;
const int maxn = 25;
ll am[maxn], cap;
bool isopen[maxn];
ll gao(int n){
	memset(isopen, false, sizeof(isopen));
	ll ret=0, sum=0;
	for(int i=0; i<n; i++){
		int id;
		cin>>id;
		if(ret==-1)continue;
		if(isopen[id]){
			sum -= am[id];
			isopen[id]=false;
		}else{
			sum += am[id];
			if(sum > cap) {ret =-1; continue;}
			isopen[id]=true;
			ret = max(ret, sum);
		}
	}
	return ret;
}
int main(){
	int n, m;
	int id=0;
	while(cin>>n>>m>>cap, cap||n||m){
		id++;
		for(int i=1; i<=n; i++)cin>>am[i];
		ll ans=gao(m);
		cout<<"Sequence "<<id<<endl;
		if(ans==-1){
			cout<<"Fuse was blown."<<endl;
		}else{
			cout<<"Fuse was not blown."<<endl;
			cout<<"Maximal power consumption was "<<ans;
			cout<<" amperes."<<endl;
			//  else cout<<" ampere."<<endl;
		}
		puts("");
	}
}
