#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int ans = 0;
	int foo = 0;
	int temp = foo;
	for(int i=1;foo<n;i++){
		temp += i;
		foo += temp;
		if(foo<=n)ans++;
	}
	printf("%d\n",ans);
	return 0;
}
