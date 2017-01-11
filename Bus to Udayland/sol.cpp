#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	char s[n+7][7];
	bool f = false;
	for(int i=0;i<n;i++){
		scanf("%s", s[i]);
		for(int j=0;j<4;j++){
			if(!f)
			if(s[i][j]=='O' && s[i][j+1] == 'O'){
				s[i][j]='+';
			    s[i][j+1] = '+';
				f = true;
			}
		}
	}
	if(f){
		puts("YES");
		for(int i=0;i<n;i++){
			printf("%s\n", s[i]);
		}
	}else{
		puts("NO");
	}
	return 0;
}
