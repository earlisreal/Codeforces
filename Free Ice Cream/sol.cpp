#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n;
	long long x;
	scanf("%d%I64d",&n,&x);
	int ans = 0;
	for(int i=0;i<n;i++){
		long long f;
		char c;
		cin >> c;
		scanf("%I64d",&f);
		if(c=='+'){
			x+=f;
		}else{
			if(f>x){
				ans++;
			}else{
				x-=f;
			}
		}
	}
	printf("%I64d %d\n",x,ans);
	return 0;
}
