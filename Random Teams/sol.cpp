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
	int n, m;
	scanf("%d %d", &n, &m);
	ll kmin = (n/m);
	ll x = n % m;
	ll ans = (kmin * (kmin - 1) / 2) * (m - x);
	if(x > 0){
		kmin++;
		ans += kmin * (kmin - 1) / 2 * x;
	} 
	ll kmax = n - (m - 1);
	kmax = kmax * (kmax - 1) / 2;
	printf("%I64d %I64d\n", ans, kmax);
	return 0;
}
