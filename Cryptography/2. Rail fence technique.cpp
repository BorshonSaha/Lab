#include<bits/stdc++.h>
using namespace std;

void encryption()
{
    string str, str2;
    cout<<"Enter your message: ";
    cin>>str;

    for(int i=0; i<str.length(); i++)
        if(i % 2 == 0)
            str2 += str[i];

    for(int i=0; i<str.length(); i++)
        if(i % 2 != 0)
            str2 += str[i];
    cout<<"Cipher Text: "<<str2;
}

void decryption()
{
    string str, str2;
    cout<<"Enter cipher text: ";
    cin>>str;

    int count = str.length() / 2;

    if(str.length() % 2 == 0)
    {
        for(int i=0; i<str.length() / 2; i++)
        {
            str2 += str[i];
            str2 += str[count++];
        }
        cout<<"\nPlain Text: "<<str2<<"\n";
    }

    if(str.length() % 2 != 0)
    {
        for(int i=0; i<=str.length() / 2; i++)
        {
            str2 += str[i];
            str2 += str[++count];
        }
        cout<<"\nPlain Text: "<<str2<<"\n";
    }
}

int main()
{
    cout<<"\t-----Menu-----\n";
    cout<<"\t 1. Encryption\n";
    cout<<"\t 2. Decryption\n";
    cout<<"\t 3. Exit\n";

    bool x = true;
    while(x)
    {
        cout<<"\nEnter your choice: ";
        int n;
        cin>>n;

        switch(n)
        {
        case 1:
            encryption();
            break;
        case 2:
            decryption();
            break;
        case 3:
            return 0;
        default:
            cout<<"Invalid choice\n";
        }
        cout<<"\n\nDo you want to continue [y/n]: ";
        char c;
        cin>>c;
        if(c == 'y')
            x = true;
        else
        {
            cout<<"\nThank you! See you again!!";
            x = false;
        }
    }
}
