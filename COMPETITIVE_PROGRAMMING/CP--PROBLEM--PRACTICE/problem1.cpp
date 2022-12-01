#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
 
    else
        return gcd(b, a % b);
}
 
 
void leftRotate(int *arr, int d, int n)
{
    
    d = d % n;
    int g_c_d = gcd(d, n);
    for (int i = 0; i < g_c_d; i++) {
       
        int temp = arr[i];
        int j = i;
 
        while (1) {
            int k = j + d;
            if (k >= n)
                k = k - n;
 
            if (k == i)
                break;
 
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}

void reverseArray(int arr[], int start,
                            int end)
{
    while (start < end)
    {
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
 
 
void rightRotate(int *arr, int d, int n)
{
   
    d=d%n;
    reverseArray(arr, 0, n-1);
    reverseArray(arr, 0, d-1);
    reverseArray(arr, d, n-1);
}
 
int main()
{
     int N,p,d;
     cin>>N>>p>>d;    // N: Size of array, p: rotate by p places, d: direction left or right
     int *arr=new int[N];
     for(int i=0;i<N;i++)
         cin>>arr[i];
    if(d==0) // rotate left
       leftRotate(arr,p,N);
    else // d==1 right rotate
       rightRotate(arr,p,N);

    // Print Array after rotation
    for(int i=0;i<N;i++)
        cout<<arr[i]<<" ";

    return 0;
}