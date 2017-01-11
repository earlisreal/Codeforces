#include <bits/stdc++.h>

#define maxn 2444
#define pp push_back
#define bb pop_back

using namespace std;

vector<int> a[maxn];
vector<int> g;
int foo[maxn];
int l[maxn];

int ans = 1;

void dfs(int s){
	queue<int> q;
	q.push(s);
	foo[s]=true;
	l[s]=1;

	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int i=0;i<a[v].size();i++){
			if(foo[a[v][i]] == false){
				q.push(a[v][i]);
				foo[a[v][i]] = true;
				l[a[v][i]] = l[v]+1;
			}
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int x;
		scanf("%d",&x);
		if(x==-1)g.pp(i);
		else{
			a[x].pp(i);
		}
	}

	/*for(int i=1;i<=n;i++){
		printf("childs of %d \n",i);
		for(int j=0;j<a[i].size();j++){
			printf("%d \n",a[i][j]);
		}
	}*/
	
	for(int i=0;i<g.size();i++){
		dfs(g[i]);
	}

	for(int i=1;i<=n;i++){
		ans = max(ans,l[i]);
	}

	printf("%d\n",ans);
	return 0;
}
