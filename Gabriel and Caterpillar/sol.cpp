#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int h1,h2,a,b;

int solve(){
	int ans = 0;
	h1+= a*8;
	if(b>=a){
		if(h1<h2){
			return -1;
		}else{
			return 0;
		}
	}
	else{
		while(h1<h2){
			if(h1>=h2){
				return ans;
			}
			h1 -= b*12;
			ans++;
			h1 += a*12;
		}
	}
	return ans;
}

int main(){
	scanf("%d%d%d%d",&h1,&h2,&a,&b);
	printf("%d\n",solve());
	return 0;
}
