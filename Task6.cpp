#include<fstream>
#include<iostream>
using namespace std;
string Data();
main()
{
    string Correct_Data;
    Correct_Data=Data();
    cout<<Correct_Data;
    fstream task6;
    task6.open("Data.txt", ios::out);
        task6<<Correct_Data;
    task6.close();
}
string Data()
{
    string data, sen="\"What... why did you make this?\"";
    int c=0;
    char Correct_Data[200];
    fstream task6;
    task6.open("Data.txt", ios::in);
    while(!task6.eof())
    {
        getline(task6,data);
        for(int x=0;data[x]!='\0';x++)
            {
                if(data[x]!='[' && data[x]!=']')
                {
                    Correct_Data[c]=data[x];
                    c++;
                }
            }
            //cout<<endl;
    }
    task6.close();
    if(c==0)
        return sen;
    else
    return Correct_Data;
}
