#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	int ans = min(a,min(b/2, c/4));
	printf("%d", ans*7);
	return 0;
}
