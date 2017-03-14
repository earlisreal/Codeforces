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

const int N = 2 * 1e5 + 7;

vector<int> v[N];
int c[N];
bool vis[N];
set<int> t[N];

int f(int s){
	set<int>::iterator it;
	int x = 1;
	for (it = t[s].begin(); it != t[s].end(); ++it) {
		if(*it != x){
			return x;
		}
		x = *it + 1;
	}
	return x;
	/* for (int i = 1; i <= N; ++i) { */
	/* 	bool ok = false; */
	/* 	for (int j = 0; j < t[s].size(); ++j) { */
	/* 		if(t[s][j] == i){ */
	/* 			ok = true; */
	/* 		} */
	/* 	} */
	/* 	if(!ok) return i; */
	/* } */
}

int ans = 0;

void dfs(int s){
	vis[s] = true;
	int count = v[s].size() + 1;
	for (int i = 0; i < v[s].size(); ++i) {
		if(!vis[v[s][i]]){
			int foo = f(s);
			c[v[s][i]] = foo;

			t[v[s][i]].insert(foo);
			t[v[s][i]].insert(c[s]);

			t[s].insert(foo);

			dfs(v[s][i]);
		}
	}
	ans = max(ans, count);
}


int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n - 1; ++i) {
		int x, y;
		scanf("%d %d", &x, &y);
		v[x].pp(y);
		v[y].pp(x);
	}
	c[1] = 1;
	t[1].insert(1);
	dfs(1);
	/* test(1); */
	printf("%d\n", ans);
	for (int i = 1; i <= n; ++i) {
		printf("%d ", c[i]);
	}
	return 0;
}