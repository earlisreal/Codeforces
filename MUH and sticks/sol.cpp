#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int a[10];

int main(){
	for(int i=0;i<6;i++){
		int x;
		scanf("%d",&x);
		a[x]++;
	}
	//get the feet
	bool feet = false, ele = false, bear = false;
	for(int i=0;i<10;i++){
		if(a[i]>=4){
			feet = true;
		}
		if(a[i]==5){
			bear = true;
		}
		if(a[i]==6){
			ele = true;
		}
		if(a[i]==2){
			ele = true;
		}

	}
	if(feet && ele){
		puts("Elephant");
	}
	else if(feet){
		puts("Bear");
	}else if(bear && feet){
		puts("Bear");
	}else{
		puts("Alien");
	}
	return 0;
}
