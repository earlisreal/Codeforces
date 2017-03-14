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
	int a[][6] = {{1 ,2 ,2, 1, 0, 0}, {0, 0, 1, 2, 2, 1}, {2, 1, 0, 0, 1, 2}};
	int n, x;
	scanf("%d %d", &n, &x);
	if(a[0][(n - 1) %6] == x){
		puts("0");
	}else if(a[1][(n - 1)%6] == x){
		puts("1");
	}else if(a[2][(n - 1)%6] == x){
		puts("2");
	}
	return 0;
}
