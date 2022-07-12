#include<bits/stdc++.h>
using namespace std;
long reverse(long n)
{
    long num=0;
    while(n!=0)
    {
        int rem = n%10;
        num=(num*10)+rem;
        n/=10;
    }
    return num;
}
int main()
{
    long i,j,k;
    cin>>i>>j>>k;
    long count=0;
    for(;i<=j;i++)
    {
         int num = reverse(i);
         if(abs(i-num)%k==0)
            count++;
    }
    cout<<count<<"\n";
    return 0;
}