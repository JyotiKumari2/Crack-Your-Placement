#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// function : find_by_order(idx), order_of_key(element)
//find_by_order(idx): find Kth element index access
//order_of_key(X): No. of elements lesser than X

int main()
{

    pbds A;      // Ordered Set (Policy based data structure)

    // Inserting elements in a set
    A.insert(1);
    A.insert(2);
    A.insert(3);
    A.insert(4);

    //Printing Elements of a pbds
    for(auto i:A)
       {
        cout<<i<<" ";
        cout<<"\n";
       }

    // find kth element
    cout<<"0th Element: "<<*A.find_by_order(0)<<"\n";
    cout<<"1st Element: "<<*A.find_by_order(1)<<"\n";
    cout<<"2nd Element: "<<*A.find_by_order(2)<<"\n";
    cout<<"3rd Element: "<<*A.find_by_order(3)<<"\n";


    // find number of elements lesser than X
    cout<<"Number of elements lesser than 4: "<<A.order_of_key(4)<<"\n";

    // lowerbound : Lower Bound of X --> first element >=X in the set
    cout<<"Lower Bound of 3: "<<*A.lower_bound(3)<<"\n";

    //upperbound: Upper Bound of X --> first element > X in the set
    cout<<"Upper bound of 3: "<<*A.upper_bound(3)<<"\n";

    //Remove Element
    A.erase(1);

    // Size of pbds
    cout<<"Size: "<<A.size()<<"\n";





    return 0;
}