#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int foo = 0;
	for(int i=0;i<5;i++){
		int x;
		scanf("%d",&x);
		foo+=x;
	}	
	if(foo%5>0){
		puts("-1");
	}else if(foo==0){
		puts("-1");
	}else{
		printf("%d\n",foo/5);
	}
	return 0;
}
