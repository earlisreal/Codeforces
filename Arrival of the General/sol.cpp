#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int a[n+7];
	int x=0;
	int y = n+2;
	a[x]=0;
	a[y]=1234;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(a[i]>a[x])x=i;
		if(a[i]<=a[y])y=i;
	}
	int ans = x-1;
	if(x>y)ans += n-y-1;
	else ans+= n-y;	
	printf("%d\n",ans);
	return 0;
}
