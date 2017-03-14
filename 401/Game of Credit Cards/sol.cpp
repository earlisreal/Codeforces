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

int a[17];
int b[17];
int c[17];
int d[17];

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	string x, y;
	cin >> x >> y;
	for (int i = 0; i < n; ++i) {
		a[x[i]-'0']++;
		b[y[i]-'0']++;
		c[x[i]-'0']++;
		d[y[i]-'0']++;
	}
	int mn = 0;
	for (int i = 0; i < 10; ++i) {
		if(c[i] > 0){
			int count = c[i];
			for (int j = i; j < 10; ++j) {
				if(d[j] > 0){
					if(d[j] >= count){
						d[j] -= count;
						count = 0;
						break;
					}else{
						count -= d[j];
						d[j] = 0;
					}
				}
			}
			mn += count;
		}
	}
	int mx = 0;
	for (int i = 1; i < 10; ++i) {
		if(b[i] > 0){
			int count = b[i];
			for (int j = 0; j < i; ++j) {
				if(a[j] > 0){
					if(a[j] >= count){
						mx += count;
						a[j] -= count;
						break;
					}else{
						mx += a[j];
						count -= a[j];
						a[j] = 0;
					}
				}
			}
		}
	}
	printf("%d\n", mn);
	printf("%d\n", mx);
	return 0;
}
