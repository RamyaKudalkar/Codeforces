#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        bool flag=true;
        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i]>1){
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"YES
";
        else
            cout<<"NO
";
    }
    return 0;
}