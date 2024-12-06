#include<fstream>
#include<iostream>
using namespace std;
main()
{
    string name;
    int x=0,y,l;
    bool isEven=false;
    char character ;
    fstream Names;
    Names.open("Task3.txt",ios::in);
    while(!Names.eof())
    {
        getline(Names,name);
        //cout<<name<<endl;
        for(y=1;y<=3;y++)
        {
            for(x=0;name[x]!='\0';x++)
            {
                if(name[x]==',')
                {
                    isEven=false;
                     if(name[x+2]=='2' || name[x+2]=='4' || name[x+2]=='6' || name[x+2]=='8')
                        isEven=true;
                    if(isEven)
                    character='#';
                    else
                    character='*';
                }
            }
            if(y!=2)
            {
                for(int i=0;i<15;i++)
                cout<<character;
            }
            else
            {
                cout<<character<<" ";
                for(l=0;name[l]!='\0';l++)
                {
                    cout<<name[l];
                    if(name[l]==',')
                    cout<<"\b ! HB ";
                }
                cout<<" "<<character;
            }
            cout<<endl;
        }
        cout<<endl;
    }
    Names.close();
}
