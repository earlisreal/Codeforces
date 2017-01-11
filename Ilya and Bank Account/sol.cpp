#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	string n;
	cin >> n;
	if(n[0]=='-'){
		if(n[n.length()-1]-'0'>n[n.length()-2]-'0'){
			n.erase(n.length()-1,1);
		}else{
			n.erase(n.length()-2,1);
		}
	}
	cout << stoi(n);
	return 0;
}
