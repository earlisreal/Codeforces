#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int ans = 1, ansi = 1, ansn = 1;

void solo(int a, int b, int c, int i){
	int temp = min(a,min(b,c));
	if(temp > ans){
		ans = temp;
		ansi = i;
	}
}

void comp(int a, int b, int c, int i){
	ansn = 2;
	int temp = min(a,min(b,c));
	if(temp > ans){
		ans = temp;
		ansi = i;
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n+7];
	int b[n+7];
	int c[n+7];
	for(int i=1;i<=n;i++){
		scanf("%d %d %d", &a[i], &b[i], &c[i]);
	}
	for(int i=1;i<n;i++){
		solo(a[i],b[i],c[i], i);
		//for(int j=i+1;j<=n;j++){
			//if(a[i]==a[j]){
				//if(b[i]==b[j]){
					//comp(a[i],b[i],c[i]+c[j]);
				//}
				//if(c[i]==c[j]){
					//comp(a[i],b[i]+b[j],c[i]);
				//}
				//if(b[i]==c[j]){
					//comp(a[i],b[i],c[i]+b[j]);
				//}
				//if(c[i]==b[j]){
					//comp(a[i],b[j]+c[i],c[i]);
				//}
			//}
			//if(b[i]==b[j]){
				//if(c[i]==c[j]){
					//comp(a[i]+a[j],b[i],c[i]);
				//}
				//if(a[i]==c[j]){
					//comp(a[i],b[i]+b[j],c[i]+a[j]);
				//}
				//if(c[i]==a[j]){
					//comp(a[i]+c[j],b[i]+b[j],c[i]);
				//}
			//}
			//if(c[i]==c[j]){
				//if(a[i]==b[j]){
					//comp(b[i]+a[j],b[i],c[i]+c[i]);
				//}
				//if(b[i]==a[j]){
					//comp(b[i],a[i]+b[j],c[i]+c[j]);
				//}
			//}
		//}
	}
	printf("%d\n", ansi);
	return 0;
}
