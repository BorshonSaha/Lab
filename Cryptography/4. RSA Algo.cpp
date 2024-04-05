#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p = 3, q = 7, e = 2, msg = 12;
    int n = p * q;
    int phi = (p-1) * (q-1);
    while(e < phi)
    {
        if(__gcd(e, phi) == 1)
            break;
        else
            e++;
    }
    int k = 2;
    double d = (1 + (k*phi)) / e;

    cout<<"Original Message: "<<msg<<"\n";

    double c = pow(msg, e);
    c = fmod(c, n);
    cout<<"After encryption: "<<c<<"\n";

    double m = pow(c, d);
    m = fmod(m, n);
    cout<<"After decryption: "<<m<<"\n";
}
