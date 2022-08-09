#include<bits/stdc++.h>
using namespace std;


void solve(int n)
{
   for (int a = 3; a < n; a++) {
        int c = (n - a) / 2;
        int b = n - a - c;
        if (c > 1 && b+1 < a) {
            c--;
            b++;
        }
        if (a > b && b > c) {
            cout << b << ' ' << a << ' ' << c << endl;
            return;

}
   }

}
int main()
{
     
     int t;
     cin>>t;
     while(t--)
     {
        int n;
        cin>>n;

      //   int a,b,c;
      //   b = (n/3);
      //   int left =  n-b;

      //   a = left/2;
      //   c = left/2;
      //   while(true)
      //   {
      //        if(b>a && a>c)
      //           break;
      //          if(a<=c)
      //          {
      //             a++;
      //             c--;
      //          }
      //          if(b<=c)
      //          {
      //             b++;
      //             c--;
      //          }
      //          if(b<=a)
      //          {
      //             b++;
      //             a--;
      //          }
      //   }
      //   cout<<a<<" "<<b<<" "<<c<<"\n";


     solve(n);
    
     }

     return 0;
}