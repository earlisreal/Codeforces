#include <bits/stdc++.h>

#define maxn 100000008
#define pp push_back
#define pf push_front
#define mp make_pair
#define fs first
#define sc second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	int mn = 1e9 + 7;
	int mx = 0;
	int a[n];
	for (int i = 0; i < n; ++i) {
		int x;
		scanf("%d", &x);
		mn = min(mn, x);
		mx = max(mx, x);
		a[i] = x;
	}
	int ans = n;
	for (int i = 0; i < n; ++i) {
		if(a[i] == mx){
			ans--;
		}else if(a[i] == mn){
			ans--;
		}
	}
	printf("%d\n", ans);
	return 0;
}
