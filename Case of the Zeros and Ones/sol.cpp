#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n, a = 0, b = 0;
	scanf("%d", &n);
	string str;
	cin >> str;
	for(int i=0;i<n;i++){
		if(str[i]=='0')a++;
		else b++;
	}
	n -= min(a,b) * 2;
	printf("%d\n", n);
	return 0;
}
