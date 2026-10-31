#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,z=0;
        string s;
        cin>>n>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='0')
                z++;
        }
        if(s[0]=='1'){
            cout<<z<<endl;
            continue;
        }
        int o=0,ans=1e9;
        for(int i=0;i<n;i++){
            if(s[i]=='1')
                o++;
            else
                z--;
            ans=min(z+o,ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}