#include <bits/stdc++.h>

#define maxn 100000008
#define pp push_back
#define pf push_front
#define mp make_pair

using namespace std;

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	int l = 0, r = 0;
	int c = 0, d = 0;
	int mn = 1000, mx = -1000;
	int a = 0, b = 0;
	for (int i = 1; i <= n; ++i) {
		int x, y;
		scanf("%d %d", &x, &y);
		l += x;
		r += y;
		int f = x - y;
		if(f<0){
			b++;
			if(mn>f){
				mn = f;
				c = i;
			}
		}
		if(f>0){
			a++;
			if(mx<f){
				mx = f;
				d = i;
			}
		}
	}
	if(a == 0 || b == 0){
		puts("0");
	}
	else if(a>b){
		printf("%d\n", c);
	}
	else if(a<b){
		printf("%d\n", d);
	}
	else{
		if(l>r){
			printf("%d\n", d);
		}
		else{
			printf("%d\n", c);
		}
	}
	return 0;
}
