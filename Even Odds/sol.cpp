#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	long long n,k;
	cin >> n >> k;
	if(k>ceil((float)n/2.0)){
		if(n%2>0)n++;
		k -= n/2;
		cout << k *2;
	}else{
		cout << k + k-1;
	}
	return 0;
}
