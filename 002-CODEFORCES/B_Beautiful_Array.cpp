// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long 
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         ll n,k,b,s;
//         cin>>n>>k>>b>>s;
//         if(b==0 && s==0)
//         for(int i=0;i<n;i++)
//            cout<<0<<" ";
//         else
//         if(n==1)
//         {
//                    if((s/k)==b)
//                       cout<<s<<" ";
//                       else
//                          cout<<-1<<" ";
//         }
//         else  if(n!=1)
//         {
//             if((s/k)<b)
//                cout<<-1<<" ";
//                else if((s/k)==b)
//                {
//                  for(int i=0;i<n-1;i++) 
//                     cout<<0<<" ";
//                 cout<<s;
//                }
//                else if((s/k)>b)
//                {
//                 cout<<(k*b)<<" ";
//                 int left = s - (k*b);
//                 int rem  = left/k;
//                 if((n-1)*rem == left)
//                 {
//                     for(int i=0;i<n-1;i++)
//                        cout<<rem<<" ";
//                 }
                 
//                }
               

//         }
//         cout<<"\n";
//     }
//     return 0;
// }