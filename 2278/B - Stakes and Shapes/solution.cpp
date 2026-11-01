#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int n=x+y+z;
        if(x>=y)
            cout<<string(n,'P')<<endl;
        else if(y>=z)
            cout<<string(n,'R')<<endl;
        else 
            cout<<string(n,'S')<<endl;
    }
    return 0;
}