//...
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 1005;
struct node{
	double j, f;
	bool operator< (const node& b) const{
		return j/f > b.j/b.f;
	}
};
node rm[maxn];
double cal(int n, int m){
	double ret=0;
	for(int i=0; i<n && m; i++){
		if(m>rm[i].f){
			ret += rm[i].j;
			m-= rm[i].f;
		}else{
			ret += (m*1.0)/(rm[i].f*1.0) * rm[i].j;
			m=0;
		}
	}
	return ret;
}
int main(){
	int n, m;
	while(cin>>m>>n){
		if(n==-1 && m==-1)break;
		for(int i=0; i<n; i++){
			cin>>rm[i].j>>rm[i].f;
		}
		sort(rm, rm+n);
		printf("%.3f\n", cal(n, m));
	}
}

