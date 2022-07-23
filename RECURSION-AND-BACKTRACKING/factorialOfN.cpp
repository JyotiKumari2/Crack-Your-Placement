#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n<=1)
       return 1;
       return n*fact(n-1);
}
int main()
{
    int n=5;
    int factorial = fact(n);
    cout<<factorial<<"\n";
    return 0;
}