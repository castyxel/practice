//细心一点就好，细菌不能为负数
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
int s[2][25][25], d[25];
int dir[4][2]={0, 1, 0, -1, 1, 0, -1, 0};
int main(){
	int ncase;
	cin>>ncase;
	while(ncase--){
		int n;cin>>n;
		memset(s, 0, sizeof(s));
		RP(i, 0, 15)cin>>d[i];
		RP(i, 1, 20){
			RP(j, 1, 20){
				scanf("%d", &s[n&1][i][j]);
			}
		}
		while(n){
			RP(i, 1, 20){
				RP(j, 1, 20){
					int ds=s[n&1][i][j];
					RP(k, 0, 3){
						ds+=s[n&1][i+dir[k][0]][j+dir[k][1]];
					}
					s[(n&1)^1][i][j]=min(3, max(0,s[(n&1)][i][j]+d[ds]));

				}
			}
			n--;
		}
		RP(i, 1, 20){
			RP(j, 1, 20){
				if(s[0][i][j]==0)putchar('.');
				else if(s[0][i][j]==1)putchar('!');
				else if(s[0][i][j]==2)putchar('X');
				else putchar('#');
			}
			puts("");
		}
		if(ncase)puts("");
	}
}

