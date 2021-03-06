#include <bits/stdc++.h>

#define maxn 102
#define pp push_back
#define pf push_front
#define mp make_pair

using namespace std;

int dp[maxn];

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		int t;
		scanf("%d", &t);
		dp[t]++;
	}
	int m;
	scanf("%d", &m);
	int a[m];
	for (int i = 0; i < m; ++i) {
		scanf("%d", &a[i]);
	}
	sort(a,a+m);
	int ans = 0;
	for (int i = 0; i < m; ++i) {
		int t = a[i];
		if(dp[t-1]){
			ans++;
			dp[t-1]--;
		}
		else if(dp[t]){
			ans++;
			dp[t]--;
		}
		else if(dp[t+1]){
			ans++;
			dp[t+1]--;
		}
	}
	printf("%d\n", ans);
	return 0;
}
