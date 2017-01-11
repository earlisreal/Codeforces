#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n,h;
	scanf("%d%d",&n,&h);
	int ans = 0;
	for(int i=0;i<n;i++){
		int f;
		scanf("%d",&f);
		if(f>h)ans++;
	}
	printf("%d\n",n+ans);
	return 0;
}
