//又是数学……完全就是计算啊，总体积－用去体积＝剩余体积什么的，数学苦手党表示昨晚写着写着就睡了QvQ
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
typedef long long ll;
const double pi = 2*acos(0.0);
int main(){
	double D, V;
	int a, b;
	while(cin>>a>>b, a||b){
		D=a, V=b;
		double Dr=D/2.0;
		double BigZ=pi*Dr*Dr*Dr*(1.0/3.0);
		double BigV=pi*Dr*Dr*D;
		double right=BigV-V-2*BigZ;
		double ans=right*3.0/4.0/pi;
		ans=2*pow(ans, 1.0/3.0);
		printf("%.3lf\n", ans);
	}
}

