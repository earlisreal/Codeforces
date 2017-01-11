#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
	int n, m, index = 0, ans = 0;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
	int b[m];
	for (int i = 0; i < m; ++i) {
		scanf("%d", &b[i]);
	}
	sort(a,a+n);
	sort(b,b+m);
	for (int i = 0; i < n; ++i) {
		for (int j = index; j < m; ++j) {
			if(abs(a[i]-b[j])<=1){
				ans++;
				index = j+1;
				break;
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}
