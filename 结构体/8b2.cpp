/*

n个人
3个指标:k i e

全面严格压制 淘汰


*/

#include<iostream>
using namespace std;
struct Man
{
    int k;
    int i;
    int e;
    int no;

};
int main()
{
    int n,sum=0;
    cin>>n;
    Man man[n];
    for(int i=0;i<n;i++)
    {
        cin>>man[i].k;
        man[i].no=i+1;
    }
     for(int j=0;j<n;j++)
    {
        cin>>man[j].i;
    }
     for(int i=0;i<n;i++)
    {
        cin>>man[i].e;
    }
    for(int p=0;p<n;p++)
    {
        for(int j=0;j<n;j++)
        {
            if(p!=j&&man[p].e<man[j].e&&man[p].k<man[j].k&&man[p].i<man[j].i)
            {
                sum++;
            }
        }
    }
    cout<<sum;


}
