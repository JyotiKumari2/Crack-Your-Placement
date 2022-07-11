#include<bits/stdc++.h>
using namespace std;


bool isLeap(int year)
{
     
    if (year % 400 == 0)
        return true;
 
    
    if (year % 100 == 0)
        return false;
 
   
    if (year % 4 == 0)
        return true;
    return false;
}
int main()
{
    int n;
    cin>>n;
    if(n==1918)
       cout<<"26.09.1918"<<"\n";
       else
    if(n>=1700 && n<=1917)
    {
        if(n%4==0)
        {
            cout<<"12.09."<<n<<"\n";
        }
        else
        {
            cout<<"13.09."<<n<<"\n";
        }


    }
    else
    {
        if(isLeap(n))
           cout<<"12.09."<<n<<"\n";
           else
            cout<<"13.09."<<n<<"\n";
           
    }
    return 0;
}