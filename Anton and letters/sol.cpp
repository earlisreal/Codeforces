#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int ans =0;
	string s;
	getline(cin,s);
	int count = 0;
	for(int i=1;i<s.length()-1;i+=3){
		count++;
		for(int j=1;j<s.length()-1;j+=3){
			if(i==j)continue;
			if(s[i]==s[j]){
				if(s[j]!='0'){
					ans++;
					s[j]='0';
				}
				
			}
				
		}
	}
	printf("%d\n",count-ans);
	return 0;
}
