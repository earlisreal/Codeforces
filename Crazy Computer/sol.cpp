#include <bits/stdc++.h>

#define maxn 100000008
#define pp push_back
#define pf push_front
#define mp make_pair

using namespace std;

int main(int argc, char *argv[])
{
	int n, c, a = 0, ans = 0;
	scanf("%d %d", &n, &c);
	for (int i = 0; i < n; ++i) {
		int t;
		scanf("%d", &t);
		if(t-a>c){
			ans = 0;
		}
		a = t;
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}
