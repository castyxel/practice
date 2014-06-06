//下次遇到输出XXX的，还是直接从原是粘贴复制吧……看起来像Impossible，原来是impossible...
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <map>
using namespace std;
const int maxn = 10005;
long long o[maxn], d[maxn];
int st;
typedef long long ll;
bool fst;
int main(){
	int n;
	while(cin>>n){
		for(int i=0; i<n; i++){
			scanf("%lld%lld", &o[i], &d[i]);
		}
		bool findit;
		for(int i=0; i<n; i++){
			findit=true;
			ll os=0;
			for(int j=0, pt=i+j; j<n; j++, pt++){
				if(pt>=n)pt=0;
				if(os+o[pt]>=d[pt]){
					os=os+o[pt]-d[pt];
				}else{
					findit=false;
					break;
				}
			}
			if(findit){
				printf("%d\n", i);break;
			}
		}
		if(!findit)puts("impossible");//impossible
	}
}

