#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

class Bank
{
private:
    float ammount;
    int Id;
    int Addhar;
    string name;
    int password; // 4Digit

public:
    void OpenAccount(int Addhar);
    void Account(int password);
    int showAccount(int id, int password);
    void Deposit(int Id);
    int Withdrawal(int Addhar);
};
void Deposit(int id){

}
void Bank::Account(int password)
{
    int count = 1;
    cout << "Enter your name ";
    cin >> name;
    int Id = rand();
    cout<<"Your ID is"<<Id<<endl;

    while (count)
    {

        
        cout << "Minimum deposit ammount is 500" << endl;
        cout << "Enter you ammount\t" << endl;
        cin >> ammount;
        if (ammount < 500)
        {
            cout << "Please Deposit atleast 500";
            
        }
        else if(ammount>500){
            Deposit(Id);
        }
        else if(count==1){
                    cout<<"OR if you want to stop here press 0\nOR if you wnat to Enter your ammount again press 1";

                    cin>>count;
            

         
        }
        else if(count>1){
            cout<<"Please choose correct option...";
            cout<<"Seasion expired...";
            count=0;

        }
       
          
    }
    
}
void Bank::OpenAccount(int Addhar)
{

    int count = 1;
    int confirmPassword;
    this->Addhar = Addhar;
    while (count)
    {

        cout << "Enter your password";
        cin >> password;
        cout << "Enter your confirm password";
        cin >> confirmPassword;
        if (password == confirmPassword)
        {
            Account(password);
        }
        else
            cout << "Sorry the password that you have enter is wrong" << endl;
        cout << "If  you enter again your password enter 1\n or if you want to stop enter 0 \t" << endl;
        cin >> count;
        if (count = 0)
        {
            count = 0;
        }
        else
            count = 1;
    }
    exit;
}
