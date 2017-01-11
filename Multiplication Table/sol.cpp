#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n,x;
	scanf("%d%d", &n,&x);
	int ans = 0;
	for(int i=1;i<=n;i++){
		if(x%i==0){
			if(x/i<=n)ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}
