#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n,a;
	scanf("%d%d",&n,&a);
	int t[n+7];
	for(int i=1;i<=n;i++){
		scanf("%d",&t[i]);
	}
	int ans = 0;
	for(int i=1;i<=n;i++){
		int d = abs(a-i);
		if(a-d<1){
			ans+=t[a+d];
		}
		else if(a+d>n){
			ans+=t[a-d];
		}
		else if(t[a-d]==t[a+d]){
			ans+=t[a-d];
		}
	}
	printf("%d\n",ans);
	return 0;
}
