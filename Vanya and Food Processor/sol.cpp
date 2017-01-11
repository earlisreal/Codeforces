#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n,h,k;
	scanf("%d%d%d",&n,&h,&k);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int ans = 0, total=a[0], i=1;
	while(total>0 || i<n){
		if(i<n && h-total>=a[i]){
			total+=a[i++];
			continue;
		}else{
			total-=k;
			if(total<0)total=0;
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}
