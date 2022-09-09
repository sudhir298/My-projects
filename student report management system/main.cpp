#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
using namespace std;

void login();
void registr();
void forgot();

// //function declaration
// void create_student();
// void display_sp(int);//display particular record
// void display_all(); // display all records
// void delete_student(int);//delete particular record
// void change_student(int);//edit particular record

// class student
// {
//      int rollno;
//      char name[50];
//      int eng_marks, math_marks, sci_marks, lang2_marks, cs_marks;
//      double average;
//      char grade;

//      public:
//           void getdata();
//           void showdata() const;
//           void calculate();
//           int retrollno() const;
// }; //class ends here

// void student::calculate()
// {
//      average=(eng_marks+math_marks+sci_marks+lang2_marks+cs_marks)/5.0;
//      if(average>=90)
//      grade='A';
//      else if(average>=75)
//      grade='B';
//      else if(average>=50)
//      grade='C';
//      else
//      grade='F';
// }

// void student::getdata()
// {
//      cout<<"\nEnter student's roll number: ";
//      cin>>rollno;
//      cout<<"\n\nEnter student name: ";
//      cin.ignore();
//      cin.getline(name,50);
//      cout<<"\nAll marks should be out of 100";
//      cout<<"\nEnter marks in English: ";
//      cin>>eng_marks;
//      cout<<"\nEnter marks in Math:  ";
//      cin>>math_marks;
//      cout<<"\nEnter marks in Science:  ";
//      cin>>sci_marks;
//      cout<<"\nEnter marks in 2nd language:  ";
//      cin>>lang2_marks;
//      cout<<"\nEnter marks in Computer science:  ";
//      cin>>cs_marks;
//      calculate();
// }
// void student::showdata() const
// {
//      cout<<"\nRoll number of student : "<<rollno;
//      cout<<"\nName of student : "<<name;
//      cout<<"\nEnglish : "<<eng_marks;
//      cout<<"\nMaths : "<<math_marks;
//      cout<<"\nScience : "<<sci_marks;
//      cout<<"\nLanguage2 : "<<lang2_marks;
//      cout<<"\nComputer Science :"<<cs_marks;
//      cout<<"\nAverage Marks :"<<average;
//      cout<<"\nGrade of student is :"<<grade;
// }

// int  student::retrollno() const
// {
//      return rollno;
// }


// void create_student()
// {
//      student stud;
//      ofstream oFile;
//      oFile.open("student.dat",ios::binary|ios::app);
//      stud.getdata();
//      oFile.write(reinterpret_cast<char *> (&stud), sizeof(student));
//      oFile.close();
//           cout<<"\n\nStudent record Has Been Created ";
//      cin.ignore();
//      cin.get();
// }

// // read file records
// void display_all()
// {
//      student stud;
//      ifstream inFile;
//      inFile.open("student.dat",ios::binary);
//      if(!inFile)
//      {
//      cout<<"File could not be opened !! Press any Key to exit";
//      cin.ignore();
//      cin.get();
//      return;
//      }
//      cout<<"\n\n\n\t\tDISPLAYING ALL RECORDS\n\n";
//      while(inFile.read(reinterpret_cast<char *> (&stud), sizeof(student)))
//      {
//           stud.showdata();
//           cout<<"\n\n====================================\n";
//      }
//      inFile.close();
//      cin.ignore();
//      cin.get();
// }
// //read specific record based on roll number
// void display_sp(int n)
// {
//      student stud;
//      ifstream iFile;
//      iFile.open("student.dat",ios::binary);
//      if(!iFile)
//      {
//           cout<<"File could not be opened... Press any Key to exit";
//           cin.ignore();
//           cin.get();
//           return;
//      }
//      bool flag=false;
//      while(iFile.read(reinterpret_cast<char *> (&stud), sizeof(student)))
//      {
//           if(stud.retrollno()==n)
//           {
//                stud.showdata();
//                flag=true;
//           }
//      }
//      iFile.close();
//      if(flag==false)
//      cout<<"\n\nrecord does not exist";
//      cin.ignore();
//      cin.get();
// }

// // modify record for specified roll number
// void change_student(int n)
// {
//      bool found=false;
//      student stud;
//      fstream fl;
//      fl.open("student.dat",ios::binary|ios::in|ios::out);
//      if(!fl)
//      {
//           cout<<"File could not be opened. Press any Key to exit...";
//           cin.ignore();
//           cin.get();
//           return;
//      }

//      while(!fl.eof() && found==false)
//      {
//           fl.read(reinterpret_cast<char *> (&stud), sizeof(student));
//           if(stud.retrollno()==n)
//           {
//                stud.showdata();
//                cout<<"\nEnter new student details:"<<endl;
//                stud.getdata();
//               int pos=(-1)*static_cast<int>(sizeof(stud));
//               fl.seekp(pos,ios::cur);
//               fl.write(reinterpret_cast<char *> (&stud), sizeof(student));
//               cout<<"\n\n\t Record Updated";
//               found=true;
//           }
//      }
//      fl.close();
//      if(found==false)
//      cout<<"\n\n Record Not Found ";
//      cin.ignore();
//      cin.get();
// }

// //delete record with particular roll number
// void delete_student(int n)
// {
//      student stud;
//      ifstream iFile;
//      iFile.open("student.dat",ios::binary);
//      if(!iFile)
//      {
//           cout<<"File could not be opened... Press any Key to exit...";
//           cin.ignore();
//           cin.get();
//           return;
//      }
//      ofstream oFile;
//      oFile.open("Temp.dat",ios::out);
//      iFile.seekg(0,ios::beg);
//      while(iFile.read(reinterpret_cast<char *> (&stud), sizeof(student)))
//      {
//           if(stud.retrollno()!=n)
//           {
//           oFile.write(reinterpret_cast<char *> (&stud), sizeof(student));
//           }
//      }
//      oFile.close();
//      iFile.close();
//      remove("student.dat");
//      rename("Temp.dat","student.dat");
//      cout<<"\n\n\tRecord Deleted ..";
//      cin.ignore();
//      cin.get();
// }



int main()
{
        int choice;
        cout<<"***********************************************************************\n\n\n";
        cout<<"                      Welcome to login page                               \n\n";
        cout<<"*******************        MENU        *******************************\n\n";
        cout<<"1.LOGIN"<<endl;
        cout<<"2.REGISTER"<<endl;
        cout<<"3.FORGOT PASSWORD (or) USERNAME"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"\nEnter your choice :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        login();
                        break;
                case 2:
                        registr();
                        break;
                case 3:
                        forgot();
                        break;
                case 4:

                        cout<<"Thanks for using this program.\nThis program is created by @Sudhir\n\n";
                        break;
                default:
                        system("cls");
                        cout<<"You've made a mistake , Try again..\n"<<endl;
                        main();
        }
        return 0;
}

void login()
{
        int count;
        string user,pass,u,p;
        system("cls");
        cout<<"please enter the following details"<<endl;
        cout<<"USERNAME :";
        cin>>user;
        cout<<"PASSWORD :";
        cin>>pass;

        ifstream input("database.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)

                {
                        count=1;
                        system("cls");
                }
        }
        input.close();

        if(count==1)
        {
                cout<<"\nHello"<<user<<"\n<LOGIN SUCCESSFUL>\nThanks for logging in..\n";
                cin.get();
                cin.get();
                main();
        }
        else
        {
                cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
                main();
        }
}

void registr()
{

        string reguser,regpass,ru,rp;
        system("cls");
        cout<<"Enter the username :";
        cin>>reguser;
        cout<<"\nEnter the password :";
        cin>>regpass;

        ofstream reg("database.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        cout<<"\nRegistration Sucessful\n";
        main();


}

void forgot()
{
        int ch;
        system("cls");
        cout<<"Forgotten ? We're here for help\n";
        cout<<"1.Search your id by username"<<endl;
        cout<<"2.Search your id by password"<<endl;
        cout<<"3.Main menu"<<endl;
        cout<<"Enter your choice :";
        cin>>ch;
        switch(ch)
        {
                case 1:
                {
                        int count=0;
                        string searchuser,su,sp;
                        cout<<"\nEnter your remembered username :";
                        cin>>searchuser;

                        ifstream searchu("database.txt");
                        while(searchu>>su>>sp)
                        {
                                if(su==searchuser)
                                {
                                        count=1;
                                }
                        }
                        searchu.close();
                        if(count==1)
                        {
                                cout<<"\n\nHurray, account found\n";
                                cout<<"\nYour password is "<<sp;
                                cin.get();
                                cin.get();
                                system("cls");
                                main();
                        }
                        else
                        {
                                cout<<"\nSorry, Your userID is not found in our database\n";
                                cout<<"\nPlease kindly contact your system admin for more details \n";
                                cin.get();
                                cin.get();
                                main();
                        }
                        break;
                }
                case 2:
                {
                        int count=0;
                        string searchpass,su2,sp2;
                        cout<<"\nEnter the remembered password :";
                        cin>>searchpass;

                        ifstream searchp("database.txt");
                        while(searchp>>su2>>sp2)
                        {
                                if(sp2==searchpass)
                                {
                                        count=1;
                                }
                        }
                        searchp.close();
                        if(count==1)
                        {
                                cout<<"\nYour password is found in the database \n";
                                cout<<"\nYour Id is : "<<su2;
                                cin.get();
                                cin.get();
                                system("cls");
                                main();
                        }
                        else
                        {
                                cout<<"Sorry, We cannot found your password in our database \n";
                                cout<<"\nkindly contact your admin for more information\n";
                                cin.get();
                                cin.get();
                                main();
                        }

                        break;
                }

                case 3:
                {
                        cin.get();
                        main();
                }
                default:
                        cout<<"Sorry, You entered wrong choice. Kindly try again"<<endl;
                        forgot();
        }
}