#include <iostream>
// #include "../sportticket/sportticket.h"
#include "ticketsales.h"
// #include "sportticket.h"
using namespace std;

int main()
{
    TicketSales ts;

    ShowTicket myticket1 = ShowTicket("AA", "101");
    SportTicket myticket2 = SportTicket("AA", "102");

    myticket1.sell_seat();
    myticket2.sell_seat();
    myticket2.sell_beer();

    cout << myticket1.print_ticket() << endl;
    cout << myticket2.print_ticket() << endl;

    cout << ts.print_ticket(&myticket1) << endl;
    cout << ts.print_ticket(&myticket2) << endl;

    return 0;
}