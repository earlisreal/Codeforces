#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	string s = "0";
	int l = 0;
	for(int i=1;l<n;i++){
		s+= to_string(i);
		l+= to_string(i).length();
	}
	cout << s.at(n) << endl;
	return 0;
}
