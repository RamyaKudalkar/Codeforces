#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[200005];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        long long mid=a[n/2];
        long long cost=0;
        for(int i=0;i<n;i++){
            if(a[i]>mid)
                cost+=a[i]-mid;
            else
                cost+=mid-a[i];
        }
        long long operations=a[n-1]-a[0];
        cout<<cost<<" "<<operations<<endl;
    }
    return 0;
}