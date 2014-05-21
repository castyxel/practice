//教你如何用sort?
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
struct node{
	string name;
	int year, price;
};
bool cmpn(const node& a, const node& b){

	if(a.name==b.name){
		if(a.year==b.year){
			return a.price<b.price;
		}else
			return a.year<b.year;
	}else
		return a.name<b.name;
}
bool cmpy(const node& a, const node& b){
	if(a.year==b.year){
		if(a.name==b.name){
			return a.price<b.price;
		}
		return a.name<b.name;
	}
	return a.year<b.year;
}
bool cmpp(const node& a, const node& b){
	if(a.price==b.price){
		if(a.name==b.name){
			return a.year<b.year;
		}
		return a.name<b.name;
	}
	return a.price<b.price;
}
node a[105];
int main(){
	int n;
	string cri;
	bool fst=true;
	while(cin>>n, n){
		if(fst)fst=false;
		else puts("");
		RP(i, 0, n-1){
			cin>>a[i].name>>a[i].year>>a[i].price;
		}
		cin>>cri;
		if(cri=="Name")
			sort(a, a+n, cmpn);
		else if(cri=="Year")
			sort(a, a+n, cmpy);
		else if(cri=="Price")
			sort(a, a+n, cmpp);
		RP(i, 0, n-1){
			cout<<a[i].name<<" "<<a[i].year<<" "<<a[i].price<<endl;
		}
	}
}

