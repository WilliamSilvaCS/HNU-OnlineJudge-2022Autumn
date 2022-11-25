#include<bits/stdc++.h>
using namespace std;
/*
最丑陋的一集QwQ
懒得设置分别排序三属性值的功能了,一律依照 体力 排序.

输入为‘#’，表示输入结束
指标值相同的武将保持输入时的先后顺序不变
*/
struct Man;
typedef Man* mp;
struct Man
{
    int no;
    char name[10];
    int t,z,w;
    mp next;
};
int sum=0;
mp head,tmp1;
mp func(mp p,int i)
{

    while(i--)
    {
        p=p->next;
    }
    return p;
}
Man Max;
int Maxi;
void Sort(int tmp)
{
    int j;
    int i;
    for(i=0; i<sum-1; i++)
    {
        Max=*(func(head,i));
        Maxi=i;

        for(j=i+1; j<sum; j++)
        {
            if(Max.t<func(head,j)->t)
            {
                Max=*func(head,j);
                Maxi=j;

            }
        }
        strcpy(func(head,Maxi)->name,func(head,i)->name);
        func(head,Maxi)->no=func(head,i)->no;
        func(head,Maxi)->t=func(head,i)->t;
        func(head,Maxi)->w=func(head,i)->w;
        func(head,Maxi)->z=func(head,i)->z;
        //
        strcpy(func(head,i)->name,Max.name);
        func(head,i)->no=Max.no;
        func(head,i)->t=Max.t;
        func(head,i)->w=Max.w;
        func(head,i)->z=Max.z;

    }
}
int main()
{

    int i=0;
    while(1)
    {
        i++;
        mp mpTmp=new Man;
        if(!head)
        {
            head=mpTmp;
        }
        mpTmp->no=i;//无论如何 新对象都有 序号
        cin>>mpTmp->name;
        if(mpTmp->name[0]=='#')
        {
            delete mpTmp;
            break;
        }
        sum++;
        cin>>mpTmp->t>>mpTmp->z>>mpTmp->w;
        mpTmp->next=nullptr;

        if(tmp1)
            tmp1->next=mpTmp;
        tmp1=mpTmp;



    }
    int tmp2;
    cin>>tmp2;
    Sort(tmp2);

    for(mp p=head; p; p=p->next)
    {
        cout<<p->name<<' '<<p->t<<' '
            <<p->z<<' '<<p->w<<endl;
    }

    while(head)
    {
        mp h=head;
        head=head->next;
        delete h;

    }

    return 0;
}


//UGLY!
