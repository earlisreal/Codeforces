#include <bits/stdc++.h>

#define maxn 100000008
#define pp push_back
#define pf push_front
#define mp make_pair

using namespace std;

bool l,r,u,d;

void f(){
	l = false;
	r = false;
	u = false;
	d = false;
}

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	string s;
	cin >> s;
	int ans = 1;
	for (int i = 0; i < n; ++i) {
		if(s[i]=='R'){
			if(l){
				ans++;
				f();
			}
			r = true;
		}
		if(s[i]=='L'){
			if(r){
				ans++;
				f();
			}
			l = true;
		}
		if(s[i]=='U'){
			if(d){
				ans++;
				f();
			}
			u = true;
		}
		if(s[i]=='D'){
			if(u){
				ans++;
				f();
			}
			d = true;
		}
	}
	printf("%d\n", ans);
	return 0;
}
