#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int a[5];
	int sum = 0;
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	int ans = sum;
	for(int i=0;i<5;i++){
		int foo = 1;
		for(int j=0;j<5;j++){
			if(j==i)continue;
			if(a[i]==a[j]){
				foo++;
			}
		}
		if(foo>3)foo=3;
		if(foo>1){
			ans = min(ans,sum-a[i]*foo);
		}
	}
	printf("%d\n",ans);
	return 0;
}
