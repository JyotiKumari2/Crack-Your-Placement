#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int cumSum=floor(5/2);
    int shared=5;
    int liked=floor(5/2);

    for(int i=2;i<=n;i++)
    {
           shared=liked*3;
           liked= floor(shared/2);
           cumSum+=liked;
    }
    cout<<cumSum<<"\n";
    return 0;
}