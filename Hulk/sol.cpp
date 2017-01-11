#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==0){
			if(i<n){
				printf("I love that ");
			}else{
				printf("I love it");
			}
		}else{
			if(i<n){
				printf("I hate that ");
			}else{
				printf("I hate it");
			}
		}
	}

	return 0;
}
