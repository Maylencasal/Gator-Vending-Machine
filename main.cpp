#include <iostream>

using namespace std;
bool quit = false;
bool quit1 = false;

int coinBill;
float moneyAmount=0;
float moneyInserted=0;
char moreCoins;
char bevSelect;
float bevPrice=0;
char moreDrinks;
float fakePrice=0;


int main()
{
    cout << "=====================================" << endl;
    cout << "Welcome to the GATORS Vending Machine" << endl;
    cout << "=====================================" << endl;

    while (quit==false){
    cout << "Please insert your coins/bills"<<endl;
    cout << "(1)$1, (2)$5, (3)$10, (4)$20 : ";
    cin >> coinBill;
    if (coinBill==1){
        moneyAmount=1;
    }
    else if (coinBill==2){
        moneyAmount=5;
    }
    else if (coinBill==3){
        moneyAmount=10;
    }
    else if (coinBill==4){
        moneyAmount=20;
    }
    else {
        cout<<"Invalid Selection."<<endl;
        cout<<"Add more coins/bill? (Y/N)"<<endl;
        cin>>moreCoins;
        cout<<"Please insert your coins/bills"<<endl;
        cout << "(1)$1, (2)$5, (3)$10, (4)$20 : "<<endl;
        cin >> coinBill;
        if (coinBill==1){
        moneyAmount=1;
    }
    else if (coinBill==2){
        moneyAmount=5;
    }
    else if (coinBill==3){
        moneyAmount=10;
    }
    else if (coinBill==4){
        moneyAmount=20;
    }}
    cout << "You've inserted: $"<<moneyAmount<<endl;
moneyInserted+=moneyAmount;
    cout << "Funds available: $"<<moneyInserted<<endl;

    cout << "Add more coins/bills? (Y/N)"<<endl;
    cin >> moreCoins;
    if (moreCoins=='N'||moreCoins=='n'){
        moneyAmount+=moneyAmount;
        cout<<"You've inserted: $"<<moneyInserted<<endl;
          if (moneyInserted<1.50){
            cout<<"Insufficient amount to make a selection"<<endl;
            quit1=true;
        }
        quit=true;
        while(quit1==false){

            cout<<"Please make a selection:"<<endl;
            cout<<"(A)quaVeena $1.50, (B)epsi $2.00, (C)ool Cola $2.00, (G)atorade $2.25"<<endl;
            cin>>bevSelect;
            if(bevSelect=='A'||bevSelect=='a'){
                bevPrice=1.50;
            }
            else if(bevSelect=='B'||bevSelect=='b'){
                bevPrice=2.00;
            }
            else if(bevSelect=='C'||bevSelect=='c'){
                bevPrice=2.00;
            }
            else if(bevSelect=='G'||bevSelect=='g'){
                bevPrice=2.25;
            }
            moneyInserted-=bevPrice;
            cout<<"Coins/bills: $"<<moneyInserted<<endl;
           /* if(moneyInserted<1.50&&moneyInserted>0){
                cout<<"Take your changes and enjoy your drinks"<<endl;
                quit1=true;
            }*/
            if(moneyInserted>1.50){
                cout<<"Add more drinks (Y/N)? :"<<endl;
                cin>>moreDrinks;
                if(moreDrinks=='N'||moreDrinks=='n'){
                cout<<"Coins/bills: $"<<moneyInserted<<endl;
                cout<<"Take your changes and enjoy your drinks"<<endl;
                quit1=true;
                }
                else if(moreDrinks=='Y'||moreDrinks=='y'){
                    cout<<" ";
                }
                else{
                    cout<<"Your answer is invalid. Please answer Y or N"<<endl;
                }
            }
            else if (moneyInserted<0){
                    cout<<"Insufficient amount to make a selection"<<endl;
                    cout<<"Please select the other beverage"<<endl;
                    moneyInserted+=bevPrice;
                    cout<<"Coins/bills: $"<<moneyInserted<<endl;
                    cout<<"Add more drinks (Y/N)? :"<<endl;
                    cin>>moreDrinks;
                    if(moreDrinks=='N'||moreDrinks=='n'){
                        cout<<"Coins/bills: $"<<moneyInserted<<endl;
                        cout<<"Take your changes and enjoy your drinks"<<endl;
                        quit1=true;
                    }
        }
        if(moneyInserted<1.50&&moneyInserted>0){
                cout<<"Take your changes and enjoy your drinks"<<endl;
                quit1=true;
            }
        else if(moneyInserted==0){
            cout<<"Enjoy your drinks"<<endl;
            quit1=true;
        }
    }
    }


    }}

    //This one took me awhile
