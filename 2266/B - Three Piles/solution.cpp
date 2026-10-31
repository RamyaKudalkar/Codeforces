#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        if(a>=b)
            cout<<a+c-b<<endl;
        else
            cout<<max(b-a,a+c-b)<<endl;
    }
    return 0;
}