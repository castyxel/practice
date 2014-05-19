#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
#define MS(name, val) memset(name, val, sizeof(name))
#define eps 1e-8
#define zero(x) (((x)>0?(x):-(x))<eps)
struct node {
	string pos;
	double sp, wt, st;
};
node pos[3]= {
	{"Wide Receiver", 4.5, 150.0, 200.0},
	{"Lineman", 6.0, 300.0, 500.0},
	{"Quarterback", 5.0, 200, 300}
};
bool check(double a, double b, double c, node d) {
	if(a<=d.sp && b>=d.wt && c>=d.st) return true;
	return false;
}
int main() {
	double a, b, c;
	while(cin>>a>>b>>c) {
		if(zero(a)&&zero(b)&&zero(c))break;
		bool findit=false;
		for(int i=0; i<3; i++){
			if(check(a, b, c, pos[i])){
				if(findit)
					cout<<" "<<pos[i].pos;
				else{
					findit=true;
					cout<<pos[i].pos;
				}
			}
		}
		if(findit)puts("");
		else puts("No positions");
	}
}

