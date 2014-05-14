//普通的模拟下飞机里程求和之类的问题而已...
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
string a, b;
int main(){
	double m;
	string c;
	double ans=0;
	while(cin>>a){
		if(a=="0"){
			cout<<ans<<endl;
			ans=0;continue;
		}
		if(a=="#")break;
		cin>>b>>m>>c;
		if(c=="F"){
			ans += m*2;
		}else if(c=="B"){
			ans += m*1.5;
		}else if(c=="Y"){
			if(m>500)
				ans+=m;
			else ans+=500.0;
		}
	}
}

