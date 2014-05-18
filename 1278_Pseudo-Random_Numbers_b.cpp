#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
#define MS(name, val) memset(name, val, sizeof(name))
int cnt[10000];
int main(){
	int a, b, c, d, id=0;
	while(cin>>a>>b>>c>>d, a||b||c||d){
		id++;
		MS(cnt, 0);
		cnt[d]++;
		int fst=1, sec=0;
		while(1){
			d = (a*d+b)%c;
			cnt[d]++;
			if(cnt[d]<2)fst++, sec++;
			else if(cnt[d]==2)sec++;
			else break;
		}
		printf("Case %d: %d\n", id, sec-fst+1);
	}
}

