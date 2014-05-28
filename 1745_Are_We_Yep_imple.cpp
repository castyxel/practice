//简单模拟，注意下格式吧……读完后return 下0，PE了两回，真是够
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int tg;
	bool fst=true;
	while(cin>>tg){
		if(tg==5280){
			while(cin>>tg);
			return 0;
		}
		if(fst)fst=false;
		else puts("");
		int pre=0;
		int cur;
		while(cin>>cur){
			if(cur==tg){
				printf("Moving from %d to %d: found it!\n", pre, cur);
				break;
			}
			if(abs(cur-tg)==abs(pre-tg)){
				printf("Moving from %d to %d: same.\n", pre, cur);                ;
			}else if(abs(cur-tg)<abs(pre-tg)){
				printf("Moving from %d to %d: warmer.\n", pre, cur);
			}else{
				printf("Moving from %d to %d: colder.\n", pre, cur);
			}
			pre=cur;
		}
	}
	return 0;
}
