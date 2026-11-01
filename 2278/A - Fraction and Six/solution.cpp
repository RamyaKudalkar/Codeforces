#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string p,q,r="six";
        cin>>p>>q;
        int a[26]={0},b[26]={0},c[26]={0};
        for(int i=0;i<n;i++)
            a[p[i]-'a']++;
        for(int i=0;i<m;i++)
            b[q[i]-'a']++;
        for(int i=0;i<3;i++)
            c[r[i]-'a']++;
        bool flag=true;
        for(int i=0;i<26;i++){
            if(a[i]-b[i]!=c[i]){
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