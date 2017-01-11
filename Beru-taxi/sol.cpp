#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int a,b,n;
	scanf("%d%d%d",&a,&b,&n);
	int x[n], y[n], v[n];
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&x[i],&y[i],&v[i]);
	}
	double ans = 10e8;
	for(int i=0;i<n;i++){
		double d = sqrt(pow(x[i]-a,2)+pow(y[i]-b,2));
		ans = min(ans,d/v[i]);
	}
	cout << setprecision(7)<< ans << endl;
	return 0;
}
