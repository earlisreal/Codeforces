#include <bits/stdc++.h>

#define maxn 100000008
#define pp push_back
#define pf push_front
#define mp make_pair
#define fs first
#define sc second
#define ll long long
#define ull unsigned long long

using namespace std;

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	int mx = 0;
	int a[n];
	for (int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
		mx = max(mx, a[i]);
	}

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		ans += mx - a[i];
	}
	printf("%d\n", ans);

	return 0;
}
