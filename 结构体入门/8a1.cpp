#include<bits/stdc++.h>
using namespace std;

/*
n 个坐标

坐标在分界线上，也算
*/
struct Point
{
    int x;
    int y;
};
int main()
{
    Point tl,br;
    cin>>tl.x>>tl.y
    >>br.x>>br.y;
    int n,sum=0;
    cin>>n;
    Point point[n];
    for(int i=0;i<n;i++)
    {
        cin>>point[i].x>>point[i].y;
        if(point[i].x<=br.x&&point[i].x>=tl.x
           &&point[i].y<=tl.y&&point[i].y>=br.y)
        {
            sum++;
        }
    }
    cout<<sum;

    return 0;
}
