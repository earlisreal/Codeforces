#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n,t;
	scanf("%d%d",&n,&t);
	if(t==10 && n<2){
		printf("-1");
	}
	else{
		if(t!=10){
			for(int i=0;i<n;i++){
				printf("%d",t);
			}
		}else{
			printf("1");
			for(int i=0;i<n-1;i++){
				printf("0");
			}
		}
	}
	return 0;
}
