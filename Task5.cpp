#include<iostream>
using namespace std;
string Encrypt(string);
main()
{
    string message,Encrypted;
    cout<<"Enter sentence: ";
    getline(cin,message);
    Encrypted=Encrypt(message);
    cout<<Encrypted;
}
string Encrypt(string a)
{
    string b;
    for(int x=0;a[x]!='\0';x++)
    {
        switch (a[x])
    {
        case 'A':
        case 'a':
        b=b+".-";
        break;
        case 'B':
        case 'b':
        b=b+"-...";
        break;
        case 'c':
        case 'C':
        b=b+"-.-.";
        break;
        case 'd':
        case 'D':
        b=b+"-..";
        break;
        case 'e':
        case 'E':
        b=b+".";
        break;
        case 'f':
        case 'F':
        b=b+"..-.";
        break;
        case 'g':
        case 'G':
        b=b+"--.";
        break;
        case 'H':
        case 'h':
        b=b+"....";
        break;
        case 'i':
        case 'I':
        b=b+"..";
        break;
        case 'j':
        case 'J':
        b=b+".---";
        break;
        case 'k':
        case 'K':
        b=b+"-.-";
        break;
        case 'l':
        case 'L':
        b=b+".-..";
        break;
        case 'm':
        case 'M':
        b=b+"--";
        break;
        case 'n':
        case 'N':
        b=b+"-.";
        break;
        case 'o':
        case 'O':
        b=b+"---";
        break;
        case 'p':
        case 'P':
        b=b+".--.";
        break;
        case 'q':
        case 'Q':
        b=b+"--.-";
        break;
        case 'r':
        case 'R':
        b=b+".-.";
        break;
        case 's':
        case 'S':
        b=b+"...";
        break;
        case 't':
        case 'T':
        b=b+"-";
        break;
        case 'u':
        case 'U':
        b=b+"..-";
        break;
        case 'v':
        case 'V':
        b=b+"...-";
        break;
        case 'w':
        case 'W':
        b=b+".--";
        break;
        case 'x':
        case 'X':
        b=b+"-..-";
        break;
        case 'y':
        case 'Y':
        b=b+"-.--";
        break;
        case 'z':
        case 'Z':
        b=b+"--..";
        break;
        case ' ':
        b=b+"-.-.-.-";
        break;
    }
    cout<<b[x];
    }
    return b;
}

