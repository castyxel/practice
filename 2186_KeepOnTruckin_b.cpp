#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>
using namespace std;
const double eps=1e-6;
int main(){
    int h[3];
    while(cin>>h[0]>>h[1]>>h[2]){
        bool findit=false;
        for(int i=0; i<3; i++){
            if(h[i]<=168){
                findit=true;
                cout<<"CRASH "<<h[i]<<endl;
                break;
            }
        }
        if(!findit)puts("NO CRASH");
    }
}
