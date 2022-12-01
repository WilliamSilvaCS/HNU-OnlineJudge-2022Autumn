#include<iostream>
#include<string>
using namespace std;
//str.find();
//s.length();
//^:支点;=:没有内容;(1-9):质量
//向左倾斜:"left"

//s(3 ≤|s| ≤10^6)
int main()
{
    int t;cin>>t;
    while(t--)
    {
        cin.get();
        string s;
        getline(cin,s);
        int leftm=0,rightm=0;
        int loc=s.find('^');
        for(int i=0;i<loc;i++)
        {
            if(s[i]-'0'<=9&&s[i]-'0'>=0)
            {
                leftm+=(s[i]-'0')*(loc-i);
            }
        }
        for(int i=loc+1;i<s.size();i++)
        {
            if(s[i]-'0'<=9&&s[i]-'0'>=0)
            {
                rightm+=(s[i]-'0')*(i-loc);
            }

        }
        if(leftm>rightm)
        {
            cout<<"left"<<endl;
        }
        else if(leftm==rightm)
        {
            cout<<"balance"<<endl;
        }
        else
            cout<<"right"<<endl;

    }
   return 0;
}

