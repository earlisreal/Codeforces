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
	int n, m;
	scanf("%d%d", &n, &m);
	int ans = 0;
	if(n > m){
		printf("%d\n", n - m);
	}else{
		if(m % 2 == 0){
			int x = m / 2;
			ans = 1;
			while(n < x){
				n *= 2;
				ans++;
			}
			ans += n-x;
		}else{
			while(n < m){
				n *= 2;
				ans++;
			}
			ans += n-m;
		}
		printf("%d\n", ans);
	}
	return 0;
}
