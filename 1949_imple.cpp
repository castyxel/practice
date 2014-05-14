//仍然是模拟，判断下矩阵什么的，开到10000＊10000的话，大概能用二维线段树吧？
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
int mat[105][105];
int main(){
	int n;
	while(cin>>n, n){
		RP(i, 1, n){
			RP(j, 1, n){
				cin>>mat[i][j];
			}
		}
		int rc=0, lc=0;
		int x, y;
		RP(i, 1, n){
			int sum=0;
			RP(j, 1, n){
				sum+=mat[i][j];
			}
			if(sum&1){rc++;x=i;}
		}
		RP(j, 1, n){
			int sum=0;
			RP(i, 1, n){
				sum+=mat[i][j];
			}
			if(sum&1){lc++;y=j;}
		}
		if(rc==0&&lc==0)puts("OK");
		else if(lc==1&&rc==1)printf("Change bit (%d,%d)\n", x, y);
		else puts("Corrupt");
	}
}

