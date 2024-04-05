#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1=20, y1=10, x2=30, y2=18;
    int dx = x2 - x1;
    int dy = y2 - y1;

    int pk = 2 * dy - dx;

    while(x1!=x2 && y1!=y2)
    {
        if(pk >= 0)
        {
            pk = pk + 2 * dy - 2 * dx;
            x1 += 1;
            y1 += 1;
        }
        else if(pk < 0)
        {
            pk = pk + 2 * dy;
            x1 += 1;
        }
        cout<<" (x, y) -> "<<x1<<", "<<y1<<"\n";
    }
}
