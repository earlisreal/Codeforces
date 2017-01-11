#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d", min(min(a+a+b*2, b+c+c+b), min(a+c+c+a, a+c+b)));
	return 0;
}
