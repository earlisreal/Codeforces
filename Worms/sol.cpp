#include <bits/stdc++.h>

#define maxn 100000008
#define pp push_back
#define pf push_front
#define mp make_pair

using namespace std;

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	int a[n+7];
	a[0] = 0;
	for (int i = 1; i <= n; ++i) {
		int f;
		scanf("%d", &f);
		a[i] = a[i-1] + f;
	}
	int m;
	scanf("%d", &m);
	while(m--){
		int x;
		scanf("%d", &x);
		int l = 1, r = n;
		while(l<r){
			int mid = (l+r+1)/2;
			if(a[mid] > x) r = mid - 1;
			else if(a[mid] < x) l = mid +1;
			else{
				break;
			}
		}
		int ans = (r + l + 1) / 2;
		printf("%d\n", a[ans] < x ? ans + 1 : ans);
	}
	return 0;
}
