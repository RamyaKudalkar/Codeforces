#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,y,z;
        cin>>n>>x>>y>>z;
        int normal=(n+x+y-1)/(x+y);
        int ai;
        if(z*x>=n)
            ai=(n+x-1)/(x);
        else
            ai=z+(n-z*x+x+10*y-1)/(x+10*y);
        cout<<min(normal,ai)<<endl;
    }
    return 0;
}