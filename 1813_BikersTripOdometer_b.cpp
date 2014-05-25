//....
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
#define MS(name, val) memset(name, val, sizeof(name))
using namespace std;
const double pi = 3.1415927;
int main(){
	double d, t;
	int r, id=0;
	while(cin>>d>>r>>t, r){id++;
		double l=pi*d*r;
		l=l/12.0/5280.0;
		printf("Trip #%d: %.2lf %.2lf\n", id, l, l/t*3600.0);
	}
}

