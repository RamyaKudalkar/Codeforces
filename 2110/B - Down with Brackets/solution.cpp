#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int balance=0;
        bool flag=false;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]=='(')
                balance++;
            else
                balance--;
            if(balance==0)
            {
                flag=true;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}