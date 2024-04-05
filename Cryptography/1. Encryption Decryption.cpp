#include<bits/stdc++.h>
using namespace std;

void encryption()
{
    char msg[20];
    int key;

    cout<<"Enter original message: ";
    fflush(stdin);
    gets(msg);
    cout<<"Enter key: ";
    cin>>key;

    int arr[strlen(msg)];
    for(int i=0; i<strlen(msg); i++)
    {
        arr[i] = msg[i] - 65;
        arr[i] = (arr[i] + key) % 26;
    }

    cout<<"Cipher Text is: ";
    for(int i=0; i<strlen(msg); i++)
        printf("%c",arr[i]+65);
}

void decryption()
{
    char msg[20];
    int key;

    cout<<"Enter Cypher Text: ";
    fflush(stdin);
    gets(msg);
    cout<<"Enter key: ";
    cin>>key;

    int arr[strlen(msg)];
    cout<<"Plain Text is: ";
    for(int i=0; i<strlen(msg); i++)
    {
        arr[i] = msg[i];
        arr[i] = arr[i] - key;
        if(arr[i] < 65)
            printf("%c",arr[i]+26);
        else
            printf("%c",arr[i]);
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
