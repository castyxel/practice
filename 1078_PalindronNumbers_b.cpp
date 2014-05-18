#include <iostream>
#include <cstdio>
#include <vector>>
using namespace std;
int num[33];
bool isok(int a, int b){
	int l=a, r=b;
	while(l<=r){
		if(num[l]==num[r]){l++, r--;}
		else return false;
	}
	return true;
}
int basechange(int n, int base){
	int pt=0;
	while(n){
		num[pt++]=n%base;
		n/=base;
	}
	return pt-1;
}
vector<int>ans;
void gao(int n){
	for(int i=2; i<=16; i++){
		if(isok(0, basechange(n, i)))ans.push_back(i);
	}
}
int main(){
	int n;
	while(cin>>n, n){
		ans.clear();
		gao(n);
		if(ans.size()){
			printf("Number %d is palindrom in basis", n);
			for(int i=0; i<ans.size(); i++){
				printf(" %d",ans[i]);
			}
			puts("");
		}else{
			printf("Number %d is not a palindrom\n", n);
		}
	}
}


