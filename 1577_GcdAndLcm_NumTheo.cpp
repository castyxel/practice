//¼òµ¥ÊýÂÛ
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>
using namespace std;
const double eps=1e-6;
typedef long long ll;
ll gcd(ll a, ll b){
    while(b^=a^=b^=a%=b);
    return a;
}
int main(){
    ll g, lcm;
    while(cin>>g>>lcm){
        ll ans=0;
        ll s=lcm*g;
        for(ll x=g; x<=lcm; x+=g){
            if(s%x)continue;
            ll gxy=gcd(x, s/x);
            if(gxy==g) ans++;
        }
        cout<<ans<<endl;
    }
}
