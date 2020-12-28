#include <string>
#include "showticket.h"
using namespace std;

class ShowTickets
{
private:
    int indexOf(string row, string seat)
    {
        for (int i = 0; i < 10; i++)
        {
            if (this->tickets[i].getRowNum() == row && this->tickets[i].getSeatNum() == seat)
            {
                return i;
            }
        }
        return -1;
    }

    int getLastIndex()
    {
        int lastIndex = 0;
        for (int i = 0; i < 10; i++)
        {
            if (!this->tickets[i].is_valid())
            {
                return i;
            }
        }
        return -1;
    }

public:
    ShowTicket tickets[10];
    ShowTickets()
    {
        for (int i = 0; i < 10; i++)
        {
            tickets[i] = ShowTicket();
        }
    }

    bool is_sold(string row, string seat)
    {
        int index = this->indexOf(row, seat);
        ShowTicket ticket;

        if (index != -1)
        {
            ticket = this->tickets[index];
        }

        if (ticket.is_valid() && ticket.is_sold())
        {
            return true;
        }
        return false;
    }

    void sell_seat(string row, string seat)
    {
        int index = this->indexOf(row, seat);
        ShowTicket ticket;
        if (index != -1)
        {
            ticket = this->tickets[index];
        }
        else
        {
            ticket.setRowNum(row);
            ticket.setSeatNum(seat);
        }

        if (!ticket.is_sold())
        {
            ticket.sell_seat(row, seat);
            this->addTicket(ticket);
        }
        else
        {
            cout << "Ticket is already sold" << endl;
        }
    }

    string print_ticket(string row, string seat)
    {
        int index = this->indexOf(row, seat);
        ShowTicket ticket;

        if (index != -1)
        {
            ticket = this->tickets[index];
        }

        if (ticket.is_valid())
        {
            return ticket.print_ticket();
        }
        else
        {
            return ticket.print_ticket(row, seat);
        }
    }

    ShowTicket *getTicket(string row, string seat)
    {
        int index = this->indexOf(row, seat);
        return &this->tickets[index];
    }

    void addTicket(ShowTicket ticket)
    {
        int lastIndex = this->getLastIndex();
        if (lastIndex == -1)
        {
            cout << "There was an error adding your ticket, there is no more space for extra tickets" << endl;
        }
        else
        {
            this->tickets[lastIndex] = ticket;
        }
    }

    void removeTicket(string row, string seat)
    {
        int index = this->indexOf(row, seat);
        ShowTicket ticket;

        if (index != -1)
        {
            ticket = this->tickets[index];
        }

        if (ticket.is_valid())
        {
            this->tickets[index] = ShowTicket();
        }
        cout << "Unable to remove ticket, ticket is not found is ShowTickets" << endl;
    }
};