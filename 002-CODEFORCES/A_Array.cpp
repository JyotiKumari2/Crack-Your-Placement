#include<bits/stdc++.h>
using namespace std;
vector <int> first, second, third; 
int main () {
    int n;
    cin>>n;
    for(int i = 0; i < n; i++) {
        int a;
            cin>>a;
        if (a == 0)
         third.push_back(a);
        if (a > 0) 
            second.push_back(a);
        if (a < 0) 
            first.push_back(a);
    }
    if (second.size() == 0) {
        for(int i = 0; i < 2; i++)
                      second.push_back(first.back()), first.pop_back();
    }
    if (first.size() % 2 == 0) {
        third.push_back(first.back());
        first.pop_back();
    }
     
    cout<<first.size();
    for(int i = 0; i < first.size(); i++) {
        cout<<" "<<first[i]; 
    }
     
    cout<<"\n"<<second.size(); 
    for(int i = 0; i < second.size(); i++) {
       
        cout<<" "<<second[i];
    }
   
    cout<<"\n"<<third.size();
    for(int i = 0; i < third.size(); i++) {
      cout<<" "<<third[i];
    }
     
    cout<<"";
}