#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	long long n;
	cin >> n;
	long long ans = n%2==1 ? (n/2 + 1) * -1 : n/2;
	cout << ans << endl;
	return 0;
}
