#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,a,b;
        cin>>n>>a>>b;
        if(n%3==0)
            cout<<min(n*a,(n/3)*b)<<endl;
        else
            
        cout<<min(n*a,min((n%3)*a,b)+(n/3)*b)<<endl;
    }
    return 0;
}