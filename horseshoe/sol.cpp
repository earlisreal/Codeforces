#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int ans =0;
	int a[4];
	for(int i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i==j)continue;
			if(a[i]==a[j]){
				if(a[j]!=0){
					ans++;
					a[j]=0;
				}
				
			}
				
		}
	}
	printf("%d\n",ans);
	return 0;
}
