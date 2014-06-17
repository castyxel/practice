//把递归改成循环就好了
#include  <cstdio>
#include  <iostream>
#include  <algorithm>
using namespace std;
const int maxn = 25;
int w[maxn][maxn][maxn];
int getans(int a, int b, int c){
	if(a<=0 || b<=0 || c<=0) return 1;
	if(a>20 || b>20 || c>20) return w[20][20][20];
	return w[a][b][c];
}
void preHandle(){
	for(int i=0; i<maxn ;i++){
		for(int j=0; j<maxn; j++)  {
			w[0][i][j] = 1, w[i][0][j]=1, w[i][j][0]=1;
		}
	}
	for(int a=1; a<maxn; a++){
		for(int b=1; b<maxn; b++){
			for(int c=1; c<maxn; c++){
				if(a<b&&b<c){
					w[a][b][c]=w[a][b][c-1]+w[a][b-1][c-1]-w[a][b-1][c];
				}else{
					w[a][b][c]=w[a-1][b][c]+w[a-1][b-1][c]+w[a-1][b][c-1]-w[a-1][b-1][c-1];
				}
			}
		}
	}
}
int main(){
	preHandle();
	int x, y, z;
	while(cin>>x>>y>>z){
		if( x==-1 && y==-1 && z==-1) break;
		printf("w(%d, %d, %d) = %d\n", x, y, z, getans(x, y, z));
	}
}

