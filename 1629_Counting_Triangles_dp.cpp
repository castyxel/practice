//昨晚打了场渣得不行的cf，dp跪得很惨，今天这题……应说是递推的，但是我开始搞成与前两项相关，后来又搞成于前三项相关，甚至想容斥原理……
//结果是只与前项有关的……考虑正三角和倒三角新增的个数即可
# include<stdio.h>
int n;
int f[501];
void init(){
	int i,j;
	f[1]=1, f[2]=5;
	for(i=3;i<501;i++){
		int last=i-1-(i/2-1)*2;
		int k=i/2;
		f[i]=f[i-1]+(1+i)*i/2+(i-1+last)*k/2;
	}
}
int main(){
	init();
	while(scanf("%d",&n)!=EOF)
		printf("%d\n",f[n]);
	return 0;
}


