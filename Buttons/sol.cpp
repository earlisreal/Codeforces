#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int ans = 0;
	for(int i=1;i<n;i++){
		ans += i*(n-i);
	}
	printf("%d\n",ans+n);
	return 0;
}
