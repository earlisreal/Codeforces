#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d %d",min(a,b),abs(a-b)/2);
	return 0;
}
