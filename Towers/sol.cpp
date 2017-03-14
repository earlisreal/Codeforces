#include<bits/stdc++.h>

using namespace std;


int a[1234];

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int x;
		scanf("%d", &x);
		a[x]++;
	}
	int ans = 0, count = 0;
	for (int i = 0; i <= 1000; ++i)
	{
		ans = max(ans, a[i]);
		if(a[i] > 0)count++;
	}
	printf("%d %d\n", ans , count);
	return 0;
}