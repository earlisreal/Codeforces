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
	long long a[n];
	long long sum = 0;
	for (int i = 0; i < n; ++i) {
		scanf("%I64d", &a[i]);
		sum += a[i];
	}
	sort(a, a+n);
	long long ans = sum;
	for (int i = 0; i < n - 1; ++i) {
		ans += sum;
		sum -= a[i];
	}
	printf("%I64d\n", ans);
	return 0;
}
