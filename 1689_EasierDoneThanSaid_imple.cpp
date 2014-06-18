//模拟过程
#include <cstdio>
#include <vector>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 25;
char str[maxn];
bool isvowel(char x){
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u') return true;
	return false;
}
bool consec(int i){
	//if(!isvowel(str[i])||!isvowel(str[i+1])) return true;
	if(str[i]=='e'&&str[i+1]=='e') return true;
	else if(str[i]=='o'&&str[i+1]=='o') return true;
	else if(str[i]==str[i+1]) return false;
	else return true;
}
bool check(){
	int len=strlen(str);
	int cnt=0;
	for(int i=0; i<len; i++){
		if(isvowel(str[i]))cnt++;
	}
	if(cnt<1) return false;

	cnt=0;
	for(int i=0; i<len; ){
		if(isvowel(str[i])){
			while(isvowel(str[i]) && i<len)cnt++, i++;
			if(cnt>=3) return false;
			cnt=0;
		}else{
			while(!isvowel(str[i]) && i<len)cnt++, i++;
			if(cnt>=3) return false;
			cnt=0;
		}
	}

	for(int i=0; i<len-1; i++){
		if(consec(i)) continue;
		return false;
	}

	return true;
}

int main(){
	while(scanf("%s", str)){
		if(str[0]=='e' && str[1]=='n' && str[2]=='d') break;
		if(check())
			printf("<%s> is acceptable.\n", str);
		else
			printf("<%s> is not acceptable.\n", str);
	}
}

