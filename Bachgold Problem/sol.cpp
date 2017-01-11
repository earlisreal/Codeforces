#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	int ans = n/2;
	printf("%d\n", ans);
	if(n%2==0){
		for (int i = 0; i < ans; ++i) {
			printf("%d ", 2);
		}
	}else{
		for (int i = 1; i < ans; ++i) {
			printf("%d ", 2);
		}
		printf("%d", 3);
	}
	return 0;
}
