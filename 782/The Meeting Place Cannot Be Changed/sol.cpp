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

const int N = 2 * 1e5;

int main(int argc, char *argv[])
{
	cout << N * (N-1) / 2;
	int n;
	scanf("%d", &n);
	pair<int, int> p[n];
	/* for (int i = 0; i < n; ++i) { */
	/* 	int x; */
	/* 	scanf("%d", &x); */
	/* 	p[i] = mp(x, 0); */
	/* } */
	/* for (int i = 0; i < n; ++i) { */
	/* 	int x; */
	/* 	scanf("%d", &x); */
	/* 	p[i].sc = x; */
	/* } */
	/* sort(p, p+n); */
	/* float ans = 123456; */
	/* for (int i = 0; i < n; ++i) { */
	/* 	for (int j = 0; j < n; ++j) { */
	/* 		if(j == i)continue; */
	/* 		float d = abs(p[i].fs - p[j].fs); */
	/* 		float t = p[i].sc + p[j].sc; */
	/* 		ans = min(d/t, ans); */
	/* 	} */
	/* } */
	/* printf("%.12f\n", ans); */

	return 0;
}
