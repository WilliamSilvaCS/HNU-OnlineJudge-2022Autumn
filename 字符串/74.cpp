//Ψһ�������Ǹ�����ĸ'n'�������ĸ����������κ���ĸ������û����ĸ��
//������ĸ�������һ��Ԫ����ĸ������Ԫ����ĸ��������κ���ĸ
//˼·:ǰ���Ƚ�

//��һ����©:���һ����ĸ��̽��--�����Ǹ�����ĸ(��ɲ����)
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
        if(!(yuanyin(s[i])==1||s[i]=='n'))//����
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
