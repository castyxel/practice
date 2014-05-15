//简单题...
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
int main() {
	int n;
	double x;
	double px=-999;
	while(cin>>x) {
		n=x;
		if(n==999){puts("End of Output");break;}
		if(px<-10){px=x;continue;}
		printf("%.2lf\n", x-px);
		px=x;
	}

}

