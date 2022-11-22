#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int man[n]={0};
    for(int i=0;i<m;i++)
    {
        int tmp,max=0,maxno;
        for(int j=0;j<n;j++)
        {
            cin>>tmp;
            if(tmp>max)
            {
                max=tmp;
                maxno=j+1;
            }
        }
        man[maxno-1]++;

    }
    int max=0,maxno;
    for(int i=0;i<n;i++)
    {
        if(man[i]>max)
        {
            max=man[i];
            maxno=i+1;
        }

    }
    cout<<maxno;

    return 0;
}
/*

*/

