#include <iostream>
#include<cstdio>
using namespace std;

//�������"ȫ��ĸ"--��д,��ĸ˳��
//֪ʶ:ɾ���س���->cin.ignore()/cin.get()
//str.size():�ַ�������
//getline(cin,str):����

//ע��:��д,������,�ո�
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
