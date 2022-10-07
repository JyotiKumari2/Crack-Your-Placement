#include<bits/stdc++.h>
using namespace std;
int main()
{

   int t;
   cin>>t;
   while(t--) 
   {
   int n;
   cin>>n;

  unordered_map<string , int> m;
  string s;
  vector<string> str(n);
  for(int  i = 0 ; i<n ; i++){
    cin>>str[i];

    m[str[i]]++;
  }


  string ans = "";

  for(int j = 0 ; j<n ; j++){
    s = str[j];
 bool check= false;
    for(int i = 0 ; i<s.length()-1 ; i++){
        string s1 = s.substr(0 , i+1);
        string s2 = s.substr(i+1);


        if(m.find(s1) != m.end() && m.find(s2) != m.end()){
            ans += "1";
            check= true;
            break;
        }
    }


    if(!check)
       ans+="0";
  }


  cout<<ans<<"\n";
    
   }

    return 0;
}