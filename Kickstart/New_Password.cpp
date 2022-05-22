#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int cs=1;
    while(t--)
    {
        int N;
        cin>>N;
       string str; //password
        cin>>str;
        
        bool upper = false, lower = false, number = false, special = false;
    for (int i = 0; i < N; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper=true;
        else if (str[i] >= 'a' && str[i] <= 'z')
            lower=true;
        else if (str[i]>= '0' && str[i]<= '9')
            number=true;
        else if(str[i]=='#' || str[i]=='@' || str[i]=='*' || str[i]=='&')
            special=true;
    }
    
     
      if(!upper)
        str.push_back('A');
        if(!lower)
           str.push_back('a');
           if(!special)
              str.push_back('@');
              if(!number)
                str.push_back('1');

      while(str.size()<7)
         str.push_back('A');
        
       cout<<"Case #"<<cs++<<": "<<str<<endl;

    }
    return 0;
}