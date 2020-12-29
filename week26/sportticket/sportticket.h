#include "../showtickets/showticket.h"
#include <iostream>
// #include "showticket.h"

class SportTicket : public ShowTicket
{
private:
    bool beerSold;

public:
    SportTicket() : ShowTicket("DEF", "DEF"){};
    SportTicket(string row, string seat) : ShowTicket(row, seat)
    {
        this->beerSold = false;
    }

    void sell_beer()
    {
        this->beerSold = true;
    }

    bool beer_sold()
    {
        return this->beerSold;
    }
    string print_ticket()
    {
        string row = ShowTicket::getRowNum();
        string seat = ShowTicket::getSeatNum();
        string seatSold = ShowTicket::is_sold() ? "sold" : "available";
        string beerSold = this->beer_sold() ? "beer" : "nobeer";
        // string message = "BEER: \nRow: " + row + "\nSeat: " + seat + "\nIs sold: " + seatSold + "\nBeer Sold: " + beerSold;
        string message = row + " " + seat + " " + seatSold + " " + beerSold;
        // cout << message << endl;
        return message;
    }
};