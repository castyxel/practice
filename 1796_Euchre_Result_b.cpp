//问四人一起打比赛，给出三个胜负情况，求最后人胜负情况，利用比赛局数相等可解啦
#include <iostream>
#include <cstdio>
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
int main(){
	int a, b, c, d, e, f;
	int x, y;
	while(cin>>a>>b>>c>>d>>e>>f, a||b||c||d||e||f){
		int sum=a+b;
		int ssum=sum*4/2;
		x=ssum-a-c-e;
		y=ssum-b-d-f;
		printf("Anna's won-loss record is %d-%d.\n", x, y);
	}
}

