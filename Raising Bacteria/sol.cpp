#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n, ans = 0;
	scanf("%d",&n);
	for(;n;n>>=1){
		if(n&1)ans++;
	}
	printf("%d\n", ans);
	return 0;
}
