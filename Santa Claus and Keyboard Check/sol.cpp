#include <bits/stdc++.h>

#define maxn 100000008
#define pp push_back
#define pf push_front
#define mp make_pair

using namespace std;

int k[50];

void solve(){
	string s,t;
	cin >> s >> t;
	string a = "", b = "";
	for(int i=0;i<s.length();i++){
			int foo = s[i]-'a'+1;
			int bar = t[i]-'a'+1;
			if(k[foo] == 0 && k[bar] == 0){
				k[foo] = bar;
				k[bar] = foo;
				if(s[i]!=t[i]){
					a += s[i];
					b += t[i];
				}
			}else{
				if(k[foo] != bar && k[bar] != foo){
					puts("-1");
					return;
				}
			}
	}
	printf("%d\n", a.length());
	for(int i=0;i<a.length();i++){
		printf("%c %c\n", a[i], b[i]);
	}
}

int main(int argc, char *argv[])
{
	solve();

	return 0;
}
