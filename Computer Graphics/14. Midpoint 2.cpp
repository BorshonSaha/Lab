#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  x_center = 0, y_center = 0, r = 10;
    int x0 = 0, y0 = r;
    int pk = 1 - r;
    int xk = x0, yk = y0, xplot, yplot;

    while(1)
    {
        if(pk < 0)
        {
            pk = pk + 2 * xk + 1;
            xk = xk + 1;
        }
        else if(pk >= 0)
        {
            pk = pk - 2 * yk + 2 * xk + 1;
            xk = xk + 1;
            yk = yk - 1;
        }
        xplot = x_center + xk;
        yplot = y_center + yk;
        cout<<" (x, y) -> "<<xk<<", "<<yk<<" (xplot, yplot) -> "<<xplot<<", "<<yplot<<"\n";

        if(xk > yk)
            break;
    }
}
