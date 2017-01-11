#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int s,n;

bool solve(pair<int,int> p[]){
	for(int i=0;i<n;i++){
		if(p[i].first>=s)return false;
		s+= p[i].second;
	}
	return true;
}

int main(){
	scanf("%d%d",&s,&n);
	pair<int,int> p[n];
	for(int i=0;i<n;i++){
		scanf("%d%d",&p[i].first,&p[i].second);
	}
	sort(p,p+n);
	puts(solve(p)?"YES":"NO");
	return 0;
}
