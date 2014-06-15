//比较简单的dp，记得处理当前位为0的情况
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <string>
#include <map>
using namespace std;
const int maxn = 1e5+5;
int dp[maxn];
string str;
int main() {
	while(cin>>str, str!="0") {
		int len=str.size();
		memset(dp, 0, sizeof(dp));
		dp[0]=1;
		for(int i=1; i<len; i++) {
			if(str[i]!='0')dp[i]+=dp[i-1];
			if(str[i]-'0'+10*(str[i-1]-'0')<=26 && str[i-1]!='0') {
				if(i-2<0)dp[i]++;
				else dp[i]+=dp[i-2];
			}
		}
		cout<<dp[len-1]<<endl;
	}
}

