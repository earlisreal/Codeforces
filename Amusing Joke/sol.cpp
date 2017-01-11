#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;


string str;

bool check(char c){
	for(int i=0;i<str.length();i++){
		if(str[i]==c){
			str.erase(i,1);
			return true;
		}
	}
	return false;
}

bool solve(string a, string b){
	for(int i=0;i<a.length();i++){
		if(!check(a[i])){
			return false;
		}
	}
	for(int i=0;i<b.length();i++){
		if(!check(b[i])){
			return false;
		}
	}
	return true;
}

int main(){
	string a,b;
	cin >> a >> b >> str;
	if(solve(a,b)){
		if(str.length()==0)
			puts("YES");
		else 
			puts("NO");
	}
	else{
		puts("NO");
	}
	return 0;
}
