#include<iostream>
#include<algorithm>
using namespace std;


/*
n青蛙

同一位置或者蚊子在右边:被吃
最左边吃蚊子
增加 蚊子重量长度


吃蚊子的数量以及舌头的长度。--输出
*/
struct Frog
{
    int no;
    int loc;
    int len;
    int num;
};
struct Mos
{
    int no;
    int m;
    int loc;
    bool liv;
};
bool cmp1(Frog a,Frog b)
{
    return a.loc<b.loc;

}
bool  cmp2(Frog a,Frog b)
{
    return a.no<b.no;
}
int main()
{
    int n,m;
    cin>>n>>m;
    Frog frog[n];
    Mos mos[m];
    for(int i=0; i<n; i++)
    {
        cin>>frog[i].loc>>frog[i].len;
        frog[i].no=i+1;
        frog[i].num=0;

    }
    for(int i=0; i<m; i++)
    {
        cin>>mos[i].loc>>mos[i].m;
        mos[i].liv=1;
    }
    sort(frog,frog+n,cmp1);


    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(mos[i].loc>=frog[j].loc&&mos[i].loc<=frog[j].loc+frog[j].len&&mos[i].liv==1)
            {
                mos[i].liv=0;
                frog[j].len+=mos[i].m;
                frog[j].num++;
                i=-1;
                break;
            }
        }
    }
    sort(frog,frog+n,cmp2);
    for(int i=0; i<n; i++)
    {
        cout<<frog[i].num<<' '<<frog[i].len<<endl;
    }





    return 0;
}
