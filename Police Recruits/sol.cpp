#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n, p = 0, ans = 0;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		int t;
		scanf("%d", &t);
		if(t>0){
			p+=t;
		}else{
			if(p<1){
				ans++;
			}else{
				p--;
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}
