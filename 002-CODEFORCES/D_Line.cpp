#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)

// RECURSION -- PRINT ALL SUBSEQUENCES
void printSubsequence(int i , vector<int>&ds, vector<int>arr, int n)
{
    if(i==n)
    {
        for(auto it:ds)
         cout<<it<<" ";
        cout<<"\n";
        return ;

    }
    ds.push_back(arr[i]);
    printSubsequence(i+1,ds,arr,n);
    ds.pop_back();
    printSubsequence(i+1,ds,arr,n);

}

// RECURSION -- PRINT ALL PERMUTATION

// BACKTRACKING --- N-QUEEN PROBLEM



// UNSIGNED INT CONCEPT
// int x = -43;
// unsigned int y = x;
// cout << x << "\n"; // -43
// cout << y << "\n"; // 4294967253

//---------------------------------- B_I_T   M_A_N_I_P_U_L_A_T_I_O_N---------------------------------

// Starts-----------------------------------------xxxxxxxxxxxxxxxxxxxxxxxxx

// same --- > 0
// different --- > 1
// Bit Shifts:  The left bit shift x << k appends k zero bits to the number, == x*2^k
//                 right bit shift x >> k removes the k last bits from the number. == x/2^k

//bit representation of an int number x:
// Code:
//         for (int k = 31; k >= 0; k--) {
//                if (x&(1<<k)) cout << "1";
//                else cout << "0";
//              }
// x | (1 << k) : sets the kth bit of x to one
// x & ~(1 << k): sets the kth bit of x to zero
// x ˆ (1 << k) : inverts the kth bit of x
// x & (x −1) : sets the last one bit of x to zero
// x & −x : sets all the one bits to zero, except for the last one bit.
// x | (x − 1) inverts all the bits after the last one bit
// a positive number x is a power of two exactly when x & (x − 1) = 0

// One pitfall when using bit masks is that 1<<k is always an int bit mask. An
// easy way to create a long long bit mask is 1LL<<k

//    functions only support int numbers,
// •__builtin_clz(x):       the number of zeros at the beginning of the bit representation
// • __builtin_ctz(x):      the number of zeros at the end of the bit representation
// • __builtin_popcount(x): the number of ones in the bit representation
// • __builtin_parity(x):   the parity (even or odd) of the number of ones in the bit representation

//Ends ---------------------------------------------------xxxxxxxxxxxxxxxxxxxxxx------------------------------------------------------


// -------------------S_E_T       R_E_P_R_E_S_E_N_T_A_T_I_O_N---------------------------------------


// Maximum SubArray Sum
// Two Queens Problem



//------------------- S_O_R_T_I_N_G   &   S_E_A_R_C_H_I_N_G -------------------------------------------------
// Starts-----------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//  Bubble Sort:
    //       for (int i = 0; i < n; i++) {
    //         for (int j = 0; j < n-1; j++) {
    //                if (array[j] > array[j+1]) {
    //                          swap(array[j],array[j+1]);
    //                             }
    //                      }
    //             }



// Ends ------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX


//--------------------D_A_T_A  S_T_R_U_C_T_U_R_E_S------------------------------------------------------
// Starts--------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

// Ends ---------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX



//-------------------D_Y_N_A_M_I_C  P_R_O_G_R_A_M_M_I_N_G ---------------------------------------
// Starts-------------------------------------------
// Ends --------------------------------------------


//-------------------G_R_A_P_H   A_L_G_O_R_I_T_H_M_S--------------------------------------------
// Starst---------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// ENds ----------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX


//-------------------ALGORITHM  DESIGN  TOPICS --------------------------------------------------
//Starts----------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//ENds -----------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX


//-------------------R_A_N_G_E  Q_U_E_R_I_E_S----------------------------------------------------
//Starts-------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//Ends---------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX


//-------------------T_R_E_E  A_L_G_O_R_I_T_H_M_S------------------------------------------------
//STARTS-------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//ENDS---------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx


//-------------------M_A_T_H_E_M_A_T_I_C_S-------------------------------------------------------------
//Starts----------------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//Ends------------------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx


//-------------------A_D_V_A_N_C_E_D  G_R_A_P_H   A_L_G_O_R_I_T_H_M_S---------------------------------
// Starts:
// Ends ------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX


//------------------G_E_O_M_E_T_R_Y--------------------------------------------
//starts-------------------
//ENds---------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX


//------------------S_T_R_I_N_G  A_L_G_O_R_I_T_H_M_S-------------------------------------------------------------
//Starts---------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//Ends-----------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX



//-----------------ADDITIONAL TOPIC------------------------------------------------------------------------------
//Starts-----------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//Ends-------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx


//-----------------Mathematics ---II----------------------------------------------------------------------------
//Starts---------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//Ends ----------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX



//Code:
void solve()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   vector<pair<int,int>>v(n);
   if(s[0]=='L')
    v[0]={0,n-1};
    else if(s[0]=='R')
      v[0]={n-1,n-1};
    if(s[n-1]=='L')
      v[n-1]={n-1,n-1};
      else
        v[n-1]={0,n-1};
   for(int i=1;i<n-1;i++)
   {
       if(s[i]=='L')
         v[i]={i,max(i,n-(i+1))};
         else 
         {
            v[i]={n-(i+1), max(i,(n-(i+1)))};


         }

   }
   sort(v.begin(),v.end());
   int sum=0;
   for(int i=0;i<n;i++)
   {
    sum+=v[i].first;
   }
   for(int i=0;i<n;i++)
   {
        
       int diff = v[i].second - v[i].first;
       sum+=diff;

       cout<<sum<<" ";
   }


   
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}




