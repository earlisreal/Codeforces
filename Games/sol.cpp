#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	int ans = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]==b[j])ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}
