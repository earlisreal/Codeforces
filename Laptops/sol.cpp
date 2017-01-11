#include <bits/stdc++.h>

#define maxn 100000008
#define pp push_back
#define pf push_front
#define mp make_pair
#define fs first
#define sc second

using namespace std;

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	int a, b;
	for (int i = 0; i < n; ++i) {
		scanf("%d %d", &a, &b);
		if(a != b){
			puts("Happy Alex");
			return 0;
		}
	}
	puts("Poor Alex");
	return 0;
}
