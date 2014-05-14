//有意思的求pi方法，说6/pi^2=不可被约组合／总组合数
#include <cmath>
#include <ctime>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <functional>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <vector>
#define inf 1e8
#define eps 1e-8
#define zero(x) (((x)>0?(x):-(x))<eps)
using namespace std;
#define RP(x, st, ed) for(int x=st; x<=ed; x++)
#define RPS(x, st, ed) for(int x=ed; x>=st; x--)
#define MS(name, val) memset(name, val, sizeof(name))
int gcd(int a, int b){
	while(b^=a^=b^=a%=b);
	return a;
}
int num[55];
int main(){
	int n;
	while(scanf("%d", &n), n){
		for(int i=0; i<n; i++){
			scanf("%d", &num[i]);
		}
		int sum = n*(n-1)/2;
		int cnt=0;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				if(gcd(num[i], num[j])==1)cnt++;
			}
		}
		if(cnt==0){
			puts("No estimate for this data set.");
		}else{
			//cout<<sum<<" "<<cnt<<endl;;
			printf("%lf\n", sqrt((sum*1.0)/(cnt*1.0)*6.0));
		}
	}
}

