#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        bool possible=false,inside=false;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+=x;
            if(x>=2)
                possible=true;
            if(i>0&&i<n-1&&x>=2)
                inside=true;
        }
        if(!possible)
            cout<<-1<<endl;
        else if(inside)
            cout<<sum-1<<endl;
        else
            cout<<sum-(n-1)<<endl;
    }
    return 0;
}