// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int *arr=new int[n];
//         for(int i=0;i<n;i++)
//             cin>>arr[i];

//         int prefixCount=1;
//         int suffixCount=1;
         
//         for(int i=0;i<n;i++)
//         {
//             if(arr[i]<=arr[i+1])
//             {
//                 prefixCount++;
//             }
//             else
//               break;
//         }

//         // for(int i=0;i<n;i++)
//         // {
//         //     if(arr[n-i+1]<arr[n-i-2])
//         //        break;
//         //        else
//         //        suffixCount++;
//         // }

//         for(int i=n-1;i>=1;i--)
//         {
//             if(arr[i]<=arr[i-1])
//                break;
//                else
//                suffixCount++;
//         }
        
//       if(prefixCount+suffixCount>=n)
//            cout<<"YES\n";
//            else
//              cout<<"NO\n";
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, a[N];

int main() {
    int t;
    cin>>t;
    while(t--)
    {
          
        cin >> n;
        
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        int pre = 1;
        while (pre < n && a[pre] <= a[pre + 1])
            pre++;

        int suf = 1;
        while (suf < n && a[n-suf] >= a[n-suf + 1])
            suf++;

        if (pre + suf >= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}