#include<iostream>
using namespace std;
int main(){
  int choice;
  do 
    {
      cout<<"\n====student management system ===="<<endl;
      cout<<"1.Add student"<<endl;
      cout<<"2.show students"<<endl;
      cout<<"3.search student"<<endl;
      cout<<"4.Exit"<<endl;
      cout<<"Enter your choice:"<<endl;
      cin>>shoice;
      switch (choice)
        {
          case 1 :
            cout<<"Add student"<<endl;
            break;
          case 2:
            cout<<"show students"<<endl;
            break;
          case 3:
            cout<<"search student"<<endl;
            break;
          case 4:
            cout<<"Goodbye!"<<endl;
            break;
            default :
              cout<<"invalid choice!"<<endl;
        }
    }
    while(choice !=4);
return 0;
}
