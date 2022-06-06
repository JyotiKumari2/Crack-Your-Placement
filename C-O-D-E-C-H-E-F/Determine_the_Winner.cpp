#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int pa,pb,qa,qb;
        cin>>pa>>pb>>qa>>qb;
        int mp=max(pa,pb);
        int mq=max(qa,qb);
        if(mp<mq)
           cout<<"P\n";
           else if(mp>mq)
                cout<<"Q\n";
                else
                 cout<<"TIE\n";
    }
    return 0;
}