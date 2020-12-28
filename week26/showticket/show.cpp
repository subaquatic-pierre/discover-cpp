#include <iostream>
#include "showticket.h"
using namespace std;

int main()
{
    ShowTicket ticket1("AA", "101");
    ShowTicket ticket2("AA", "102");

    if (!ticket1.is_sold())
    {
        ticket1.sell_seat();
    }

    cout << ticket1.print_ticket() << endl;
    cout << ticket2.print_ticket() << endl;

    return 0;
}
