//就是水而已……按顺序过的强迫症也做了
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
int main(){
	int n;
	cin>>n;
	string o, a;
	for(int i=1; i<=n; i++){
		cin>>o;
		cout<<"String #"<<i<<endl;
		for(int j=0; j<o.size(); j++){
			putchar((o[j]-'A'+1)%26+'A');
		}
		puts("");puts("");
	}
}

