//暴力解被覆盖的长方形个数，数据很小。。如果很大的话，我猜得用扫描线来做了
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <string>
#include <map>
using namespace std;
struct rec{
	int xi, yi, xa, ya;
	void read(){
		scanf("%d%d%d%d", &xi, &xa, &yi, &ya);
	}
};
vector<rec>s;
bool cover(rec a, rec b){
	if(b.xi<=a.xi && b.yi<=a.yi && b.xa>=a.xa && b.ya>=a.ya)return true;
	return false;
}
int main(){
	int n;
	rec t;
	while(~scanf("%d", &n)){
		s.clear();
		for(int i=0; i<n; i++){
			t.read();
			s.push_back(t);
		}

		int cnt=0;
		int sz=s.size();
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(i==j) continue;
				if(cover(s[i], s[j])){
					cnt++;
					//cout<<i<<" "<<j<<endl;
					break;
				}
			}
		}
		printf("%d\n", cnt);
	}
}

