#include <bits/stdc++.h>

#define maxn 1000006
#define pp push_back
#define pf push_front
#define mp make_pair

using namespace std;

int a[maxn];

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n; ++i) {
		int f;
		scanf("%d", &f);
		for(int j = sum + 1; j <= sum + f; j++){
			a[j] = i;
		}
		sum += f;
	}
	int m;
	scanf("%d", &m);
	for (int i = 0; i < m; ++i) {
		int x;
		scanf("%d", &x);
		printf("%d\n", a[x]);
	}
	return 0;
}
