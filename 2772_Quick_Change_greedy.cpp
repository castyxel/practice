//常做的最少硬币找零钱题
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <string>
#include <map>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int t=1; t<=n; t++){
		int cent;
		cin>>cent;
		int q, d, n, p;
		q = cent/25;
		cent %= 25;
		d = cent/10;
		cent %= 10;
		n = cent/5;
		cent %= 5;
		p = cent;
		printf("%d %d QUARTER(S), %d DIME(S), %d NICKEL(S), %d PENNY(S)\n", t, q, d, n, p);
	}
}

