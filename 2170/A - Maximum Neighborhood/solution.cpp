#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)
            cout<<1<<endl;
        else if(n==2)
            cout<<9<<endl;
        else
        {
            int a=5*n*n-5*n-5;
            int b=4*n*n-n-4;
            cout<<max(a,b)<<endl;
        }
    }
    return 0;
}