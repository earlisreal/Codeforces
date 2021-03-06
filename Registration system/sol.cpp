#include <bits/stdc++.h>

#define maxn 100005
#define pp push_back
#define bb pop_back

using namespace std;

vector<char*> cache[maxn];

int main(){
	int n;
	pair<int, char*> p[50];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		char s[40];
		scanf("%s", s);
		int hash = 0;
		int len = strlen(s);
		for(int j=0;j<len;j++){
			hash += (j+1)*(s[len-j-1]-'a'+1);
		}
		//printf("hash -> %d\n", hash);
		if(cache[hash].size()>0){
			int count = 0;
			for(int j=0;j<cache[hash].size();j++){
				if(strcmp(cache[hash][j],s)==0){
					count++;
				}
			}
			printf("%s%d\n", s, count);
		}
		else puts("OK");
		cache[hash].pp(s);
	}
	return 0;
}
