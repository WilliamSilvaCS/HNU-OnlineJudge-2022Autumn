#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        cin.ignore();
        int n;cin>>n;
        string str;cin>>str;
        int Sstart=0,Tstart=0;
        for(int i=1;i<n;i++)
        {
            if(str[i]==str[i-1])
            {
                continue;
            }
            else
            {
                if(str[i]=='S')
                {
                    Tstart++;
                }
                else
                {
                    Sstart++;
                }
            }
        }
        if(Sstart>Tstart)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;



    }
    return 0;
}
/*
n天
由大写字母'S'和'T'组成
*/
