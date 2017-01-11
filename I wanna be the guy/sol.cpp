#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

bool foo[101];

using namespace std;

bool solve(int n){
	for(int i=1;i<=n;i++){
		if(!foo[i])return false;
	}
	return true;
}

int main(){
	int n;
	scanf("%d",&n);
	int x;
	scanf("%d",&x);
	while(x--){
		int temp;
		scanf("%d",&temp);
		foo[temp] = true;
	}
	scanf("%d",&x);
	while(x--){
		int temp;
		scanf("%d",&temp);
		foo[temp] = true;
	}
	puts(solve(n)?"I become the guy.":"Oh, my keyboard!");
	return 0;
}

