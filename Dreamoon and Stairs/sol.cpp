#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int solve(){
	int n,m;
	scanf("%d %d", &n, &m);
	for(int i=ceil((double)n/2);i<=n;i++){
		if(i%m==0)return i;
	}
	return -1;
}

int main(){
	printf("%d\n", solve());

	return 0;
}
