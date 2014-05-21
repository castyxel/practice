//准备打CF了，当这个来热身吧……求平均数然后找高于及低于的两个
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
#define RRP(i, ed, st) for(int i=ed; i>=st; i--)
#define MS(name, val) memset(name, val, sizeof(name))
#define eps 1e-8
#define zero(x) (((x)>0?(x):-(x))<eps)
#define Lc (id<<1)
#define Rc (Lc|1)
struct node{
	string name;
	int v;
};
node s[10];
int main(){
	int n;
	node les, lar;
	while(cin>>n, n!=-1){
		int a, b, c;
		int sum=0;
		RP(i,1,n){
			cin>>a>>b>>c>>s[i].name;
			s[i].v=a*b*c;
			sum+=s[i].v;
		}
		int aver=sum/n;
		RP(i, 1, n){
			if(s[i].v<aver)les=s[i];
			else if(s[i].v>aver)lar=s[i];
		}
		cout<<lar.name<<" took clay from "<<les.name<<"."<<endl;
	}
}

