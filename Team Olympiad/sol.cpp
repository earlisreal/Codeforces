#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	vector<int> v[5];
	for(int i=1;i<=n;i++){
		int t;
		scanf("%d",&t);
		v[t].pp(i);
	}
	int ans = min(v[1].size(), min(v[2].size(), v[3].size()));
	printf("%d\n", ans);
	for(int i=0;i<ans;i++){
		printf("%d %d %d\n", v[1][i], v[2][i], v[3][i]);
	}
	return 0;
}
