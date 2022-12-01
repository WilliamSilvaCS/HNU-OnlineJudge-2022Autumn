/*
例如，假定字符串的第7个字符为3，
代表机器人从第7个单元开始，他的活动范围
为第4个单元（7-3=4）到第10个单元

不能 重叠范围
到范围边界，机器人会折返。
*/

#include<bits/stdc++.h>
using namespace std;
void judge(const string& s)
{
    int len=s.size();
    int num[s.size()];
    for(int i=0;i<len;i++)
    {
        num[i]=0;
    }
    for(int i=0;i<len;i++)
    {
        if(s[i]-'0'<=9&&s[i]-'0'>=0)
        {
            int tmp=s[i]-'0';
            for(int j=i-tmp;j<=i+tmp;j++)
            {
                if(j>=0&&j<len)
                num[j]++;
            }
        }
    }
    for(int i=0;i<len;i++)
    {
        if(num[i]>1)
        {
            cout<<"unsafe"<<endl;
            return;
        }
    }
    cout<<"safe"<<endl;
    return;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        judge(s);
    }
    return 0;
}
