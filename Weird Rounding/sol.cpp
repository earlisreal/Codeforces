#include <bits/stdc++.h>

#define maxn 100000008
#define pp push_back
#define pf push_front
#define mp make_pair
#define fs first
#define sc second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main(int argc, char *argv[])
{
	int n, k;
	scanf("%d %d", &n, &k);
	string s = to_string(n);
	int x = s.length() - 1;
	int ans = 0;
	for (int i = 0; i < s.length(); ++i) {
		/* if(s[i] == '0'){ */
		/* 	x = x - 1; */
		/* 	break; */
		/* } */
	}
	for (int j = 0; j < k; ++j) {
		int len = s.length();
		if(len < k){
			ans = x;
			break;
		}
		if(len < 1)break;
		if(s[s.length() - j - 1] != '0'){
			ans++;
			s.erase(s.begin() + len - j - 1);
			j = -1;
		}
	}
	cout << ans << endl;
	return 0;
}
