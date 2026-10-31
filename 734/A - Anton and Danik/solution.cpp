#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    int n;
    string s;
    cin>>n>>s;
    int count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A')
            count1++;
        else
            count2++;
    }
    if(count1>count2)
        cout<<"Anton";
    else if(count1<count2)
        cout<<"Danik";
    else
        cout<<"Friendship";
    return 0;
}