#include <iostream>
#include "showtickets.h"
using namespace std;

int main()
{
    ShowTickets myTicket;

    if (!myTicket.is_sold("AA", "101"))
    {
        myTicket.sell_seat("AA", "101");
    }

    // ShowTicket secondTicket = ShowTicket("AB", "202");
    // myTicket.addTicket(secondTicket);

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << myTicket.tickets[i].print_ticket() << endl;
    // }

    // secondTicket.setRowNum("ZZ");
    // cout << "Second Ticket: " << secondTicket.print_ticket() << endl;
    // cout << "Second Ticket in group: " << myTicket.tickets[1].print_ticket() << endl;

    // ShowTicket *newSecondTicket = myTicket.getTicket("AB", "202");
    // newSecondTicket->setRowNum("ZZ");

    // cout << "NEW STYLE !! Second Ticket in group: " << myTicket.tickets[1].print_ticket() << endl;

    cout << myTicket.print_ticket("AA", "101") << endl;
    cout << myTicket.print_ticket("AA", "102") << endl;

    return 0;
}
