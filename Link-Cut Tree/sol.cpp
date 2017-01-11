#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

//solve this on java 

int main(){
	long long l,r,k,x=1;
	scanf("%I64d%I64d%I64d",&l,&r,&k);
	bool foo = false;
	while(x<=r){
		if(x>=l){
			printf("%I64d ",x);
			foo = true;
		}
		x *= k;
	}
	if(!foo){
		puts("-1");
	}
	return 0;
}

