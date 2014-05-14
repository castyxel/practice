//still easy...
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
const int MAXN = 99999+10;
int a[105];
int main(){
	int n;int id=0;
	while(cin>>n, n){
		id++;
		int sum=0;
		for(int i=0; i<n; i++){
			cin>>a[i];sum+=a[i];
		}
		sum/=n;
		//cout<<sum<<endl;
		int ans=0;
		for(int i=0; i<n; i++){
			ans += abs(a[i]-sum);
		}
		printf("Set #%d\nThe minimum number of moves is %d.\n\n", id, ans/2);
	}
}

