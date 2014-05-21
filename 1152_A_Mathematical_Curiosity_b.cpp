//模拟一下过程即可
#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <set>
using namespace std;
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
#define MS(name, val) memset(name, val, sizeof(name))
#define eps 1e-8
#define zero(x) (((x)>0?(x):-(x))<eps)
int main(){
	int ncase;cin>>ncase;
	int id=0;
	while(ncase--){
		int n, m;id=0;
		while(cin>>n>>m, n||m){
			id++;
			int cnt=0;
			RP(i, 1, n-1){
				RP(j, i+1, n-1){
					if((i*i+j*j+m)%(i*j)==0)
						cnt++;

				}
			}
			printf("Case %d: %d\n", id, cnt);
		}
		if(ncase)puts("");
	}
}

