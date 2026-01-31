#include<iostream>
#include<fstream>
using namespace std;


class temp{
    string phoneNo,name,address,description,search;
    fstream file;

    public:
    void addContact();
    void showAll();
    void searchContact();

}obj;


int main(){

    char choice;

    cout<<"Welcome to contact support"<<endl;
    cout<<"1 --> Add Contact "<<endl;
    cout<<"2 --> Show All Contacts "<<endl;
    cout<<"3 --> Search Contact "<<endl;
    cout<<"0 --> Exit";
    cin>>choice;

    switch(choice)
    {
        case '1':
            obj.addContact();
            break;
        case '2':
            obj.showAll();
            break;
        case '3':
            obj.searchContact();
            break;
        case '0':
            exit(0);
            break;
        default:
            cout<<"Invalid Choice.....! Please try again.";
    }


obj.addContact();
obj.showAll();
obj.searchContact();


    return 0;
}

void temp:: addContact(){
  cout<<"Enter Phone Number:";
  getline(cin,phoneNo);
  cout<<"Enter Name:";
  getline(cin,name);
  cout<<"Enter Address:";
  getline(cin,address);
  cout<<"Enter Description:";
  getline(cin,description);

  file.open("'data.csv",ios::out | ios :: app);
  file<<phoneNo<<" "<<name<<","<<address<<","<<description<<"\n";
  file.close();
}
void temp:: showAll(){
    file.open("data.csv",ios::in);


    getline(file,phoneNo,",");
    getline(file,name,",");
    getline(file,address,",");
    getline(file,description,"\n");

    while(!file.eof()){
        cout<<"phone Number ::" <<phoneNo<<endl;
        cout<<"Name ::"<<name<<endl;
        cout<<"Address ::"<<address<<endl;
        cout<<"Description ::"<<description<<endl<<endl;

        getline(file,phoneNo,",");
        getline(file,name,",");
        getline(file,address,",");
        getline(file,description,"\n");

    }
    file.close();

}

void temp:: searchContact(){
file.open("data.csv",ios::in);


    getline(file,phoneNo,",");
    getline(file,name,",");
    getline(file,address,",");
    getline(file,description,"\n");

    while(!file.eof()){
        cout<<"phone Number ::" <<phoneNo<<endl;
        cout<<"Name ::"<<name<<endl;
        cout<<"Address ::"<<address<<endl;
        cout<<"Description ::"<<description<<endl<<endl;

        getline(file,phoneNo,",");
        getline(file,name,",");
        getline(file,address,",");
        getline(file,description,"\n");

    }
    file.close();


}