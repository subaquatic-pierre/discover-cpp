#include <string>
using namespace std;

class ShowTicket
{
private:
    string seatNum;
    string rowNum;
    bool sold;

public:
    ShowTicket(string row, string seat) : rowNum(row), seatNum(seat), sold(false){};
    bool is_sold() const
    {
        return this->sold;
    }
    void sell_seat()
    {
        this->sold = true;
    }
    string print_ticket() const
    {
        if (this->sold == true)
        {
            return this->rowNum + " " + this->seatNum + " sold";
        }
        else
        {
            return this->rowNum + " " + this->seatNum + " available";
        }
    }
};