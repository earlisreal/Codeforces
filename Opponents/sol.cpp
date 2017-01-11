#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n,d;
	scanf("%d%d",&n,&d);
	int ans = 0,count = 0;
	for(int i=0;i<d;i++){
		char s[n];
		scanf("%s",s);
		bool foo = false;
		for(int j=0;j<n;j++){
			if(s[j]=='0'){
				foo = true;
			}
		}
		if(foo){
			count++;
			ans = max(count,ans);
		}else{
			count = 0;
		}
	}
	printf("%d\n",ans);
	return 0;
}
