#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	string foo = "qwertyuiopasdfghjkl;zxcvbnm,./";	
	char c;
	cin >> c;
	string s;
	cin >> s;
	for(int i=0;i<s.length();i++){
		if(c=='R'){
			for(int j=0;j<foo.length();j++){
				if(foo[j]==s[i])printf("%c",foo[j-1]);
			}
		}
		else{
			for(int j=0;j<foo.length();j++){
				if(foo[j]==s[i])printf("%c",foo[j+1]);
			}
		}
	}
	return 0;
}
