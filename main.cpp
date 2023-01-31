#include <iostream>

//Dining Hall

using namespace std;

//Billing Variables
int diningVoucher=0;
float voucherFunds=0;
float fundsAvailable=0;

bool quit = false;

char moreFunds;

float insertCoin=0;
float insertedMoney=0;

//Food Variables
bool quit1 = false;
char foodSelect;
char moreMeals;
float foodPrice;

//Bev Variables
bool quit2 = false;
char bevSelect;
char moreBev;
float bevPrice;

int main()
{
    cout << "===================================================" << endl;
    cout << "========== Welcome to the Dining Hall =============" << endl;
    cout << "===================================================" << endl;
    cout << "Please Choose Your Dining Voucher:" << endl;
    cout << "(1)$10, (2)$20, (3)$50, (4)$100 : ";
    cin >> diningVoucher;
    if (diningVoucher==1){
        voucherFunds=10;
    }
    else if (diningVoucher==2){
        voucherFunds=20;
    }
    else if (diningVoucher==3){
        voucherFunds=50;
    }
    else if (diningVoucher==4){
        voucherFunds=100;
    }
    cout << "You've inserted: $" <<voucherFunds<<endl;
    fundsAvailable=voucherFunds;
    cout << "Funds available: $" <<fundsAvailable<<endl;
    //Bill Loop
    while (quit==false){
        cout<<"Add more funds (Y/N)? "<<endl;
        cin>>moreFunds;
        if(moreFunds=='N'||moreFunds=='n'){
            quit=true;
        }
        else if(moreFunds=='Y'||moreFunds=='y'){
            cout<<"Please insert your coins/bills"<<endl;
            cout<<"(1)$10, (2)$20, (3)$50, (4)$100 : ";
            cin>>insertCoin;
            if(insertCoin==1){
                insertedMoney=10;
            }
            else if (insertCoin==2){
                insertedMoney=20;
            }
            else if (insertCoin==3){
                insertedMoney=50;
            }
            else if (insertCoin==4){
                insertedMoney=100;
            }
            cout<<"You've inserted: $"<<insertedMoney<<endl;
            fundsAvailable+=insertedMoney;
            cout<<"Funds available: $"<<fundsAvailable<<endl;
        }

    }
//Food Loop
while(quit1==false){
        cout<<"Please make a selection:"<<endl;
        cout<<"(P)otato Chips $2.50, (H)am Burger $5.50, (C)hicken & Rice $5.50, (B)rooklyn Pizza $4.50"<<endl;
        cin>>foodSelect;
        if (foodSelect=='P'||foodSelect=='p'){
            foodPrice=2.50;
        }
        else if (foodSelect=='H'||foodSelect=='h'){
            foodPrice=5.50;
        }
        else if (foodSelect=='C'||foodSelect=='c'){
            foodPrice=5.50;
        }
        else if (foodSelect=='B'||foodSelect=='b'){
            foodPrice=4.50;
        }
        fundsAvailable-=foodPrice;
         if (fundsAvailable<2.5&&fundsAvailable>1.5){
            //cout<<"Insufficient funds for food selection"<<endl;
            cout<<"Funds available: $"<<fundsAvailable<<endl;
            quit1=true;
            break;
        }
        else if (fundsAvailable<0){
            cout<<"Insufficient funds to make selection"<<endl;
            cout<<"Please make a different selection."<<endl;
            fundsAvailable+=foodPrice;
            //cout<<"Funds available: $"<<fundsAvailable<<endl;
        }
        else if (fundsAvailable==0){
            cout<<"Funds available: $"<<fundsAvailable<<endl;
            cout<<"Enjoy your Meal!"<<endl;
        break;
            //cout<<"Funds available: $"<<fundsAvailable<<endl;
        }
        else if (fundsAvailable<1.5&&fundsAvailable>0){
            cout<<"Funds available: $"<<fundsAvailable<<endl;
            cout<<"Please take your change."<<endl;
            cout<<"Enjoy your meal!"<<endl;
            quit1=true;
            break;
        }
        cout<<"Funds available: $"<<fundsAvailable<<endl;
        cout<<"Add more meals (Y/N)?"<<endl;
        cin>>moreMeals;

        if (moreMeals=='N'||moreMeals=='n'){
            quit1=true;
        }
        }

        //Bev Loop
        while (quit2==false){
            if (fundsAvailable<1.5){
                quit2=true;
                break;
            }
            else if (fundsAvailable<=0){
                quit2=true;
                break;
            }
            cout<<"Please make a selection: "<<endl;
            cout<<"(A)quaVeena $1.50, (B)epsi $2.00, (C)ool Cola $2.00, (G)atorade $2.25"<<endl;
            cin>>bevSelect;
        if (bevSelect=='A'||bevSelect=='a'){
            bevPrice=1.50;
        }
        else if (bevSelect=='B'||bevSelect=='b'){
            bevPrice=2.00;
        }
        else if (bevSelect=='C'||bevSelect=='c'){
            bevPrice=2.00;
        }
        else if (bevSelect=='G'||bevSelect=='g'){
            bevPrice=2.25;
        }
        fundsAvailable-=bevPrice;
        if (fundsAvailable<0){
            cout<<"Insufficient funds to make selection"<<endl;
            cout<<"Please make a different selection."<<endl;
            fundsAvailable+=bevPrice;
            //cout<<"Funds available: $"<<fundsAvailable<<endl;
        }
         else if (fundsAvailable<1.5&&fundsAvailable>0){
            cout<<"Funds available: $"<<fundsAvailable<<endl;
            cout<<"Please take your change."<<endl;
            cout<<"Enjoy your meal/drink!"<<endl;
            quit2=true;
            break;
        }
        else if (fundsAvailable==0){
            cout<<"Funds available: $"<<fundsAvailable<<endl;
            cout<<"Enjoy your Meal/Drink!"<<endl;
            quit2=true;
            break;
        }

        cout<<"Funds available: $"<<fundsAvailable<<endl;
        cout<<"Add more drinks (Y/N)?"<<endl;
        cin>>moreBev;
        if (moreBev=='N'||moreBev=='n'){
            cout<<"Enjoy your Meal/Drink!"<<endl;
            quit2=true;
        }

        }

}
