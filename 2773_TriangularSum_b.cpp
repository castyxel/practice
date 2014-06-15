//....water
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <string>
#include <map>
using namespace std;
const int maxn = 305;
int t[maxn], ans[maxn];
void gao(){
	memset(t, 0, sizeof(t));
	memset(ans, 0, sizeof(ans));
	for(int i=1; i<maxn; i++)
		t[i]=i+t[i-1];
	for(int i=1; i<maxn; i++)
		t[i]=i*t[i+1];
	for(int i=1; i<maxn; i++)
		ans[i]=t[i]+ans[i-1];
}
int main(){
	gao();
	int ncase; cin>>ncase;
	int id=0;
	int n;
	while(ncase--){
		id++;
		cin>>n;
		cout<<id<<" "<<n<<" "<<ans[n]<<endl;
	}
}

