#include<bits/stdc++.h>
using namespace std;

int countDigit(long long n)
{
   if(n == 0)
     return 1;
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         long long int num;
         cin>>num;
         int digit=countDigit(num);
         cout<<fixed<<setprecision(0)<<num-pow(10,digit-1)<<"\n";

    }
}