#include<iostream>
using namespace std;
#include<string>
 
int main()
{
    string s;
    cin>>s;
    int count=s.length();
    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j]){
                count--;
                break;
            }
        }
    }
    if(count%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
    return 0;
}