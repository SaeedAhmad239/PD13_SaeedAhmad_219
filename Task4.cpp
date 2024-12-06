#include<iostream>
#include<fstream>
using namespace std;
main()
{
    string Alpha;
    char missing[25];
    int c=0,y,g=0;
    fstream Alphabets;
    Alphabets.open("alphabets.txt", ios::in);
        getline(Alphabets,Alpha);
        Alphabets.close();
        cout<<Alpha;
            for(int i=97;i<=122;i++)
            {
                if(char(i)!=Alpha[g])
                {
                     missing[c]=char(i);
                     c++;
                     g--;
                }
                g++;
            }
        c=0;
        g=0;
        for(int i=97;i<=122;i++)
            {
               if(missing[c]!=Alpha[c])
               missing[g]==char(i);
               c++;
               g++;
            }
            cout<<endl<<missing;
    ofstream Alphabet;
    Alphabet.open("alphabets.txt",ios::app);
    Alphabet<<endl<<missing;
    Alphabet.close();

}

