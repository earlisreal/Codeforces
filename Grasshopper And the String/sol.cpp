#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;


int main(){
	int ans  = 0;
	int n = 0;
	string s;
	cin >> s;
	for(int i=0;i<s.length();i++){
		n++;
		ans = max(ans, n);
		if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y' ){
		n = 0;
		}
	}
	n++;
	ans = max(ans, n);
	printf("%d\n", ans);
	return 0;
}
