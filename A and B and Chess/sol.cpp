#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	char c;
	int a = 0, b= 0;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cin >> c;
			if(c=='q')b+=9;
			if(c=='r')b+=5;
			if(c=='b')b+=3;
			if(c=='n')b+=3;
			if(c=='p')b++;
			if(c=='Q')a+=9;
			if(c=='R')a+=5;
			if(c=='B')a+=3;
			if(c=='N')a+=3;
			if(c=='P')a++;
		}
	}
	if(a>b)puts("White");
	else if(a<b)puts("Black");
	else puts("Draw");


	return 0;
}
