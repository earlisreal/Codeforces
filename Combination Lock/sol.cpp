#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	string a,b;
	cin >> a >> b;
	int ans = 0;
	int x,y;
	for(int i=0;i<n;i++){
		int foo = 0,bar = 0;
		x=a[i]-'0';
	   	y=b[i]-'0';
		while(x!=y){
			x--;
			if(x<0)x=9;
			foo++;
		}
		x=a[i]-'0', y=b[i]-'0';
		while(x!=y){
			x = ++x%10;
			bar++;
		}
		ans+=min(foo,bar);
	}
	printf("%d",ans);
	return 0;
}
