#include <bits/stdc++.h>

#define maxn 100000008
#define pp push_back
#define pf push_front
#define mp make_pair
#define fs first
#define sc second
#define ll long long
#define ull unsigned long long

using namespace std;

int a[10];

int main(int argc, char *argv[])
{
	string s;
	cin >> s;
	int len = s.length();
	int r, b, y, g;
	for (int i = 0; i < len; ++i) {
		int f = i % 4;
		if(s[i] == '!')a[f]++;
		if(s[i] == 'R')r = f;
		if(s[i] == 'B')b = f;
		if(s[i] == 'Y')y = f;
		if(s[i] == 'G')g = f;
	}
	printf("%d %d %d %d\n", a[r], a[b], a[y], a[g]);
	return 0;
}
