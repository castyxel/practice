//对整数的位表示有了更多的理解吧……还有坑爹的格式
//主要是读题渣得不行了……首先要输出有多少个数，然后是每8个一行，最糟糕的是，我忘记了不能直接printf ％x，需要长度保持为2，并且有前导0…………
#include <iostream>
#include <cstdio>
using namespace std;
const int maxn = 10005;
int b[maxn];
int comb(int a, int b) {
	//if(a<0) a+=16;
	//if(b<0) b+=16;
	int ret=0, i, k, kk=16;
	for(i=0, k=1; i<4; i++, k<<=1) {
		if(b&k) ret+=k;
	}
	for(k=1; i<8; i++, k<<=1, kk<<=1) {
		if(a&k) ret+=kk;
	}
	return ret;
}
int main() {
	int a, n;
	b[0]=0;
	int bsum;
	while(~scanf("%d", &n)) {
		bsum=0;
		for(int i=1; i<=n; i++) {
			scanf("%X", &a);
			if(a-bsum<-8) {
				b[i] = -8;
			} else if(a-bsum>7) {
				b[i] = 7;
			} else {
				b[i] = a-bsum;
			}
			bsum += b[i];
		}
		bool fst=true;
		int x;
		printf("%d\n", n/2);
		int pt=0;
		for(int i=1; i<n; i+=2) {
			x=comb(b[i], b[i+1]);
			if(fst) {
				printf("%02x", x);
				fst=false;
			} else printf(" %02x", x);
			pt++;
			if(pt==8) {
				puts("");
				fst=true;
				pt=0;
			}
		}
		if(pt!=0)puts("");
	}
}
