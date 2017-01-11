#include <bits/stdc++.h>

#define maxn 100000008
#define pp push_back
#define pf push_front
#define mp make_pair

using namespace std;

int main(int argc, char *argv[])
{
	string s;
	cin >> s;
	set<string> m;
	int ans = 0;
	for (int i = 0; i < s.length(); ++i) {
		m.insert(s);
		s = s[s.length()-1] + s.substr(0, s.length()-1);
	}
	printf("%d\n", m.size());
	return 0;
}
