#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p = 6, q = 13, a = 3, b = 10;

    double A = pow(p, a);
    A = fmod(A, q);

    double B = pow(p, b);
    B = fmod(B, q);

    double secret_key_1 = pow(B, a);
    secret_key_1 = fmod(secret_key_1, q);

    double secret_key_2 = pow(A, b);
    secret_key_2 = fmod(secret_key_2, q);

    cout<<"1st Key: "<<secret_key_1<<"\n";
    cout<<"2nd Key: "<<secret_key_2<<"\n";
}
