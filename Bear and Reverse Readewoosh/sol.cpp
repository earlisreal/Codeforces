#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n,c;
	scanf("%d%d",&n,&c);
	int p[n+2];
	for(int i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	int t[n+2];
	int a=0;
	int limak = 0, rade = 0;
	for(int i=0;i<n;i++){
		scanf("%d",&t[i]);
		a+= t[i];
		limak += max(0,p[i]-(c*a));
	}
	a=0;
	for(int i=n-1;i>=0;i--){
		a+=t[i];
		rade += max(0,p[i]-(c*a));
	}

	if(rade==limak){
		puts("Tie");
	}
	else if(rade>limak){
		puts("Radewoosh");
	}
	else{
		puts("Limak");
	}
	return 0;
}
