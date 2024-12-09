#include <iostream>
using namespace std;

int main() {
    int choice,balance,plans;

    cout << "Welcome To Jio" << endl;
    cout << "Gujrati Mate 1 Dabao : ";
    cin >> choice;
    cout << "Hindi Ke Liye 2 Dabaye : ";
    cin >> choice;
    cout << "For English Press 3 : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Balance Check Karva Mate 1 Dabao : ";
        cout << "Plans Janva Mate 2 Dabao : ";
        cout << "Recharge Mate 3 Dabao : ";
        cout << "Mahiti Mate 4 Dabao : ";
        cout << "Bahar Nikadva Mate 5 Dabavo : ";
        cout << "Tamari Pasand Dakhal Karo : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Prepaid Mate 1 Dabao : ";
            cout << "Postpaid Mate 2 Dabao : ";
            cout << "Main Menu Ma Java Mate 3 Dabao : ";
            cout << "Enter your choice: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "Tamari prepaid balance $10. che";
                break;
            case 2:
                cout << "Tamaru postpaid bill $50. che";
                break;
            case 3:
                cout << "Main Menu";
                break;
            
            default:
                cout << "Invalid choice.";
                cout << "Main Menu....";
                break;
            }
            break;
        case 2:
            cout << "Plans:";
            cout << "Data Packs Mate 1 Dabao : ";
            cout << "Voice Packs Mate 2 Dabao : ";
            cout << "Combo Packs Mate 3 Dabao : ";
            cout << "Main Menu Ma Java Mate 4 Dabao : ";
            cout << "Tamari Pasand Dakhal Karo : ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "Data Packs: " <<endl;
                cout << "1GB/day 28 divas mate : $10" <<endl;
                cout << "2GB/day 28 divas mate : $15" <<endl;
                break;
            case 2:
                cout << "Voice Packs : " <<endl;
                cout << "Unlimited calls 28 divas mate : $8" <<endl;
                break;
            case 3:
                cout << "Combo Packs : " <<endl;
                cout << "1GB/day + Unlimited Calls 28 divas mate : $18" <<endl;
                break;
            case 4:
                cout << "Main Menu..." <<endl;
                return;

            default:
                cout << "Invalid choice !";
                break;
            }
            break;
        case 3:
            float amount;
            cout << "Recharge : ";
            cout << "Recharge Karva Mate rakam dakhal karo : ";
            cin >> amount;
            if (amount > 0)
            {
                cout << "$" << amount << "Nu Recharge Safalta purvak thay gyu che.";
            }
            else {
                cout << "Dakhal Karel Rakam Khoti che. Fari thi try Karo.";
            }
            break;

        case 4:
            cout << "Customer Support : ";
            cout << "FAQ mate 1 Dabao : ";
            cout << "Agent Sathe Vat Karva Mate 2 Dabao : ";
            cout << "Main Menu Ma Java Mate 3 Dabao : ";
            cout << "Tamari Pasand Dakhal Karo : ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "FAQ : ";
                cout << "Balance issues Mate, Call 12345.";
                cout << "Recharge issues Mate, Call 54321.";
                break;

            case 2: 
                cout << "Agent Sathe Call Connect Thay Rahyo 6e....Thodi Rah Jovo.";
                break;
            
            case 3: 
                cout << "Main Menu...";
                break;
            
            default:
                cout << "Invalid Input...";
                break;
            }
            break;

        case 5:
            cout << "Jio Sim Use Karva Badal Abhar. Good Bye !";
            return;
        default:
            cout << "Dakhal Karel Input Khotu che. Fari thi try Karo.";
            break;
        }
        break;
    
    default:
        cout << "Invalid Input. Please try again.";
        break;
    }
}