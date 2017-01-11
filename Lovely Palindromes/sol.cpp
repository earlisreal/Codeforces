#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	string s;
	cin >> s;
	for(int i=0;i<s.length();i++){
		printf("%c",s[i]);
	}
	for(int i=0;i<s.length();i++){
		printf("%c", s[s.length()-i-1]);
	}
	return 0;
}
