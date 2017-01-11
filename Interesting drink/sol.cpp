#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int x[n];
	int m = 0;
	for(int i=0;i<n;i++){
		scanf("%d",&x[i]);
		m = max(m, x[i]);
	}
	sort(x, x+n);
	int q;
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		int f, ans=0;
		scanf("%d",&f);

		if(f>=m) ans = n;
		else
		for(int i=0;i<n;i++){
			if(f>=x[i])ans++;
			else break;
		}

		printf("%d\n",ans);
	}
	
	return 0;
}
