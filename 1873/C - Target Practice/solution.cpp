#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        vector<string> grid(10);
        for(int i=0;i<10;i++)
            cin>>grid[i];
        int score = 0;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(grid[i][j]=='X')
                {
                    int layer=min(min(i,j),min(9-i,9-j));
                    score+=layer+1;
                }
            }
        }
        cout << score << endl;
        t--;
    }
    return 0;
}