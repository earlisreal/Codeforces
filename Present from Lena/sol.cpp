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
	for (int i = 0; i <= n; ++i) {
		for (int j = 0; j < n - i; ++j) {
			printf("  ");
		}
		for (int j = 0; j <= i; ++j) {
			printf("%d", j);
			if(j < i) printf(" ");
		}
		for (int j = i - 1; j >= 0; j--) {
			printf(" %d", j);
		}
		printf("\n");
	}
	for (int i = 0; i <= n; ++i) {
		for (int j = 0; j <= i; ++j) {
			printf("  ");
		}
		for (int j = 0; j < n - i; ++j) {
			printf("%d", j);
			if(j < n - i - 1) printf(" ");
		}
		for (int j = n - i - 2; j >= 0; j--) {
			printf(" %d", j);
		}
		printf("\n");
	}
	return 0;
}
