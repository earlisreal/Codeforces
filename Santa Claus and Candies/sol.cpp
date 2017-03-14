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
	int n;
	scanf("%d", &n);
	int foo = 0;
	int q = 0;
	int i = 0;
	while(q <= n){
		i++;
		q += i;
	}
	foo = q - n;
	printf("%d\n", i - 1);
	for (int j = 1; j <= i; ++j) {
		if(j == foo)continue;
		printf("%d ", j);
	}

	return 0;
}
