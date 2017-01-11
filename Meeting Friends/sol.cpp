#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int a[3];
	for(int i=0;i<3;i++){
		scanf("%d", &a[i]);
	}
	sort(a,a+3);
	printf("%d\n", a[1]-a[0]+a[2]-a[1]);
	return 0;
}
