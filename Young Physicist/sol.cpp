#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int x,y,z;
	x = y = z = 0;
	while(n--){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		x+=a;
		y+=b;
		z+=z;
	}
	if(x || y || z){
		puts("NO");
	}else{
		puts("YES");
	}
	return 0;
}
