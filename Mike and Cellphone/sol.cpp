#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

char cp[][4] = {{'1','2','3'},
			{'4','5','6'},
			{'7','8','9'},
			{' ','0',' '}};

int x[77];
int y[77];

void foo(int a, char c){
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			if(c==cp[i][j]){
				x[a] = j;
				y[a] = i;
			}
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	char s[n];
	scanf("%s",s);
	bool up=true,left=true;
	for(int i=0;i<n;i++){
		foo(i,s[i]);
	}
	for(int i=0;i<n;i++){	
		for(int j=i+1;j<n;j++){
			if(abs(x[i]-x[j])==2){
				left=false;
			}
			if(abs(y[i]-y[j])>2){
				left=false;
				up=false;
			}
			if(abs(y[i]-y[j])==2){
				if(!left)up=false;
			}
		}
	}
	puts(left||up?"NO":"YES");
	return 0;
}
