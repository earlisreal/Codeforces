#include <bits/stdc++.h>

#define maxn 100000008
#define pp push_back
#define pf push_front
#define mp make_pair

using namespace std;

bool ans = false;

bool check(int a, int b){
	if(a == 2){
		if(b == 1){
			ans = true;
		}
	}
}

int main(int argc, char *argv[])
{
	string s[5];
	for (int i = 0; i < 4; ++i) {
		cin >> s[i];
	}
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			int a = 0, b = 0;
			for (int k = 0; k + j < 4; ++k) {
				if(k>2)break;
				if(s[i][j+k] == 'x')a++;
				if(s[i][j+k] == '.')b++;
			}
			check(a, b);
			a = 0, b = 0;
			for (int k = 0; k + i < 4; ++k) {
				if(k>2)break;
				if(s[i+k][j] == 'x')a++;
				if(s[i+k][j] == '.')b++;
			}
			check(a, b);
			a = 0, b = 0;
			for (int k = 0; k + i < 4 && k + j < 4; ++k) {
				if(k>2)break;
				if(s[i+k][j+k] == 'x')a++;
				if(s[i+k][j+k] == '.')b++;
			}
			check(a, b);
			a = 0, b = 0;
			for (int k = 0; i - k >= 0 && k + j < 4; ++k) {
				if(k>2)break;
				if(s[i-k][j+k] == 'x')a++;
				if(s[i-k][j+k] == '.')b++;
			}
			check(a, b);
		}
	}
	puts(ans ? "YES" : "NO");
	return 0;
}
