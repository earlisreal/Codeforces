#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int a,b,c;

bool solve(){
	if(a>b){
		if(c>=0)return false;
		while(a>b){
			a+=c;
		}
		return a==b;
	}
	else if(a<b){
		if(c<=0)return false;
		while(a<b){
			a+=c;
		}
		return a==b;
	}
	return true;	
}

int main(){
	scanf("%d%d%d",&a,&b,&c);
	puts(solve()?"YES":"NO");
	return 0;
}
