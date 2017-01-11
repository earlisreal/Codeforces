#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	int ans = 0;
	for(int i=0;i<n;i++){
		int t;
		scanf("%d", &t);
		if(t+k<=5){
			ans++;
		}
	}
	printf("%d", ans/3);
	return 0;
}
