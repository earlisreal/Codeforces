#include <bits/stdc++.h>

#define maxn 1000000009
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	vector<int> a;
	vector<int> b;
	vector<int> c;
	for(int i=0;i<n;i++){
		int t;
		scanf("%d", &t);
		a.pp(t);
	}
	for(int i=0;i<n-1;i++){
		int t;
		scanf("%d", &t);
		b.pp(t);
	}
	for(int i=0;i<n-2;i++){
		int t;
		scanf("%d", &t);
		c.pp(t);
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	sort(c.begin(),c.end());
	bool ok = false;
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			printf("%d\n", a[i]);
			ok = true;
			break;
		}
	}
	if(!ok){
		printf("%d\n", a[n-1]);
	}
	ok = false;
	for(int i=0;i<n-1;i++){
		if(b[i]!=c[i]){
			printf("%d\n", b[i]);
			ok = true;
			break;
		}
	}
	if(!ok){
		printf("%d\n", b[n-2]);
	}
	return 0;
}
