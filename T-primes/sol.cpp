#include <bits/stdc++.h>

#define maxn 1000006
#define pp push_back
#define pf push_front
#define mp make_pair

using namespace std;

bool a[maxn + 7];

set<int> s;

int main(int argc, char *argv[])
{
	a[1] = true;
	a[0] = true;
	for (long long i = 2; i * i <= 1e12; ++i) {
		if(!a[i]){
			s.insert(i*i);
			for (long long j = i * i; j <= 1e6; j += i) {
				a[j] = true;
			}
		}
	}
	/* set<int>::iterator it; */
	/* for (it=s.begin(); it!=s.end(); ++it) */
    /* std::cout << ' ' << *it; */
  /* std::cout << '\n'; */
	/* cout << a[36] << endl; */
	int n;
	scanf("%d", &n);
	while(n--){
		long long x;
		scanf("%I64d", &x);
		puts(s.find(x) != s.end() ? "YES" : "NO");
	}
	return 0;
}
