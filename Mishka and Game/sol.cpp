#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n, a, b;
	a = b = 0;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		int m, c;
		scanf("%d %d", &m, &c);
		if(m>c){
			a++;
		}
		if(c>m)b++;
	}
	if(a>b)puts("Mishka");
	else if(a<b)puts("Chris");
	else puts("Friendship is magic!^^");
	return 0;
}
