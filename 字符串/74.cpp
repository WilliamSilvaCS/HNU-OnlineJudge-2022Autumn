//唯一的例外是辅音字母'n'，这个字母后面可以是任何字母，或者没有字母。
//辅音字母后必须是一个元音字母，但在元音字母后可以是任何字母
//思路:前与后比较

//第一遍遗漏:最后一个字母的探讨--不能是辅音字母(题干不清楚)
#include<iostream>
#include<string>
using namespace std;
bool yuanyin(char x)
{
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    {
    return 1;
    }
    else
        return 0;
}
int main()
{
    string s;
    cin>>s;
    int book=1;
    const int l=s.length();
    for(int i=0;i<l-1;i++)
    {
        if(!(yuanyin(s[i])==1||s[i]=='n'))//辅音
        {
            int tmp=yuanyin(s[i+1]);
            if(tmp==0)
                {
                    book=0;
                    break;
                }
        }


    }
    if(yuanyin(s[l-1])==0&&s[l-1]!='n')
        book=0;
    if(book==0)
    {
        cout<<"NO";
    }
    else
        cout<<"YES";
    return 0;

}
