#include <string>
using namespace std;

class ShowTicket
{
private:
    string seatNum;
    string rowNum;
    bool sold;

public:
    ShowTicket() : seatNum(""), rowNum(""), sold(false){};

    ShowTicket(string row, string seat) : rowNum(row), seatNum(seat), sold(false){};

    void setRowNum(string row)
    {
        this->rowNum = row;
    }
    void setSeatNum(string seat)
    {
        this->seatNum = seat;
    }

    void sell_seat()
    {
        this->sold = true;
    }
    void sell_seat(string row, string seat)
    {
        this->rowNum = row;
        this->seatNum = seat;
        this->sold = true;
    }

    bool is_sold() const
    {
        return this->sold;
    }

    bool is_valid() const
    {
        if (this->rowNum == "" || this->seatNum == "")
        {
            return false;
        }
        else
        {
            return true;
        }
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
    string print_ticket(string row, string seat) const
    {
        return row + " " + seat + " available";
    }

    string getRowNum() const
    {
        return this->rowNum;
    }
    string getSeatNum() const
    {
        return this->seatNum;
    }
};