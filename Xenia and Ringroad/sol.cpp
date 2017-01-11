#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n, m;
	scanf("%d%d",&n,&m);
	int p = 1;
	long long ans	= 0;
	for(int i=0;i<m;i++){
		int a;
		scanf("%d",&a);
		if(a<p){
			ans += n+a - p;
		}else{
			ans += a-p;
		}
		p = a;
	}
	cout << ans;
	return 0;
}
