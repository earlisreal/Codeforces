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
	int n, m, z;
	scanf("%d %d %d", &n, &m, &z);
	int foo = n, bar = m, ans = 0;
	for (int i = 1; i <= z; ++i) {
		if(i % n == 0 && i % m == 0){
			ans++;
		}
		/* if(bar == foo){ */
		/* 	printf("foo -> %d bar -> %d\n", foo, bar); */
		/* 	ans++; */
		/* } */
		/* if(i == foo){ */
		/* 	foo += n; */
		/* } */
		/* if(i == bar){ */
		/* 	bar += m; */
		/* } */
	}
	printf("%d\n", ans);
	return 0;
}
