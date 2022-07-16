#include <iostream>

using namespace std;
int main() {
    int n;
    cin>>n;
    int p[n+1];
    for(int i=1;i<=n;i++){
        int k;
        cin>>k;
        p[k]=i;
    }
    for(int i=1;i<=n;i++)cout<<p[p[i]]<<endl;
    return 0;
}