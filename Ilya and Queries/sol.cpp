#include <bits/stdc++.h>

#define maxn 100005
#define pp push_back
#define pf push_front
#define mp make_pair
#define fs first
#define sc second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int a[maxn];

int main(int argc, char *argv[])
{
	char s[maxn];
	scanf("%s", s);
	int len = strlen(s);
	int m;
	scanf("%d", &m);
	for (int i = len - 2; i >= 0; --i) {
		if(s[i] == s[i+1]){
			a[i]++;
		}
		a[i] += a[i + 1];
	}
	while(m--){
		int l, r;
		scanf("%d %d", &l, &r);
		printf("%d\n", a[l - 1] - a[r - 1]);
	}
	return 0;
}
