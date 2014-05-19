//带有小数的大数运算真的好烦啊！！！
//首先小数那里，要考虑长度不同的小数，然后要考虑四舍五入，还有四舍五入后，小数总长度不足精度要补足的情况，大概就这些了
#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <set>
using namespace std;
#define RP(i, st, ed) for(int i=st; i<=ed; i++)
#define MS(name, val) memset(name, val, sizeof(name))
#define eps 1e-8
#define zero(x) (((x)>0?(x):-(x))<eps)
const int maxn=10005;
char str[maxn];
int fst[maxn], sec[maxn], ans[maxn], anss[maxn];
void add(int c[], int b[], int a[]){
	c[0]=max(a[0], b[0]);
	RP(i, 1, c[0]){
		c[i]=a[i]+b[i];
		c[i+1]+=c[i]/10;
		c[i]%=10;
	}
	while(c[c[0]+1]){c[0]++, c[c[0]+1]+=c[c[0]]/10, c[c[0]]%=10;}
}
int floatadd(int c[], int a[], int b[]){
	if(b[0]>a[0]){
		reverse(a+1, a+1+a[0]);
		a[0]=b[0];
		reverse(a+1, a+1+a[0]);
		reverse(b+1, b+1+b[0]);
	}else{
		b[0]=a[0];
		reverse(b+1, b+1+b[0]);
	}
	RP(i, 1, c[0]){
		c[i]=a[i]+b[i];
		c[i+1]+=c[i]/10;
		c[i]%=10;
	}
	reverse(c+1, c+1+c[0]);
	int ca=c[c[0]+1];c[c[0]+1]=0;
	while(c[c[0]]==0&&c[0]>2){c[0]--;}
	reverse(c+1, c+1+c[0]);
	return ca;
}
void read(char s[], int a[], int b[]){
	int len=strlen(s);
	int pt=0;
	int i;
	for(i=0; i<len; i++){
		if(s[i]=='$')continue;
		if(s[i]==',')continue;
		if(s[i]=='.')break;
		a[++pt]=s[i]-'0';
	}
	a[0]=pt;pt=0;
	for(; i<len; i++){
		if(s[i]=='.')continue;
		if(s[i]==',')continue;
		b[++pt]=s[i]-'0';
	}
	b[0]=pt;
	reverse(a+1, a+a[0]+1);
}
void print(int a[], int b[]){
	int ca=0;
	MS(fst, 0);
	reverse(b+1, b+b[0]+1);
	if(b[0]>2){
		if(b[3]>=5){
			b[2]++;
			b[1]+=b[2]/10;
			b[2]%=10;
			if(b[1]>=10)ca+=b[1]/10, b[1]%=10;
			b[0]=2;
		}else{
			b[0]=2;
		}
	}else{
		b[0]=2;
	}
	fst[0]=1, fst[1]=ca;
	add(ans, ans, fst);
	reverse(a+1, a+1+a[0]);
	if(a[0]==0)printf("$0");
	else{
		printf("$");
		int left=a[0]%3;
		RP(i, 1, left){
			printf("%d", a[i]);
			if(i==left&&i<a[0])putchar(',');
		}
		int cnt=1;
		RP(i, left+1, a[0]){
			printf("%d", a[i]);
			if(cnt%3==0&&i<a[0])putchar(',');
			cnt++;
		}
	}
	if(b[0]==0){
		puts("");return ;
	}
	putchar('.');
	RP(i, 1, b[0]){
		printf("%d", b[i]);
	}
	puts("");
}
int main(){
	int n;
	while(scanf("%d\n", &n), n){
		MS(ans, 0);
		MS(anss, 0);
		while(n--){
			gets(str);
			MS(sec, 0);
			MS(fst, 0);
			read(str, fst, sec);
			int carry=floatadd(anss, anss, sec);
			fst[1]+=carry;
			add(ans, ans, fst);
		}
		print(ans, anss);
	}
}

