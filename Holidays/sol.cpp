#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int ans = (n/7) * 2;
	int extra = n%7;
	int foo = ans;
	if(extra>2){
		if(extra>5){
			foo+=1;
		}
		ans+=2;
	} 
	else ans+=extra;
	printf("%d %d\n",foo,ans);
	return 0;
}
