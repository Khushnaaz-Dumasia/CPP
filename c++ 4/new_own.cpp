#include<iostream>
#include<fstream>
using namespace std;

class student{
    public:
    int no;
    string name;

    void input()
    {
        fstream file("sample.txt", ios::app);
        cout<<"\nEnter no: ";
        cin>>no;

        cout<<"\nEnter name: ";
        cin>>name;

        file<<"\nnumber: "<<no<<"\nName: "<<name;
        file.close();
    }

    void display()
    {
        fstream file;
        file.open("sample.txt");
        cout<<"\nNumber\tName"<<no<<"\t"<<name;
        while(file>>no>>name)
        {
            cout<<"\n"<<no<<"\t"<<name;
        }
        file.close();
    }

    void Delete()
    {
        int num;
        cout<<"\nEnter number to delete: ";
        cin>>num;

        ifstream file("sample.txt");
        ofstream file1("sample1.txt");
        while(file>>no>>name)
        {
            if(no==num)
            {
                continue;
            }
            else{
                file1<<"\nNUM="<<no<<"\tNAME="<<name;
            }
        }
        file.close();
        file1.close();

        //copy file 1 content into file
        ifstream ifile1("sample1.txt");
        ofstream ofile("sample.txt");

        while(ifile1>>no>>name)
        {
            ofile<<"\n"<<no<<"\t"<<name;
        }
        ifile1.close();
        ofile.close();
    }

    void Update()
    {
        int num;
        cout<<"\nEnter number to update: ";
        cin>>num;

        ifstream file("sample.txt");
        ofstream file1("sample1.txt");

        while(file>>no>>name)
        {
            if(no==num)
            {
                cout<<"\nEnter name to update: ";
                cin>>name;
            }
            file1<<"\nNUM="<<no<<"\tNAME="<<name;
        }
        file.close();
        file1.close();

        //copy file 1 content into file
        ifstream ifile1("sample1.txt");
        ofstream ofile("sample.txt");
        while(ifile1>>no>>name)
        {
            ofile<<"\n"<<no<<"\t"<<name;
        }

        ifile1.close();
        ofile.close();
    }
};

int main()
{
    student s;
    int ch=0;
    do{
        cout<<"\n1. Input\n2. Display\n3. Delete\n4. Update\n5. Exit";

        cout<<"\nEnter your choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1: s.input();
            break;
            case 2: s.display();
            break;
            case 3: s.Delete();
            break;
            case 4: s.Update();
            break;
            case 5: exit(0);
            break;
        }
    }
    while(ch!=5);
    return 0;
}