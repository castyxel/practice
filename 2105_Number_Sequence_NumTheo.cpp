//虽然看起来是显然的矩阵快速幂，我打算用循环节写……因为取模数很小
//想得非常残，中间加了各种调试用的代码
//有一点心得吧，找这种循环节，特别是开头不确定的，用int数组计录，当确定当前值已经用过，才开始记数，直到找到一个数出现了两次，就可以断开了
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
int vis[7][7];
int f[3]={1, 1, 0};
typedef pair<int, int>P;
vector<P> s;
void init(){
	MS(vis, 0);
	f[0]=1, f[1]=1;
	s.clear();
}
int main(){
	int a, b, n;
	while(cin>>a>>b>>n, a||b||n){
		init();
		if(n<=2)cout<<1<<endl;
		else{
			int cnt=0;
			RP(i, 2, n-1){
				int xx=(i-1+3)%3;
				int yy=(i-2+3)%3;
				int fa=f[xx], fb=f[yy];
				if(vis[fa][fb]==1)cnt++;
				if(vis[fa][fb]==2){
					//       cout<<"#"<<fa<<" "<<fb<<endl;
					break;
				}
				else vis[fa][fb]++;
				f[i%3]=(a*fa+b*fb)%7;
				s.push_back(pair<int, int>(fa, fb));
				//    cout<<cnt<<":"<<fa<<" "<<fb<<" "<<f[i%3]<<endl;
			}
			if(cnt){
				n=(n-3)%cnt;
				// cout<<n<<endl;
				int fa=s[n%cnt].first, fb=s[n%cnt].second;
				int ans=a*fa+b*fb;
				ans%=7;
				cout<<ans<<endl;
			}else
				cout<<f[(n-1)%3]<<endl;
		}
	}
}

