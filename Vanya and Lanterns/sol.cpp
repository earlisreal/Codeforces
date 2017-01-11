#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int l,n;
	scanf("%d%d",&n,&l);	
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int ans = a[0]*2;
	for(int i=0;i<n-1;i++){
		ans = max(a[i+1]-a[i], ans);
	}
	ans = max((l-a[n-1])*2, ans);
	printf("%.9f",(double)ans/2);

	return 0;
}
