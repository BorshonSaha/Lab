#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 0, y = 0, r = 10;
    int x0 = x, y0 = y;
    int pk = 1 - r;
    y = r;
    int xk = x, yk = y, xplot, yplot;

    while(1)
    {
        if(pk < 0)
        {
            pk = pk + 2 * xk + 1;
            xk = xk + 1;
        }
        else if(pk >= 0)
        {
            pk = pk + 2 * xk + 1 - 2 * yk;
            xk = xk + 1;
            yk = yk - 1;
        }
        xplot = x0 + xk;
        yplot = y0 + yk;
        cout<<" (x, y) -> "<<xk<<", "<<yk<<" (xplot, yplot) -> "<<xplot<<", "<<yplot<<"\n";
        if(xplot >= yplot)
            break;
    }
}
