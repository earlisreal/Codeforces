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
	long long temp = 0;
	long long ans = 0;
	int count = 0;
	for (int i = 0; i < n; ++i) {
		long long x;
		scanf("%I64d", &x);
		if(x%2==0){
			ans+=x;
		}else{
			count++;
			if(temp != 0){
				ans += max(temp, x);
				temp = min(temp, x);
			}else{
				temp = x;
			}
		}
	}
	if(count % 2 == 0){
		ans+=temp;
	}
	printf("%I64d\n", ans);
	return 0;
}
