//好麻烦…
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
using namespace std;
string c[31]={
	".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
	"....", "..", ".---", "-.-", ".-..", "--", "-.",
	"---", ".--.", "--.-", ".-.", "...", "-", "..-",
	"...-", ".--", "-..-", "-.--", "--..",
	"..--", "---.", ".-.-", "----"
};
string s;
int cs[500];
char sear(string tar){
	RP(i, 0, 29){
		if(c[i]==tar){
			if(i<26)return 'A'+i;
			else if(i==26) return '_';
			else if(i==27) return '.';
			else if(i==28) return ',';
			else return '?';
		}
	}
}
void tran(){
	int len=s.size();
	string cur="";
	string tmp="";
	RP(i, 0, len-1){
		if(isupper(s[i]))tmp=tmp+c[s[i]-'A'], cs[i]=c[s[i]-'A'].size();
		else if(s[i]=='_')tmp=tmp+"..--", cs[i]=4;
		else if(s[i]=='.')tmp=tmp+"---.", cs[i]=4;
		else if(s[i]==',')tmp=tmp+".-.-", cs[i]=4;
		else tmp=tmp+"----", cs[i]=4;
	}
	cur=tmp;
	//reverse(cur.begin(), cur.end());
	reverse(cs, cs+len);
	int pt=0;
	RP(i, 0, len-1){
		tmp=cur.substr(pt, cs[i]);
		putchar(sear(tmp));
		pt+=tmp.size();
	}
}
int main(){
	int n;
	cin>>n;
	RP(i, 1, n){
		cin>>s;
		cout<<i<<": ";tran();puts("");

	}
}

