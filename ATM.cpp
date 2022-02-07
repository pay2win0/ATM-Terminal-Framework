#include <iostream>
#include <cstdlib>
using namespace std;

int main()
(
    int pin;
    int password = 1234; //pin variable may display fault if exceeded
    int count = 0;
    int entry;
    double deposit = 0.0;
    
    double balance = 0.0;
    
    
    double withdraw = 0.0;
    
    bool isTrue = true;
    

    system ("XX"); //change colour
    
    
    
    do
    (
        
     cout << "***Welcome to X***\n"; //nom
        
     cout <<"Enter Pin:\n";
     cin >> pin;

     if(pin == password)
    (
        do
        (
cout << "***Welcome to X**\n" //enter note
            << "1. Deposit\n"
            
            << "2. Withdraw\n"
            
            << "3. Balance\n"  
            
            << "4. Exit\n";
            
        cout << "Choose an option:\n"
        cin >> entry;
        switch(entry)
        (
            
        case 1:
            cout << "Deposit amount:\n";
            cin >> deposit;
            balance = balance + deposit;
            
            break;
        case 2:
            cout << "withdraw amount:\n";
            cin >> withdraw;
            
            balance = balance - withdraw;
            break;
            
        case 3:
            cout << "Current balance" << balance <<end1;
            break;
        case 4:
            cout << "Goodbye mon ami! o/ \n";
            
            isTrue = false;
            break;

        )
        )while(isTrue != false);
        
        
    )
  else
  (
    count++;
        if(count == 4)
            isTrue = false;
      
        else    
            cout << "Wrong Pin!\n"
  )

    )
  
 )while(IsTrue) !=false)
    


    return 0;
)
