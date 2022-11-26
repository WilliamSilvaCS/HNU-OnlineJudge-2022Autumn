#include <iostream>
#include<cstdio>
using namespace std;

//如果不是"全字母"--大写,字母顺序
//知识:删除回车键->cin.ignore()/cin.get()
//str.size():字符串长度
//getline(cin,str):输入

//注意:大写,标点符号,空格
string a="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main()
{

    int t;cin>>t;
    while(t--)
    {   int sum=0;
        cin.ignore();
        string str;
        getline(cin,str);
        for(int i=0;i<str.size();i++)
        {
            for(int j=0;j<52;j++)
            {
                if(str[i]==a[j])
                {
                    sum++;
                    a[j]='\\';
                    if(j>=26)
                    {
                        a[j-26]='\\';
                    }
                    else
                        a[j+26]='\\';
                }
            }
        }
        if(sum==26)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No ";
            for(int i=26;i<52;i++)
            {
                if(a[i]!='\\')
                {
                    cout<<a[i]<<' ';
                }
            }
            cout<<endl;
        }
        a="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";




    }


    return 0;
}
