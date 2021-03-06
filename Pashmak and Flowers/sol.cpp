#include <bits/stdc++.h>

#define maxn 100000008
#define pp push_back
#define pf push_front
#define mp make_pair

using namespace std;

int main(int argc, char *argv[])
{
	long long n;
	scanf("%I64d", &n);
	int a[n];
	int c = 1e9+7;
	int d = -1e9;
	for (int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
		d = max(d, a[i]);
		c = min(c, a[i]);
	}
	long long x = 0, y = 0;
	for (int i = 0; i < n; ++i) {
		if(a[i] == d) y++;
		if(a[i] == c) x++;
	}
	long long ans = x * y;
	if(d - c == 0){
		ans = n * (n-1) / 2;
	}
	printf("%d %I64d\n", d - c, ans);
	return 0;
}
