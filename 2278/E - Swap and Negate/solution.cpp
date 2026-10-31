#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[200005];
        long long sum=0;
        vector<long long> even,odd;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(i%2==0)
                even.push_back(a[i]);
            else
                odd.push_back(a[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        long long ans=sum,x=0,y=0;
        int k=min(even.size(),odd.size());
        for(int i=0;i<k;i++){
            x+=even[i];
            y+=odd[i];
            ans=max(ans,sum-2*(x+y));
        }
        cout<<ans<<endl;
    }
    return 0;
}