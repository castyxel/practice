//悲伤。。。还以为题目中是说必须在middle时才能cut，后来WA个不停，问人才知道……是随意cut的啊...
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>
using namespace std;
const double eps=1e-6;
typedef long long ll;
double calprice(int m) {
	if(m<=4+eps) return 10;
	else if(m<=8+eps) {
		return 10+2*(m-4);
	} else {
		return 18+(m-8)*2.4;
	}
}
const double inf = 1e8;
double gao(double len) {
	if(len<=4+eps) return 10;
	double ret=inf;
	double mid=len/2;
	double bf = calprice(ceil(len));
	double af = gao(mid)*2;
	cout<<len<<" "<<mid<<" || ";
	cout<<bf<<" "<<af<<endl;
	ret = min(af, bf);
	return ret;
}
int main() {
	int n;
	//for(int i=1; i<=10; i++){
	//	cout<<i<<"--"<<calprice(i)<<endl;
	//	cout<<i*2.4<<endl;
	//}
	// double ns;
	while(cin>>n, n) {
		double ans;
		if(n<=4) ans=calprice(n);
		else if(n<=8) ans=calprice(n);
		else{
			int ns=n/8;
			ans = ns*18;
			n %= 8;
			if(n<=5) ans += n*2.4;
			else ans += calprice(n);
		}
		int aint = (int) ans;
		if(fabs(aint-ans)<eps) cout<<aint<<endl;
		else printf("%.1lf\n", ans);
	}
}
