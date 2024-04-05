#include<bits/stdc++.h>
using namespace std;

int main()
{
    float x1 = 32, x2 = 41, y1 = 35, y2 = 41;
    float m = (y2 - y1) / (x2 - x1);

    while(x1!=x2 && y1!=y2)
    {
        if(m < 1)
        {
            x1 += 1;
            y1 += m;
        }
        else if(m > 1)
        {
            x1 = x1 + (1/m);
            y1 = y1 + 1;
        }
        else
        {
            x1 += 1;
            y1 += 1;
        }
        cout<<" (x, y) -> "<<x1<<", "<<round(y1)<<"\n";
    }
}
