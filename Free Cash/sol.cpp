#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int a=-1,b=-1;
	int ans = 1;
	int temp=1;
	for(int i=0;i<n;i++){
		int h,m;
		scanf("%d%d",&h,&m);
		if(h==a && m==b){
			temp++;
		}else{
			temp = 1;
		}
		a=h;
		b=m;
		ans = max(ans,temp);
	}
	printf("%d\n",ans);
	return 0;
}
