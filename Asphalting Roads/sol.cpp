#include <bits/stdc++.h>

#define maxn 57
#define pp push_back
#define bb pop_back

using namespace std;

vector<int> x,y;

bool f(int n, int m){
	bool a = find(x.begin(), x.end(), n) == x.end();
	bool b = find(y.begin(), y.end(), m) == y.end();
	return a && b;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n*n;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		if(f(a,b)){
			x.push_back(a);
			y.push_back(b);
			printf("%d ", i);
		}
	}
	return 0;
}
