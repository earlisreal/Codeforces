#include <bits/stdc++.h>

#define maxn 100000008
#define pp push_back
#define pf push_front
#define mp make_pair
#define fs first
#define sc second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	set<int> s;
	int l = n;
	while(n--){
		int x;
		scanf("%d", &x);
		s.insert(x);
		set<int>::reverse_iterator it;
		it = s.rbegin();
		/* cout << "it -> " << *it << endl; */
		while(*it == l){
			/* printf("l -> %d\n", l); */
			printf("%d ", l);
			s.erase(l);
			l--;
			if(!s.empty()) it = s.rbegin();
			else break;
		}
		printf("\n");
	}
	return 0;
}