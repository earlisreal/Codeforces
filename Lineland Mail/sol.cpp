#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	int a[n+7];
	for(int i=1;i<=n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=1;i<=n;i++){
		int y,x;
		if(i>1 && i<n){
			x = min(abs(a[i]-a[i+1]),abs(a[i]-a[i-1]));
			y = max(abs(a[i]-a[1]),abs(a[i]-a[n]));
		}else if(i==1){
			x = abs(a[i]-a[i+1]);
			y = abs(a[i]-a[n]);
		}else{
			x = abs(a[i]-a[i-1]);
			y = abs(a[i]-a[1]);
		}
		printf("%d %d\n", x, y);
	}
	return 0;
}
