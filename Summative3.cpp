#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

void menu();
int quantity(int userQty, char drinkType);
double purchase(double userPay, int grandTotal);

int main(){

    char choice, yn = 'y', opt, sgr;
    int qty, total;
    double pay;

    do{
        
        system("CLS");
        cout << "WHAT DRINK WOULD YOU LIKE? : \n\nA. COFFEE\nB. TEA\n" << endl;
        while (!(cin >> choice) || !(tolower(choice) == 'a') && !(tolower(choice) ==  'b')){
            system("CLS");
            cout << "ERROR: INVALID INPUT\nPLEASE SELECT EITHER THE LETTERS A OR B ONLY" << endl;
            cin.clear();
            cin.ignore(123, '\n');
            cout << "WHAT DRINK WOULD YOU LIKE? : \n\nA. COFFEE\nB. TEA\n" << endl;
        }

        cout << "\nWOULD YOU LIKE TO ADD SUGAR? Y/N : ";
            
            while (!(cin >> sgr) || !(tolower(sgr) == 'y') && !(tolower(sgr) == 'n')){
                system("CLS");
                cout << "\nERROR: INVALID INPUT\nPLEASE SELECT EITHER Y OR N ONLY" << endl;
                cin.clear();
                cin.ignore(123,'\n');
                cout << "\nWOULD YOU LIKE TO ADD SUGAR? Y/N : ";
            }

        if (tolower(choice) == 'a'){
            system("CLS");
            menu();
            cout << "\nSELECT A [COFFEE] TYPE FROM THE MENU ABOVE (A-C) : "; 
            
            while (!(cin >> opt) || !(tolower(opt) ==  'a') && !(tolower(opt) == 'b') && !(tolower(opt) == 'c')){
                system("CLS");
                menu();
                cout << "ERROR: INVALID INPUT\nPLEASE SELECT FROM OPTIONS A TO C ONLY" << endl;
                cin.clear();
                cin.ignore(123,'\n');
                cout << "\nSELECT A [COFFEE] TYPE FROM THE MENU ABOVE (A-C) : "; 
            }

            switch (tolower(opt)){
                case 'a': 
                    
                    if (sgr == 'y'){
                    cout << "\nSELECTED: [ICED COFFEE W/ SUGAR]\nPRICE: AED 3" << endl;
                    }

                    else if (sgr == 'n'){
                        cout << "\nSELECTED: [ICED COFFEE]\nPRICE: AED 3" << endl;
                    }

                    cout << "\nQUANTITY: ";

                    while (!(cin >> qty) || qty <= 0){
                        system("CLS");
                        menu();
                        cout << "\nERROR: INVALID INPUT\nPLEASE ENTER THE AMOUNT OF THE SELECTION YOU WANT (MUST BE AN INTEGER AND > 0)" << endl;
                        cin.clear();
                        cin.ignore(123,'\n');
                        cout << "\nSELECTED: [ICED COFFEE]\nPRICE: AED 3" << endl;
                        cout << "\nQUANTITY: ";
                    }

                    total = quantity(qty, opt);
                    cout << "\nTOTAL: AED " << total << endl;
                    cout << "PAY AMOUNT: AED ";

                    while (!(cin >> pay)){
                        system("CLS");
                        cin.clear();
                        cin.ignore(123,'\n');
                        cout << "\nSELECTED: [ICED COFFEE]\nPRICE: AED 3" << endl;
                        cout << "\nQUANTITY: ";
                        cout << "\nTOTAL: AED " << total << endl;
                        cout << "\nERROR: INVALID INPUT\nPLEASE ENTER AN INTEGER " << endl;
                        cout << "\nPAY AMOUNT: AED "; 
                    }

                    if (pay < total){
                        cout << "\nPAY AMOUNT IS INSUFFICIENT. PURCHASE CANCELLED." << endl;
                    }

                    cout << "\nCHANGE: AED " << purchase(pay, total) << endl;
                    cout << "WOULD YOU LIKE TO ORDER AGAIN? Y/N : ";

                    while (!(cin >> yn) || !(tolower(yn) == 'y') && !(tolower(yn) == 'n')){
                        system("CLS");
                        cout << "ERROR: INVALID INPUT\nPLEASE SELECT EITHER Y OR N ONLY" << endl;
                        cin.clear();
                        cin.ignore(123, '\n');
                        cout << "\nWOULD YOU LIKE TO ORDER AGAIN? Y/N : ";
                    }

                    break;
                case 'b': 
                    
                    if (sgr == 'y'){
                    cout << "\nSELECTED: [MILK COFFEE W/ SUGAR]\nPRICE: AED 2" << endl;
                    }

                    else if (sgr == 'n'){
                        cout << "\nSELECTED: [MILK COFFEE]\nPRICE: AED 2" << endl;
                    }

                    cout << "\nQUANTITY: ";

                    while (!(cin >> qty) || qty <= 0){
                        system("CLS");
                        menu();
                        cout << "\nERROR: INVALID INPUT\nPLEASE ENTER THE AMOUNT OF THE SELECTION YOU WANT (MUST BE AN INTEGER AND > 0)" << endl;
                        cin.clear();
                        cin.ignore(123,'\n');
                        cout << "\nSELECTED: [MILK COFFEE]\nPRICE: AED 2" << endl;
                        cout << "\nQUANTITY: ";
                    }

                    total = quantity(qty, opt);
                    cout << "\nTOTAL: AED " << total << endl;
                    cout << "PAY AMOUNT: AED ";

                    while (!(cin >> pay)){
                        system("CLS");
                        cin.clear();
                        cin.ignore(123,'\n');
                        cout << "\nSELECTED: [MILK COFFEE]\nPRICE: AED 2" << endl;
                        cout << "\nQUANTITY: ";
                        cout << "\nTOTAL: AED " << total << endl;
                        cout << "\nERROR: INVALID INPUT\nPLEASE ENTER AN INTEGER " << endl;
                        cout << "\nPAY AMOUNT: AED "; 
                    }

                    if (pay < total){
                        cout << "\nPAY AMOUNT IS INSUFFICIENT. PURCHASE CANCELLED." << endl;
                    }

                    cout << "\nCHANGE: AED " << purchase(pay, total) << endl;
                    cout << "WOULD YOU LIKE TO ORDER AGAIN? Y/N : ";

                    while (!(cin >> yn) || !(tolower(yn) == 'y') && !(tolower(yn) == 'n')){
                        system("CLS");
                        cout << "ERROR: INVALID INPUT\nPLEASE SELECT EITHER Y OR N ONLY" << endl;
                        cin.clear();
                        cin.ignore(123, '\n');
                        cout << "\nWOULD YOU LIKE TO ORDER AGAIN? Y/N : ";
                    }

                    break;
                case 'c': 

                    if (sgr == 'y'){
                    cout << "\nSELECTED: [BLACK COFFEE W/ SUGAR]\nPRICE: AED 1" << endl;
                    }

                    else if (sgr == 'n'){
                        cout << "\nSELECTED: [BLACK COFFEE]\nPRICE: AED 1" << endl;
                    }

                    cout << "\nQUANTITY: ";

                    while (!(cin >> qty)){
                        system("CLS");
                        menu();
                        cout << "\nERROR: INVALID INPUT\nPLEASE ENTER THE AMOUNT OF THE SELECTION YOU WANT (MUST BE AN INTEGER AND > 0)" << endl;
                        cin.clear();
                        cin.ignore(123,'\n');
                        cout << "\nSELECTED: [BLACK COFFEE]\nPRICE: AED 1" << endl;
                        cout << "\nQUANTITY: ";
                    }

                    total = quantity(qty, opt);
                    cout << "\nTOTAL: AED " << total << endl;
                    cout << "PAY AMOUNT: AED ";

                    while (!(cin >> pay) || qty <= 0){
                        system("CLS");
                        cin.clear();
                        cin.ignore(123,'\n');
                        cout << "\nSELECTED: [BLACK COFFEE]\nPRICE: AED 1" << endl;
                        cout << "\nQUANTITY: ";
                        cout << "\nTOTAL: AED " << total << endl;
                        cout << "\nERROR: INVALID INPUT\nPLEASE ENTER AN INTEGER " << endl;
                        cout << "\nPAY AMOUNT: AED "; 
                    }

                    if (pay < total){
                        cout << "\nPAY AMOUNT IS INSUFFICIENT. PURCHASE CANCELLED." << endl;
                    }

                    cout << "\nCHANGE: AED " << purchase(pay, total) << endl;
                    cout << "WOULD YOU LIKE TO ORDER AGAIN? Y/N : ";

                    while (!(cin >> yn) || !(tolower(yn) == 'y') && !(tolower(yn) == 'n')){
                        system("CLS");
                        cout << "ERROR: INVALID INPUT\nPLEASE SELECT EITHER Y OR N ONLY" << endl;
                        cin.clear();
                        cin.ignore(123, '\n');
                        cout << "\nWOULD YOU LIKE TO ORDER AGAIN? Y/N : ";
                    }

                    break; 
            }
        }

        else if (tolower(choice) == 'b'){
            system("CLS");
            menu();
            cout << "\nSELECT A [TEA] TYPE FROM THE MENU ABOVE (D - F): ";

            while (!(cin >> opt) || !(tolower(opt) ==  'd') && !(tolower(opt) == 'e') && !(tolower(opt) == 'f')){
                system("CLS");
                menu();
                cout << "ERROR: INVALID INPUT\nPLEASE SELECT FROM OPTIONS D TO F ONLY" << endl;
                cin.clear();
                cin.ignore(123,'\n');
                cout << "\nSELECT A [COFFEE] TYPE FROM THE MENU ABOVE (D-F) : "; 
            }

            switch (tolower(opt)){
                case 'd': 

                    if (sgr == 'y'){
                    cout << "\nSELECTED: [ICED TEA W/ SUGAR]\nPRICE: AED 3" << endl;
                    }

                    else if (sgr == 'n'){
                        cout << "\nSELECTED: [ICED TEA]\nPRICE: AED 3" << endl;
                    }

                    cout << "\nQUANTITY: ";

                    while (!(cin >> qty) || qty <= 0){
                        system("CLS");
                        menu();
                        cout << "\nERROR: INVALID INPUT\nPLEASE ENTER THE AMOUNT OF THE SELECTION YOU WANT (MUST BE AN INTEGER AND > 0)" << endl;
                        cin.clear();
                        cin.ignore(123,'\n');
                        cout << "\nSELECTED: [ICED TEA]\nPRICE: AED 3" << endl;
                        cout << "\nQUANTITY: ";
                    }

                    total = quantity(qty, opt);
                    cout << "\nTOTAL: AED " << total << endl;
                    cout << "PAY AMOUNT: AED ";

                    while (!(cin >> pay)){
                        system("CLS");
                        cin.clear();
                        cin.ignore(123,'\n');
                        cout << "\nSELECTED: [ICED TEA]\nPRICE: AED 3" << endl;
                        cout << "\nQUANTITY: ";
                        cout << "\nTOTAL: AED " << total << endl;
                        cout << "\nERROR: INVALID INPUT\nPLEASE ENTER AN INTEGER " << endl;
                        cout << "\nPAY AMOUNT: AED "; 
                    }

                    if (pay < total){
                        cout << "\nPAY AMOUNT IS INSUFFICIENT. PURCHASE CANCELLED." << endl;
                    }

                    cout << "\nCHANGE: AED " << purchase(pay, total) << endl;
                    cout << "WOULD YOU LIKE TO ORDER AGAIN? Y/N : ";

                    while (!(cin >> yn) || !(tolower(yn) == 'y') && !(tolower(yn) == 'n')){
                        system("CLS");
                        cout << "ERROR: INVALID INPUT\nPLEASE SELECT EITHER Y OR N ONLY" << endl;
                        cin.clear();
                        cin.ignore(123, '\n');
                        cout << "\nWOULD YOU LIKE TO ORDER AGAIN? Y/N : ";
                    }

                    break;
                case 'e':

                    if (sgr == 'y'){
                    cout << "\nSELECTED: [MILK TEA W/ SUGAR]\nPRICE: AED 2" << endl;
                    }

                    else if (sgr == 'n'){
                        cout << "\nSELECTED: [MILK TEA]\nPRICE: AED 2" << endl;
                    }
                    cout << "\nQUANTITY: ";

                    while (!(cin >> qty) || qty <= 0){
                        system("CLS");
                        menu();
                        cout << "\nERROR: INVALID INPUT\nPLEASE ENTER THE AMOUNT OF THE SELECTION YOU WANT (MUST BE AN INTEGER AND > 0)" << endl;
                        cin.clear();
                        cin.ignore(123,'\n');
                        cout << "\nSELECTED: [MILK TEA ]\nPRICE: AED 2" << endl;
                        cout << "\nQUANTITY: ";
                    }

                    total = quantity(qty, opt);
                    cout << "\nTOTAL: AED " << total << endl;
                    cout << "PAY AMOUNT: AED ";

                    while (!(cin >> pay)){
                        system("CLS");
                        cin.clear();
                        cin.ignore(123,'\n');
                        cout << "\nSELECTED: [MILK TEA]\nPRICE: AED 2" << endl;
                        cout << "\nQUANTITY: ";
                        cout << "\nTOTAL: AED " << total << endl;
                        cout << "\nERROR: INVALID INPUT\nPLEASE ENTER AN INTEGER " << endl;
                        cout << "\nPAY AMOUNT: AED "; 
                    }

                    if (pay < total){
                        cout << "\nPAY AMOUNT IS INSUFFICIENT. PURCHASE CANCELLED." << endl;
                    }

                    cout << "\nCHANGE: AED " << purchase(pay, total) << endl;
                    cout << "WOULD YOU LIKE TO ORDER AGAIN? Y/N : ";

                    while (!(cin >> yn) || !(tolower(yn) == 'y') && !(tolower(yn) == 'n')){
                        system("CLS");
                        cout << "ERROR: INVALID INPUT\nPLEASE SELECT EITHER Y OR N ONLY" << endl;
                        cin.clear();
                        cin.ignore(123, '\n');
                        cout << "\nWOULD YOU LIKE TO ORDER AGAIN? Y/N : ";
                    }

                    break;
                case 'f': 

                    if (sgr == 'y'){
                    cout << "\nSELECTED: [BLACK TEA W/ SUGAR]\nPRICE: AED 1" << endl;
                    }

                    else if (sgr == 'n'){
                        cout << "\nSELECTED: [BLACK TEA]\nPRICE: AED 1" << endl;
                    }

                    cout << "\nQUANTITY: ";

                    while (!(cin >> qty) || qty <= 0){
                        system("CLS");
                        menu();
                        cout << "\nERROR: INVALID INPUT\nPLEASE ENTER THE AMOUNT OF THE SELECTION YOU WANT (MUST BE AN INTEGER AND > 0)" << endl;
                        cin.clear();
                        cin.ignore(123,'\n');
                        cout << "\nSELECTED: [BLACK TEA]\nPRICE: AED 1" << endl;
                        cout << "\nQUANTITY: ";
                    }

                    total = quantity(qty, opt);
                    cout << "\nTOTAL: AED " << total << endl;
                    cout << "PAY AMOUNT: AED ";
                    
                    while (!(cin >> pay)){
                        system("CLS");
                        cin.clear();
                        cin.ignore(123,'\n');
                        cout << "\nSELECTED: [BLACK TEA]\nPRICE: AED 1" << endl;
                        cout << "\nQUANTITY: ";
                        cout << "\nTOTAL: AED " << total << endl;
                        cout << "\nERROR: INVALID INPUT\nPLEASE ENTER AN INTEGER " << endl;
                        cout << "\nPAY AMOUNT: AED "; 
                    }

                    if (pay < total){
                        cout << "\nPAY AMOUNT IS INSUFFICIENT. PURCHASE CANCELLED." << endl;
                    }

                    cout << "\nCHANGE: AED " << purchase(pay, total) << endl;
                    cout << "WOULD YOU LIKE TO ORDER AGAIN? Y/N : ";
                    
                    while (!(cin >> yn) || !(tolower(yn) == 'y') && !(tolower(yn) == 'n')){
                        system("CLS");
                        cout << "ERROR: INVALID INPUT\nPLEASE SELECT EITHER Y OR N ONLY" << endl;
                        cin.clear();
                        cin.ignore(123, '\n');
                        cout << "\nWOULD YOU LIKE TO ORDER AGAIN? Y/N : ";
                    }
                    break;
            }
        }

    } while(tolower(yn) ==  'y');

    cout << "\nTHANK YOU FOR YOUR PURCHASE! DO COME AGAIN!" << endl;
    
}
void menu(){
    string menu[4][4] = {
        {"\n     COFFEE        ", "PRICE(IN AED)           ", "TEA             ", "PRICE(IN AED)\n"},
        {"A. ICED COFFEE         ", "3               ", "D. ICED TEA              ", "3"},
        {"B. MILK COFFEE         ", "2               ", "E. MILK TEA              ", "2"},
        {"C. BLACK COFFEE        ", "1               ", "F. BLACK TEA             ", "1\n"}
    };
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cout << menu[i][j];
        }
        cout << endl;
    }
}

int quantity(int userQty, char drinkType){

    int total;

    if (drinkType == 'a' || drinkType == 'd') {
        total = 3 * userQty;
    }
    else if (drinkType == 'b' || drinkType == 'e') {
        total = 2 * userQty;
    }
    else if (drinkType == 'c' || drinkType == 'f') {
        total = 1 * userQty;
    }

    return total;
}

double purchase(double userPay, int grandTotal){

    double chng;

    if (userPay >= grandTotal){
        chng = userPay - grandTotal;
    }

    return chng;
}

