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
	int n, l;
	scanf("%d %d", &n, &l);
	vector<int> a;
	vector<int> b;
	int x[n];
	int y[n];
	scanf("%d", &x[0]);
	for (int i = 1; i < n; ++i) {
		scanf("%d", &x[i]);
		a.pp(x[i] - x[i-1]);
	}
	a.pp(l - x[n-1] + x[0]);
	scanf("%d", &y[0]);
	for (int i = 1; i < n; ++i) {
		scanf("%d", &y[i]);
		b.pp(y[i] - y[i-1]);
	}
	b.pp(l - y[n-1] + y[0]);

	int count = 0;
	for (int i = 0; i < n; ++i) {
		count = 0;
		for (int j = 0; j < n; ++j) {
			if(a[j] != b[j]){
				a.pp(a[0]);
				a.erase(a.begin());
				break;
			}
			count++;
		}
	}

	puts(count == n ? "YES" : "NO");
	return 0;
}
