#include <bits/stdc++.h>

#define maxn 100000008
#define pp push_back
#define pf push_front
#define mp make_pair

using namespace std;

int main(int argc, char *argv[])
{
	int n, k;
	scanf("%d %d", &n, &k);
	int t = 60*4;
	t -= k;
	int ans = 0;
	for (int i = 1; i <= n; ++i) {
		t -= 5*i;
		if(t>=0){
			ans++;
		}else{
			break;
		}
	}
	printf("%d\n", ans);
	return 0;
}
