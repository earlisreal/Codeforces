#include <bits/stdc++.h>

using namespace std;

int get(int n){
	char bar[3];
	printf("%d\n",n);
	fflush(stdout);
	scanf("%s",bar);
	if(strcmp(bar,"yes")==0){
		return 1;
	}
	return 0;
}

void solve(){
	int foo = 0;
	char bar[3];
	for(int i=2;i<=19;i++){
		if(i==10)continue;
		foo+=get(i);
	}
	foo+=get(25);
	foo+=get(82);
	foo+=get(94);
	if(foo>1){
		printf("composite\n");
		fflush(stdout);
	}
	else{
		printf("prime\n");
		fflush(stdout);
	}
}

int main(){
	solve();
	return 0;
}
