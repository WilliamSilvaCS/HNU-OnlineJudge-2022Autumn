#include<bits/stdc++.h>
using namespace std;
/*
n个教室,k老师

开始:编号从小到大;左->右
最左边 空的挂钩，将钥匙挂
多位老师还钥匙，则他们按钥匙编号从小到大的顺序还
先还再取
上完课后，再将钥匙放回到钥匙盒中。

可能有多位老师使用同一把钥匙，但是老师使用钥匙的时间不会重叠。

*/
class Teacher
{
public:

    int no;
    int id;
    int starttime;
    int timelength;
    int endtime;

    void getend();
};
void Teacher::getend(void)
{
    endtime=timelength+starttime;
}
bool cmp1(Teacher a,Teacher b)
{
    return a.id<b.id;
}
void print(int* &p,const int &n)
{
    for(int i=0;i<n;i++)
    {
        cout<<*p<<' ';
        p++;
    }
}
int main()
{
    int n,k,maxt=0,mint=10000;
    cin>>n>>k;
    Teacher* sensei=new Teacher[k];
    int* key=new int[n];
    for(int i=0;i<n;i++)
    {
        key[i]=i+1;
    }
    for(int i=0;i<k;i++)
    {
        sensei[i].id=i+1;
        cin>>sensei[i].id>>sensei[i].starttime>>sensei[i].timelength;
        sensei[i].getend();
        maxt=(maxt>sensei[i].endtime)?maxt:sensei[i].endtime;
        mint=(mint<sensei[i].starttime)?mint:sensei[i].starttime;
    }

    sort(sensei,sensei+k,cmp1);
    for(int i=mint;i<=maxt;i++)
    {
        for(int j=0;j<k;j++)//endtime
        {
            if(sensei[j].endtime==i)
            {

                for(int q=0;q<n;q++)
                {
                    if(key[q]==0)
                    {
                        key[q]=sensei[j].id;
                        break;
                    }
                }
            }
        }
        for(int j=0;j<k;j++)
        {
            if(sensei[j].starttime==i)
            {
                for(int q=0;q<n;q++)
                {
                    if(key[q]==sensei[j].id)
                    {
                        key[q]=0;
                        break;
                    }
                }
            }
        }
    }
    print(key,n);

    return 0;
}
