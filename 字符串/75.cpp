/*

�����ַ�����ȵ� �������С������

Сд��ĸ���
��Ȼ����������������ַ���������Ϊ�մ�
*/
#include <iostream>
#include <algorithm>  //reverse������ͷ�ļ�
#include <string>
using namespace std;
//strrev(a)/reverse(a.begin(),&b)/a.size()/max()
//����:���--�մ�+һ��ʼ���� �մ�
int main()
{
   string s,t;
   cin>>s>>t;
   reverse(s.begin(),s.end());
   reverse(t.begin(),t.end());
   int sum=1;
   if(s[0]!=t[0])
   {
       cout<<s.size()+t.size();
   }
   else if(s==""||t=="")
   {
       cout<<max(s.size(),t.size());
   }
   else
   {
       for(int i=1;s[i]==t[i]&&i+1<=min(s.size(),t.size());i++)
       {
            sum++;
       }
        cout<<s.size()+t.size()-sum*2;

   }
}
