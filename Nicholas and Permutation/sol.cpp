#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int a=100,b=0;
	int x=0,y=0;
	for(int i=1;i<=n;i++){
		int f;
		scanf("%d",&f);
		if(f<a){
			x=i;
			a=f;
		}
		if(f>b){
			y=i;
			b=f;
		}
	}
	int foo = max(abs(1-x),abs(n-x));
	int bar = max(abs(1-y),abs(n-y));
	printf("%d\n",max(foo,bar));
	return 0;
}
