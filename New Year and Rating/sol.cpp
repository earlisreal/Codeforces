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
	int r, x;
	bool f = false;
	scanf("%d %d", &r, &x);
	int ans = 0;
	int a = 0, b = 0;
	if(x==1){
		a++;
	}else{
		b++;
	}
	n--;
	while(n--){
		int c, d;
		scanf("%d %d", &c, &d);
		if(x == 1 && d == 2){
			if(r>0){
				puts("Impossible");
				return 0;
			}
			/* if(ans == 0){ */
				ans = 1899 + c;
			/* }else{ */
			/* 	ans += c; */
			/* } */
			b++;
			f = true;
		}else if(x == 2 && d == 1){
			if(r<0){
				puts("Impossible");
				return 0;
			}
			if(ans == 0){
				ans = 1899 + r + c;
			}else{
				if(ans >= 1900){
					ans = 1899 + c;
				}else{
					ans += c;
				}
			}
			f = true;
			a++;
		}else if(x == 2){
			if(ans >= 1900){
				ans = 1899 + c;
			}else{
				ans += c;
			}
		}else{
			ans += c;
		}
		x = d;
		r = c;
		/* printf("ans -> %d\n", ans); */
	}
	if(f)
	printf("%d\n", ans);
	else puts("Infinity");
	return 0;
}
