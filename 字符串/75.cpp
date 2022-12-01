/*

两个字符串相等的 处理的最小次数。

小写字母组成
当然，经过处理后，两个字符串都可能为空串
*/
#include <iostream>
#include <algorithm>  //reverse包含的头文件
#include <string>
using namespace std;
//strrev(a)/reverse(a.begin(),&b)/a.size()/max()
//讨论:结果--空串+一开始就有 空串
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
