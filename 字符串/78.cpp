/*
同侧手输入，则需要 4 单位
单位为十分之一秒
练过:初次输入的一半 总时间
*/
//其中"qwertasdfgzxcvb"这15个字符为左手字符
//“yuiophjklnm”这11个字符为右手字符。

#include<iostream>
#include<string>
using namespace std;
struct Str
{
    string s;
};
bool judge(char a)
{
    if(a=='y'||a=='u'||a=='i'||a=='o'||a=='p'||a=='h'||a=='j'||a=='k'||a=='l'||a=='n'||a=='m'||a=='Y'||a=='U'||a=='I'||a=='O'||a=='P'||a=='H'||a=='J'||a=='K'||a=='L'||a=='N'||a=='M')
    {
        return 0;
    }
    else
        return 1;
}
int main()
{
    int n;cin>>n;
    Str* p=new Str[n];//del
    int i=0,time=0;
    bool flag=false;
    while(n--)
    {
        flag=0;
        cin>>p[i].s;
        for(int j=0;j<i;j++)
        {
            if(p[j].s==p[i].s){flag=1;}
        }
        if(flag) time++;
            else
                time+=2;
        for(int j=1;j<p[i].s.size();j++)
        {
            if(judge(p[i].s[j])==judge(p[i].s[j-1]))
            {
                if(flag)
                {
                    time+=2;
                }
                else
                    time+=4;
            }
            else
            {
                if(flag)
                {
                    time+=1;
                }
                else

                    time+=2;
            }
        }
        i++;
    }
    delete[] p;
    cout<<time;
    return 0;

}





