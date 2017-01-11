#include <bits/stdc++.h>

#define maxn 100000008
#define pp push_back
#define pf push_front
#define mp make_pair

using namespace std;

int solve()

int main(int argc, char *argv[])
{
	int n, k;
	scanf("%d %d", &n, &k);
	int l[n];
	int r[n];
	for (int i = 0; i < n; ++i) {
		scanf("%d %d", &l[i], &r[i]);
	}
	if(count == k)
		printf("%d\n", ans);
	else
		puts("0");
	return 0;
}
