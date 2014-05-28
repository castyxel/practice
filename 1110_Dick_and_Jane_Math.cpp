//真心是数学题……智商捉急想了好久，主要是age不是严格的岁数，有可能多点少点什么的，通过取余判断是不是多了就行，再好好判断下到底谁多了，自己想想即可
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int s, p, y, j;
	while(cin>>s>>p>>y>>j){
		int c=(12+j-p-y);
		int b, a;
		if(c%3==0){
			c/=3;
			b=c+p;
			a=c+y;
		}else if(c%3==1){
			c/=3;
			if(y<=s+p){a=c+y+1;b=c+p;}
			else {b=c+p+1;a=c+y;}
		}else{
			c/=3;
			a=c+y+1;
			b=c+p+1;
		}
		cout<<a<<" "<<b<<" "<<c<<endl;

	}
	return 0;
}
