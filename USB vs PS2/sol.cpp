#include <bits/stdc++.h>

#define maxn 100000008
#define pp push_back
#define pf push_front
#define mp make_pair
#define fs first
#define sc second
#define ll long long
#define ull unsigned long long

using namespace std;

int main(int argc, char *argv[])
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int m;
	scanf("%d", &m);
	pair<int, char> p[m];
	for (int i = 0; i < m; ++i) {
		int x;
		scanf("%d", &x);
		char s[10];
		scanf("%s", s);
		p[i] = mp(x, s[0]);
	}
	sort(p, p+m);

	int ans = 0;
	long long total = 0;

	for (int i = 0; i < m; ++i) {
		if(a < 1 && b < 1 && c < 1)break;
		if(p[i].sc == 'U'){
			if(a > 0){
				a--;
				ans++;
				total += p[i].fs;
			}
			else if(c > 0){
				c--;
				ans++;
				total += p[i].fs;
			}
		}else{
			if(b > 0){
				b--;
				ans++;
				total += p[i].fs;
			}
			else if(c > 0){
				c--;
				ans++;
				total += p[i].fs;
			}
		}
	}

	printf("%d %I64d\n", ans, total);

	return 0;
}

