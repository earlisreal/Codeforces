#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int a,b,s;
	scanf("%d%d%d",&a,&b,&s);
	int d = abs(a) + abs(b);
	if(d < s){
		puts((s-d)%2==0?"YES":"NO");
	}else if(d > s){
		printf("NO");
	}else{
		printf("YES");
	}
	return 0;
}
