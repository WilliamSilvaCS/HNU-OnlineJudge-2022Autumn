#include<bits/stdc++.h>
using namespace std;


struct Off
{
    int time;
    char side;
    int no;
    char card;
};
bool cmp(Off a,Off b)
{
    if(a.time==b.time)//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    {
        if(a.side==b.side)
        {
            return a.no>b.no;
        }
        else
            return a.side>b.side;
    }
    else
    {
        return a.time<b.time;
    }
}
int main()
{
    string zhu,ke;
    cin>>zhu>>ke;
    int n;
    cin>>n;
    Off off[n],red[n];
    for(int i=0;i<n;i++)
    {

        cin>>off[i].time
        >>off[i].side
        >>off[i].no
        >>off[i].card;
    }
    for(int i=0;i<n-1;i++)
    {
        if(off[i].card=='y')

        for(int j=i+1;j<n;j++)
        {
            if(off[j].card=='y'&&off[j].no==off[i].no&&off[j].side==off[i].side)
            {
                off[j].card='r';
                break;
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(off[i].card=='r')
        {
            red[sum]=off[i];
            sum++;
        }
    }
    if(sum==0)
    {
        cout<<"No Red Card";
        return 0;
    }
    sort(red,red+sum,cmp);
    for(int i=0;i<sum;i++)
    {
        cout<<((red[i].side=='h')?zhu:ke)<<' '<<red[i].no<<' '<<red[i].time<<endl;
    }


}
