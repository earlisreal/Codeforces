#include <bits/stdc++.h>

#define maxn 1000007
#define pp push_back
#define bb pop_back

using namespace std;

int main(){
	long long a,b,ans=0;
	cin >> a >> b;
	while(a>1 || b>1){
		if(a%b==0){
			ans+=a/b;
			break;
		}
		else{
			long long  temp = a-b;
			if(b>temp){
				a=b;
				b = temp;
				ans++;
			}
			else{
				ans+=a/b;
				long long temp = b;
				b = a%b;
				a = temp;
				//a=temp;
			}
			//ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
