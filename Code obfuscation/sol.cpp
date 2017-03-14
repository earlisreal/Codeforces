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

int a[123];

int main(int argc, char *argv[])
{
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); ++i) {
		for (int j = 0; j < s.length(); ++j) {
			if(i == j)continue;
			if(s[i] == s[j]){
				s.erase(s.begin() + j);
				i--;
				j--;
			}
		}
	}
	for (int i = 0; i < s.length(); ++i) {
		if('a' + i != s[i]){
			puts("NO");
			return 0;
		}
	}
	puts("YES");
	return 0;
}
