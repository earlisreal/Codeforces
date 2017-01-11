#include <bits/stdc++.h>

#define maxn 100000008
#define pp push_back
#define pf push_front
#define mp make_pair

using namespace std;

int main(int argc, char *argv[])
{
	int n,m,k;
	scanf("%d %d %d", &n, &m, &k);
	int count = 1;
	for (int i = 1; i <= n*2; i++) {
		for(int j = 1; j <= m; j++){
			if(count == k){
				printf("%d %d ", i,j);
				if(count % 2 == 0){
					puts("R");
				}else{
					puts("L");
				}
			}
			count++;
			if(count == k){
				printf("%d %d ", i,j);
				if(count % 2 == 0){
					puts("R");
				}else{
					puts("L");
				}
			}
			count++;
		}
	}
	return 0;
}
