#include<bits/stdc++.h>
using namespace std;
int main()
{
    char msg[100], key[100];
    cout<<"Enter message (Capital): ";
    gets(msg);
    cout<<"Enter key (Capital): ";
    gets(key);

    int length = strlen(msg);

    int count = 0, i;
    if(strlen(key) < length * length)
    {
        for(i=strlen(key); i<length * length; i++)
            key[i] = key[count++];
        key[i] = NULL;
    }
    cout<<key<<"\n";

    int msgVector[length];
    for(int i=0; i<length; i++)
        msgVector[i] = msg[i] - 65;

    for(int i=0; i<length; i++)
        cout<<msgVector[i]<<" ";

    int keyMatrix[length][length], x = 0;
    for(int i=0; i<length; i++)
        for(int j=0; j<length; j++)
            keyMatrix[i][j] = key[x++] - 65;


    cout<<"\n";
    for(int i=0; i<length; i++)
    {
        for(int j=0; j<length; j++)
            cout<<keyMatrix[i][j]<<" ";

        cout<<"\n";
    }

    cout<<"\n\n";

    int cipherText[length], sum = 0;

    for(int i=0; i<length; i++)
    {
        for(int j=0; j<length; j++)
        {
            sum = sum + msgVector[j] * keyMatrix[i][j];
        }
        cipherText[i] = sum % 26;
        sum = 0;
    }

    for(int i=0; i<length; i++)
    {
        printf("%c ",cipherText[i] + 65);
    }
}
