#include<iostream>
#include<algorithm>
using namespace std;
/*
n��ѧ��,1000������
m��Ӱ--��Ƶ+��Ļ
����-����-������



�������-�������;
ȫ�� ������

��ע�⣬ÿ����Ӱ����Ƶ���Ժ���Ļ�������ǲ�ͬ


���:��С���󣬵�Ӱ�ı��
*/
struct Man
{
    int no;
    int yin;
    int zi;
    int high;
    int cont;


};
bool cmp1(Man a,Man b)
{
    return a.high>b.high;
}
bool cmp2(Man a,Man b)
{
    return a.cont>b.cont;
}
int main()
{
    int n;
    cin>>n;
    int scientist[n];
    for(int i=0;i<n;i++)
    {
        cin>>scientist[i];
    }
    int m;
    cin>>m;
    Man movie[m];
    for(int i=0;i<m;i++)
    {
        cin>>movie[i].yin;
        movie[i].no=i+1;
        movie[i].high=0;
        movie[i].cont=0;
    }
    for(int i=0;i<m;i++)
    {
        cin>>movie[i].zi;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(scientist[i]==movie[j].yin)
            {
                movie[j].high++;
            }
            else if(scientist[i]==movie[j].zi)
            {
                movie[j].cont++;
            }
        }
    }
    sort(movie,movie+m,cmp1);
    int i=1,tmp=1;
    while(movie[i].high==movie[0].high)
    {
        tmp++;
        i++;
    }
    if(tmp==1)
    {
        cout<<movie[0].no;
    }
    else
    {
        sort(movie,movie+tmp,cmp2);
        if(movie[0].cont==0)
        {
            cout<<"unsatisfied";
        }
        else
        {   //��high
            int j=1;
            cout<<movie[0].no;
            while(movie[j].cont==movie[0].cont)
            {
                cout<<" "<<movie[j].no;
                j++;
            }
        }
    }




    return 0;
}









































