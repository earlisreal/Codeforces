#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	string a[]={"","Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	int n;
	scanf("%d",&n);
	int foo = 5;
	int last = 0;
	int bar = 1;
	while(foo<n){
		last = foo;
		bar *= 2;
		foo += bar*5;
	}
	n -= last;
	//cout << "bar = " << bar << endl;
	//cout << "foo = " << foo-last << endl;
	//cout << "n = " <<  n << endl;
	//cout << "a = " << ceil((float)n/(float)bar) << endl;
	cout << a[(int)ceil((float)n/(float)bar)] << endl;
	return 0;
}
