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

const int N = 1e5 + 7;

bool a[N];

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	int count = 0, ans = 0;
	for (int i = 0; i < n * 2; ++i) {
		int x;
		scanf("%d", &x);
		if(a[x]){
			count--;
		}else{
			a[x] = true;
			count++;
		}
		ans = max(ans, count);
	}
	printf("%d\n", ans);
	return 0;
}