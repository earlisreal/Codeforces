#include <bits/stdc++.h>

#define maxn 107
#define pp push_back
#define bb pop_back

using namespace std;

int a[maxn];

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		int f = 0, c=0;
		for(int j=1;j<=m;j++){
			int temp;
			scanf("%d",&temp);
			if(temp>f){
				f = temp;
				c = j;
			}
		}
		a[c]++;
	}
	int b=1;
	for(int i=1;i<=n;i++){
		if(a[i]>a[b])b=i;
	}
	printf("%d\n",b);
	return 0;
}
