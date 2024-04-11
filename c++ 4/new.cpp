#include<iostream>
#include<fstream>
using namespace std;
class Student{
    public:
    int no;
    string name;

    void Write()
    {
        ofstream out("Sample.txt",ios::app);
        cout<<"\n Enter The Number : ";
        cin>>no;

        cout<<"\n Enter The Name : ";
        cin>>name;
        out<<"\n"<<no<<"\t"<<name;
        out.close();
    }
    void Display()
    {
        ifstream in;
        in.open("Sample.txt");

        cout<<"\nNumber\tName";
        while(in>>no>>name)
        {
            cout<<"\n"<<no<<"\t"<<name;
        }
        in.close();
    }
    void Delete()
    {
        int Id;
        cout<<"\n Id : ";
        cin>>Id;

        ifstream in("Sample.txt");
        ofstream out("TEMP.txt");

        while(in>>no>>name)
        {
            if(no==Id)
            {
                continue;
            }
            else
            {
                out<<"\n"<<no<<"\t"<<name;
            }
        }
        in.close();
        out.close();

        ifstream TEMPin("TEMP.txt");
        ofstream SAMPLEout("Sample.txt");

        while(TEMPin>>no>>name)
        {
            SAMPLEout<<"\n"<<no<<"\t"<<name;
        }
        TEMPin.close();
        SAMPLEout.close();
    }
    void Update()
    {
        int Id;
        cout<<"\n Enter The Id : ";
        cin>>Id;

        ifstream in("Sample.txt");
        ofstream out("TEMP.txt");

        while(in>>no>>name)
        {
            if(no==Id)
            {
                cout<<"\n Name : ";
                cin>>name;
            }
            out<<no<<name;
        }
        in.close();
        out.close();

        ifstream TEMPin("TEMP.txt");
        ofstream SAMPLEout("Sample.txt");

        while(TEMPin>>no>>name)
        {
            SAMPLEout<<"\n"<<no<<"\t"<<name;
        }
        TEMPin.close();
        SAMPLEout.close();
    }

};
int main()
{
    Student S;

    S.Write();
    S.Display();
    S.Delete();
    S.Update();
    return 0;
}