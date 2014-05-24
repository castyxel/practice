//算下一张图灰度
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <string>
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
#define MS(name, val) memset(name, val, sizeof(name))
using namespace std;
const int maxn=105;
int r[maxn][maxn], g[maxn][maxn], b[maxn][maxn];
int ans[maxn][maxn];
int main(){
	int id=0;
	int n, m;
	while(cin>>n>>m, n||m){
		id++;
		RP(i, 1, n)
			RP(j, 1, n)
			cin>>r[i][j];
		RP(i, 1, n)
			RP(j, 1, n)
			cin>>g[i][j];
		RP(i, 1, n)
			RP(j, 1, n)
			cin>>b[i][j];
		cout<<"Case "<<id<<":"<<endl;
		RP(i, 1, n){
			RP(j, 1, n){
				if(j==n)cout<<(r[i][j]+b[i][j]+g[i][j])/3<<endl;
				else cout<<(r[i][j]+b[i][j]+g[i][j])/3<<",";
			}
		}
	}
}

