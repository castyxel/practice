//有点悲伤……我推算了好久算不出来，然后把样例用力臂＊距离的方法验证发现有问题...果然这只是一道普通的找规律题而已...orzzz
//然后格式那里也是各种跪，跪了不知多少次了QvQ，真是内伤，不知说什么好了
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
double a[MAXN];
int main(){
	a[0]=0;
	for(int i=1, x=2.0; i<MAXN; i++, x+=2){
		a[i]=a[i-1]+1.0/x;
	}
	int n;
	vector<double>ans;vector<int>id;
	while(~scanf("%d", &n)){
		id.push_back(n);ans.push_back(a[n]);
	}
	puts("# Cards  Overhang");
	//for(int i=1; i<=9; i++)printf("%d", i);
	//for(int i=1; i<=9; i++)printf("%d", i);
	//cout<<ans.size()<<endl;
	for(int i=0; i<ans.size();i++){
		printf("%5d%10.3lf\n", id[i], ans[i]);
	}
}

