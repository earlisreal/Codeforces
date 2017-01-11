#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n,m,a,b;
	scanf("%d%d%d%d",&n,&m,&a,&b);
	if(a>b){
		int foo = ceil((float)n/(float)m);
		printf("%d\n",foo*b);
	}
	else{
		int foo=10e9;
		int count = n/m;
		int x = n*a;
		int y = count*b;
		y += min((n-count*m)*b,(n-count*m)*a);
		if(m>n){
			foo = b;
		}
		printf("%d\n",min(x,min(y,foo)));
		//cout << count << endl;
		//cout << x << endl;
		//cout << y << endl;
	}
	return 0;
}
