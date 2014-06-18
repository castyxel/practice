//好奇怪...明明化简后两个等式一样啊，但就是一个WA一个AC...sad
#include <cstdio>
#include <vector>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 5005;
int bit[maxn*4], num[maxn], inv[maxn];
int n;
int lowbit(int x){
	return x&-x;
}
int sum(int i){
	int ret=0;
	while(i>0){
		ret += bit[i];
		i -= lowbit(i);
	}
	return ret;
}
void add(int i){
	while(i<=n){
		bit[i]++;
		i += lowbit(i);
	}
}
int main(){
	while(~scanf("%d", &n)){
		int s=0;
		memset(bit, 0, sizeof(bit));
		for(int i=1; i<=n; i++){
			scanf("%d", &num[i]);
			num[i]++;
			add(num[i]);
			inv[i] = i - sum(num[i]);
			s += inv[i];
		}
		int ans=s;
		for(int i=1; i<=n; i++){
			s = s-(num[i]-1)+(n-num[i]);
			ans = min(s, ans);
			//  cout<<s<<endl;
		}
		printf("%d\n", ans);
	}
}
/*
#include <cstdio>
#include <vector>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 5005;
int bit[maxn>>2], num[maxn], inv[maxn];
int n;
int lowbit(int x){
return x&-x;
}
int sum(int i){
int ret=0;
while(i>0){
ret += bit[i];
i -= lowbit(i);
}
return ret;
}
void add(int i){
while(i<=n){
bit[i]++;
i += lowbit(i);
}
}
int main(){
while(~scanf("%d", &n)){
int s=0;
memset(bit, 0, sizeof(bit));
memset(inv, 0, sizeof(inv));
for(int i=1; i<=n; i++){
scanf("%d", &num[i]);
num[i]++;
add(num[i]);
inv[i] = i - sum(num[i]);
s += inv[i];
}
int ans=s;
for(int i=1; i<n; i++){
int big = n-num[i]-inv[i];
int small = n-i-big;
int bfsmall = i-1-inv[i];
s = s-small+inv[i]-bfsmall+big;
ans = min(s, ans);
}
printf("%d\n", ans);
}
}
 */
