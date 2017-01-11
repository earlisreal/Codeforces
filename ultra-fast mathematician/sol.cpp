#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	string a,b;
	cin >> a >> b;
	for(int i=0;i<a.length();i++){
		if(a[i]==b[i])printf("0");
		else printf("1");
	}
	return 0;
}
