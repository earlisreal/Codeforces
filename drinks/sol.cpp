#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	double sum = 0;
	int t;
	for(int i=0;i<n;i++){
		scanf("%d", &t);
		sum += t;
	}
	printf("%.12f", sum/n);
	return 0;
}
