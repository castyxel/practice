//不只为何过了...感觉自己就是暴力做了下而已
#include <cstdio>
#include <vector>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 1000005;
char str[maxn];
int cnt[30], len;
bool check(int n){
	if(len%n) return false;
	for(int i=n; i<len; i++){
		if(str[i] != str[i%n]) return false;
	}
	return true;
}
int main(){
	while(scanf("%s", str)){
		if(str[0]=='.')break;
		len=strlen(str);
		memset(cnt, 0, sizeof(cnt));
		for(int i=0; i<len; i++){
			cnt[str[i]-'a']++;
		}
		int mins=maxn;
		for(int i=0; i<26; i++){
			if(cnt[i]==0) continue;
			mins = min(mins, cnt[i]);
		}
		for(int i=mins; i>=1; i--){
			if(len%i)continue;
			if(check(len/i)){
				printf("%d\n", i);
				break;
			}
		}
	}
}

