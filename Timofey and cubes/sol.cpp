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
	int n;
	scanf("%d", &n);
	int a[n+7];
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &a[i]);
	}
	bool b = true;
	for (int i = 1; i <= n - i + 1; ++i) {
		if(b){
			int temp = a[i];
			a[i] = a[n - i + 1];
			a[n - i + 1] = temp;
		}
		b = !b;
	}
	for (int i = 1; i <= n; ++i) {
		printf("%d ", a[i]);
	}
	return 0;
}
