#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

void solve(int n, int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			char c;
			scanf(" %c", &c);
			if(c == 'Y' || c == 'M' || c == 'C'){
				printf("#Color");
				return;
			}
		}
	}
	printf("#Black&White");
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	solve(n,m);
	return 0;
}
