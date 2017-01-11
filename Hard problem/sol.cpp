#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	cout << strcmp("aaa","bbb");
	//if("aaa"<"aa"){
		//cout << "earl is real";
	//}
	int n;
	scanf("%d",&n);
	int c[n];
	for(int i=0;i<n;i++){
		scanf("%d",&c[i]);
	}
	char last[100000];
	scanf("%s", last);
	for(int i=1;i<n;i++){
		char s[100000];
		char a[100000];
		char b[100000];
		scanf("%s", s);
		strcpy(a, s);
		strcpy(b, last);
		if(strcmp(s, last)<0){
			//not in order
			cout << "pumasok" << endl;
			strrev(a);
			strrev(b);
			if(a>=last || s>=b){
				printf("test\n");
			}
		}
	}
	
	return 0;
}
