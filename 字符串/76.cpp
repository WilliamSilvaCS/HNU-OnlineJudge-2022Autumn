/*
1=<n(字符串长度)<=1000 可能包括空格

n的所有因子:n->1
前d个字符s[0,...,d-1]反转
*/
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

void rev(string &s,int &fac)
{
    char* ps=&s[0];char* pe=&s[fac-1];
    while(ps<pe)
    {
        char tmp=*ps;
        *ps=*pe;
        *pe=tmp;
        ps++;pe--;
    }
    return;
}

int main()
{
    string s;getline(cin,s);
    int n=s.size();
    int fac[n],tmp=0;
    for(int i=1;i<=n;i++)
    {
        if(!(n%i))
        {
            fac[tmp]=i;
            tmp++;
        }
    }
    for(int i=0;i<tmp;i++)
    {
        rev(s,fac[i]);
    }
    cout<<s;


    return 0;
}
