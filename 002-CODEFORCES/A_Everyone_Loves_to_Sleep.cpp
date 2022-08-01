#include<bits/stdc++.h>
using namespace std;
struct TIME{
    int hour;
    int minutes;
};
bool cmp(TIME t1, TIME t2)
{
    if(t1.hour==t2.hour)
       return t1.minutes<=t2.minutes;
    return t1.hour<t2.hour;
}
TIME findTimeDifference(TIME t1, TIME t2){
 TIME diff;
     
 
     
    if(t2.minutes > t1.minutes) {
        --t1.hour;
        t1.minutes += 60;
    }
     
    diff.minutes = t1.minutes-t2.minutes;
    if(t1.hour<t2.hour)
    {
        t2.hour=24-t2.hour;
         diff.hour=t1.hour+t2.hour;
    }
    else
    diff.hour = t1.hour-t2.hour;
     
    return diff;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,H,M;
        cin>>n>>H>>M;
        TIME T;
        T.hour=H;
        T.minutes=M;
        TIME res[n];
        for(int i=0;i<n;i++)
        {
            int h,m;
            cin>>h>>m;
            TIME t;
            t.hour=h;
            t.minutes=m;
             res[i] = findTimeDifference(t,T);

        }
        sort(res,res+n,cmp);

       cout<<res[0].hour<<" "<<res[0].minutes<<"\n";

    }
    return 0;

}