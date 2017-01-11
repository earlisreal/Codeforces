#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int a,b,even,odd;

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int x;
		scanf("%d",&x);
		if(x%2==0){
			even = i;
			a++;
		}else{
			b++;
			odd = i;
		}
	}
	if(a>b){
		printf("%d",odd);
	}else{
		printf("%d",even);
	}
	return 0;
}
