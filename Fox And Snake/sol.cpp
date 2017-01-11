#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n,m;
	bool r = true;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i%2==0){
				printf("#");
			}
			else{
				if(r){
					if(j==m-1){
						r = false;
						printf("#");
					}
					else printf(".");
				}
				else{
					if(j>0)
						printf(".");
					else{
						printf("#");
					}
					if(j==m-1) r = true;
				}
			}
		}
		printf("\n");
	}
	return 0;
}
