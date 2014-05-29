//给出了每个子进化过程中生物数量的转化关系，再给出总的子进程数，然后问究极进化生物的最终数量
//进化关系都是生物a转生物b的，把这些整成一个矩阵，然后矩阵快速幂解即可
//主要是u到u这个转化，是1-sigma(p(u,i))
#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
#define MS(name, val) memset(name, val, sizeof(name))
#define Lc (id<<1)
#define Rc (Lc|1)
using namespace std;
const int maxn = 205;
int sz;
struct mat{
	double m[maxn][maxn];
	void cl(){
		RP(i, 0, sz)RP(j, 0, sz)m[i][j]=0;
	}
	void init(){
		cl();
		RP(i, 0, sz)m[i][i]=1;
	}
};
mat operator*(mat& a, mat &b){
	mat ret;ret.cl();
	RP(i, 0, sz){
		RP(j, 0, sz){
			RP(k, 0, sz){
				ret.m[i][j] += a.m[i][k] * b.m[k][j];
			}
		}
	}
	return ret;
}
double pop[maxn];
mat p;
mat quickpow(mat& a, int n){
	mat ret;ret.init();
	while(n){
		if(n&1) ret=ret*a;
		a=a*a;
		n>>=1;
	}
	return ret;
}
int main(){
	int n, m, l;
	int u, v;
	double ps;
	while(scanf("%d%d", &n, &m), n||m){
		sz=n-1;
		RP(i, 0, n-1)scanf("%lf", &pop[i]);
		scanf("%d", &l);
		p.init();
		while(l--){
			scanf("%d%d%lf", &u, &v, &ps);
			p.m[u][v]=ps;
			p.m[u][u]-=ps;
		}
		p = quickpow(p, m);
		double ans=0;
		RP(i, 0, n-1){
			ans+=pop[i]*p.m[i][n-1];
		}
		printf("%.0lf\n", ans);
	}
}

