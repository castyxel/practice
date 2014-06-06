//给出<120000个输入串，要求输出所有只由两个输入串组成的串
//一开始枚举每个串，并二分找以它为首部分的父串，再二分找剩下的串，觉得这样复杂度会低点……但实际上这是错的，不能二分找父串啊！只能枚举找QvQ，而且这样复杂度略高，还不如枚举每个输入串的两个子串呢…………但这样也能过……可见这数据实在时……随机的就是这么好过QvQ
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <string>
#include <map>
using namespace std;
vector<string>s, ans;
bool inq[120005];
bool vis[120005];
int sz, fapt;
bool findsub(string sub, string fa) {
	int fsz=fa.size(), ssz=sub.size();
	if(fsz<=ssz) return false;
	for(int i=0; i<ssz; i++) {
		if(fa[i]!=sub[i])return false;
	}
	return true;
}
bool operator<(string& a, string& b){
	int asz=a.size(), bsz=b.size();
	int sz = min(asz, bsz);
	for(int i=0; i<sz; i++){
		if(a[i]==b[i]) continue;
		return a[i]<b[i];
	}
	return asz<bsz;
}
bool getanother(string tg) {
	int l=0, r=sz-1;
	while(l<=r) {
		int mid=l+r;
		mid>>=1;
		if(s[mid]==tg ) {
			return true;
		}
		if(s[mid]<tg)l=mid+1;
		else r=mid-1;
	}
	return false;
}
int main() {
	string str;
	sz=0;
	memset(inq, false, sizeof(inq));
	while(cin>>str) {
		if(str=="#")break;
		s.push_back(str);
		sz++;
	}
	for(int i=0; i<sz; i++) {
		string fa;
		int j;
		for(j=i+1; j<sz; j++){
			if(!findsub(s[i], s[j]))break;
		}
		int ed=j;
		for(j=i+1; j<ed; j++){
			if(inq[j])continue;
			fa=s[j];
			int fsz=fa.size(), ssz=s[i].size();
			string ntg = fa.substr(ssz, fsz-ssz);
			if(getanother(ntg)){
				ans.push_back(fa);
				inq[j]=true;
			}
		}
	}
	int sz=ans.size();
	sort(ans.begin(), ans.end());
	for(int i=0; i<sz; i++)
		cout<<ans[i]<<endl;

}

