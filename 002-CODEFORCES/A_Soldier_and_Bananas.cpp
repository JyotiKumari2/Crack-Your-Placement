#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int i=1;
    int s=0;
    while(w!=0)
    {
       s+=i*k;
       w--;
       i++;
    }
    if(n<s)
    cout<<s-n<<"\n";
    else 
    cout<<0<<"\n";
    return 0;
}