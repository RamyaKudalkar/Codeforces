#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int countA=0,countB=0,countC=0,countD=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A')
                countA++;
            else if(s[i]=='B')
                countB++;
            else if(s[i]=='C')
                countC++;
            else if(s[i]=='D')
                countD++;
        }
        cout<<min(countA,n)+min(countB,n)+min(countC,n)+min(countD,n)<<endl;
    }
    return 0;
}