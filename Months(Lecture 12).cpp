#include <iostream>

using namespace std;

int main()
{
    string months[12]{
        "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    
    for (auto months: months) {
        cout << months << endl;
    }
}
