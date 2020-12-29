#include "../sportticket/sportticket.h"
#include <typeinfo>
// using namespace std;
// #include "../showticket/showticket.h"
// #include "sportticket.h"

class TicketSales : public ShowTicket
{
public:
    // TicketSales() : SportTicket(){};
    // TicketSales(string row, string seat) : SportTicket(row, seat){};

    string print_ticket(ShowTicket *myTicket)
    {
        return myTicket->print_ticket();
    };
};