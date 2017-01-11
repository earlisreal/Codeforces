#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int ans = 0;
	int last = 69;
	while(n--){
		int temp;
		scanf("%d",&temp);
		if(temp!=last)ans++;
		last = temp;
	}
	printf("%d\n",ans);
	return 0;
}
