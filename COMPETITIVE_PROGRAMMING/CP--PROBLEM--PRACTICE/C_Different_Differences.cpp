#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,k,n;
	cin >> t;
	while(t--){
		cin >> k >> n;
		for(int i=1;i<=k;i++)
			cout<<min(1+i*(i - 1) / 2,n-k+i)<<" ";
		    cout<<"\n";
	}
#include<bits/stdc++.h>
using namespace std
int main()
{
	int t,k,n;
	cin >> t;
	while(t--){
		cin >> k >> n;
		for(int i=1;i<=k;i++)
			cout<<min(1+i*(i - 1) / 2,n-k+i)<<" ";
		    cout<<"\n";
	}
}