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
	vector<long long> v;
	vector<long long> y;
	long long n, k;
	scanf("%I64d %I64d", &n, &k);
	long long count = 0, i;
	for (i = 1; i * i <= n; ++i) {
		if(n % i == 0){
			v.pp(i);
			if(i * i == n) count++;
			else{
				count += 2;
				y.pp(n / i);
			}
		}
	}
	if(count < k) puts("-1");
	else{
		if(k > v.size()){
			int f = k % v.size();
			printf("%I64d\n", y[y.size() - f]);
		}else{
			printf("%I64d\n", v[k-1]);
		}
	}
	return 0;
}
