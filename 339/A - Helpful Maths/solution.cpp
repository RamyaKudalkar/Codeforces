#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    string s1;
    for(char c:s){
        if(c!='+')
            s1+=c;
    }
    sort(s1.begin(),s1.end());
    for(int i=0;i<s1.size();i++){
        if(i>0)
            cout<<'+';
        cout<<s1[i];
    }
    return 0;
}