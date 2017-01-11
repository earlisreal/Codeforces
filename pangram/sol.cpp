#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

bool check(char c, string s){

	for(int i=0;i<s.length();i++){
		if(c==tolower(s[i]))return true;
	}
	return false;
}

bool solve(string s){
	for(char c='a';c<='z';c++){
		if(!check(c,s)){
			return false;
		}
	}
	return true;
}


int main(){
	string s, trash;
	cin >> trash >> s;
	
	puts(solve(s)?"YES":"NO");
	return 0;
}
