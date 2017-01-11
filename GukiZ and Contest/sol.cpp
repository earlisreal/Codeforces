#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int a[n+7];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		int count = 1;
		for(int j=0;j<n;j++){
			if(j!=i){
				if(a[i]<a[j])count++;
			}
		}
		printf("%d ",count);
	}
	return 0;
}
