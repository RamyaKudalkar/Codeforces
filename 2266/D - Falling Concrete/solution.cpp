#include<iostream>
#include<set>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> s;
        for(int i=1;i<=n;i++){
            int a;
            cin>>a;
            s.insert(a-i);
        }
        int cnt=0;
        int ans=0;
        int prev=-1e9;
        for(int x:s){
            if(x!=prev+1){
                ans=max(ans,cnt);
                cnt=0;
            }
            prev=x;
            cnt++;
        }
        ans=max(ans,cnt);
        cout<<ans<<endl;
    }
}