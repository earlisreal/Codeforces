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
	int a, b;
	scanf("%d %d", &a, &b);
	if(abs(a - b) > 1)puts("NO");
	else{
		if(a < 1 && b < 1)puts("NO");
	 	else puts("YES");
	}
	return 0;
}