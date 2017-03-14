#include <bits/stdc++.h>

#define maxn 100000008
#define pp push_back
#define pf push_front
#define mp make_pair
#define fs first
#define sc second
#define ll long long
#define ull unsigned long long

using namespace std;

int main(int argc, char *argv[])
{
	int s, x1, x2;
	scanf("%d %d %d", &s, &x1, &x2);
	int t1, t2;
	scanf("%d %d", &t1, &t2);
	int p, d;
	scanf("%d %d", &p, &d);

	int bar = 0, foo = 0;
	if(x1 < x2){
		if(p <= x1){
			if(d == 1){
				bar = (x2 - p) * t1;
			}else{
				bar = (p + x2) * t1;
			}
		}else{
			if(d == 1){
				bar = (s - p + s + x2) * t1;
			}else{
				bar = (p + x2) * t1;
			}
		}
	}else{
		if(p >= x1){
			if(d == -1){
				bar = (p - x2) * t1;
			}else{
				bar = (s - p + (s - x2)) * t1;
			}
		}else{
			if(d == 1){
				bar = (s - p + (s - x2)) * t1;
			}else{
				bar = (p + s + (s - x2)) * t1;
			}
		}
	}
	printf("%d\n", min(abs(x1 - x2) * t2, bar));
	return 0;
}
