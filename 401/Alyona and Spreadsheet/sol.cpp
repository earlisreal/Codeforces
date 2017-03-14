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

int cols[N];
int rows[N];
int cnts[N];


int main(int argc, char *argv[])
{
	freopen("out", "w", stdout);
	int n, m;
	scanf("%d %d", &n, &m);
	printf("\n");
	int index = 1;
	for (int i = 1; i <= n; ++i) {
		bool ok = false;
		for (int j = 1; j <= m; ++j) {
			int x;
			scanf("%d", &x);
			if(x >= cols[j]){
				ok = true;
			}
			cols[j] = x;
		}
		if(!ok){
			cout << "pumasok" << endl;
			for (int j = index; j < i; ++j) {
				rows[j] = i;
			}
			index = i;
		}
	}

	printf("test\n");

	for (int i = 1; i <= m; ++i) {
		printf("%d ", rows[i]);
	}

	cout << endl;

	int k;
	scanf("%d", &k);
	while(k--){
		int l, r;
		scanf("%d %d", &l, &r);
		puts(rows[l] >= r ? "YES" : "NO");
	}
	
	return 0;
}