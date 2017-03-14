#include <bits/stdc++.h>

#define maxn 100005
#define pp push_back
#define pf push_front
#define mp make_pair
#define fs first
#define sc second
#define ll long long
#define ull unsigned long long

using namespace std;

/* int cache[maxn]; */

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a%b);
}

int f(int i, int a[], int n, int g, int count){
	if(g == 1) return count - 1;
	if(i == n) return count;
	return max(f(i+1, a, n, gcd(a[i], g), count + 1),
			f(i+1, a, n, g, count));
}

int foo[20];

int a[maxn];

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	int ans = 1;
	for (int i = 0; i < n; ++i) {
		int x;
		scanf("%d", &x);
		a[x]++;
	}
	for (int i = 2; i < maxn; ++i) {
		int count = 0;
		for (int j = i; j < maxn; j += i) {
			count += a[j];
		}
		ans = max(ans, count);
	}
	printf("%d\n", ans);
	return 0;
}
