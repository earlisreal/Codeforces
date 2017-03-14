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
const int N = 123;

int a[N];
int b[N];

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		int x;
		scanf("%d", &x);
		a[x]++;
	}
	for (int i = 0; i < n; ++i) {
		int x;
		scanf("%d", &x);
		b[x]++;
	}
	int ans = 0;
	for (int i = 1; i <= 5; ++i) {
		int mn = min(a[i], b[i]);
		int t = a[i] + b[i];
		if(t % 2 == 0){
			if(a[i] != b[i]){
				ans += (t/2) - mn;
			}
		}else{
			ans = -1;
			break;
		}
	}
	if(ans != -1){
		printf("%d\n", ans / 2);
	}else{
		puts("-1");
	}
	return 0;
}
