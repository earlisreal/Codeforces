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
	int sum = 0;
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &a[i]);
		sum += a[i];
	}
	if(sum != 0){
		puts("YES");
		puts("1");
		printf("%d %d", 1, n);
	}else{
		int temp = 0;
		for (int i = n; i > 0; --i) {
			temp += a[i];
			sum -= a[i];
			if(temp != 0 && sum != 0){
				puts("YES");
				puts("2");
				printf("%d %d\n", 1, i-1);
				printf("%d %d\n", i, n);
				return 0;
			}
		}
		puts("NO");
	}
	return 0;
}
