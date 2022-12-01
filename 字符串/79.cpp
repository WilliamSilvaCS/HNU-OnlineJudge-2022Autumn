/*W
"WUB"可以插0个*(歌词前后)
单词之间至少一个WUB

记得恢复空格

!原始歌词中不包括“WUB”,但可以包括'W''U''B'
*/
//str.append(1,'待尾加字符');
#include <iostream>
#include<string>
using namespace std;
void dispose(string& s)
{
    string ori="";//不可忘记!!!!!!!!!!!!!!!!!!!!
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]!=' ')
        {
            ori.append(1,s[i]);
        }
        else if(s[i+1]!=' ')
        {
            ori.append(1,s[i]);
        }
    }
    if(ori[0]==' ')
    {
        for(int i=1;i<ori.size();i++)
        {
            ori[i-1]=ori[i];
        }
        ori[ori.size()-1]='\0';
    }
    cout<<ori;
}
int main()
{
    string s;cin>>s;
    for(int i=0;i<s.size()-2;i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            s[i]=' ';
            s[i+1]=' ';
            s[i+2]=' ';
        }
    }
    dispose(s);
    return 0;
}
