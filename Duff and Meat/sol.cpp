#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	int a[n], p[n];
	for(int i=0;i<n;i++){
		scanf("%d %d", &a[i], &p[i]);
	}
	int ans = 0;
	for(int i=0;i<n;i++){
		if(i<n-1 && p[i]<p[i+1]){
			p[i+1] = p[i];
		}
		ans += a[i]*p[i];
	}
	printf("%d\n", ans);
	return 0;
}
