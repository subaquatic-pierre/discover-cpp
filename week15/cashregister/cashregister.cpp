#include <iostream>
using namespace std;

double calculateTax(double rate, double total);
double calculateMemberPrice(char isMember, double total);
double calculatePromo(double item1, double item2);

int main()
{
    double item1, item2, basePrice, afterPromoPrice, afterTax, afterMemberPrice, taxRate;
    char isMember;
    cout << "Enter price of the first item: ";
    cin >> item1;
    cout << "Enter price of the second item: ";
    cin >> item2;
    cout << "Does the customer have a club card? (Y/N): ";
    cin >> isMember;
    cout << "Enter tax rate, e.g. 5.5 for 5.5\% tax: ";
    cin >> taxRate;

    basePrice = item1 + item2;

    afterPromoPrice = calculatePromo(item1, item2);
    afterMemberPrice = calculateMemberPrice(isMember, afterPromoPrice);
    afterTax = calculateTax(taxRate, afterMemberPrice);

    printf("Base price %.2f\n", basePrice);
    printf("Price after discounts = %.2f\n", afterMemberPrice);
    printf("Total price = %.2f\n", afterTax);

    return 0;
}

double calculateTax(double rate, double total)
{
    double vat = total * (rate / 100);
    return total + vat;
}

double calculatePromo(double item1, double item2)
{
    if (item1 > item2)
    {
        item2 /= 2;
    }
    else
    {
        item1 /= 2;
    }

    return item1 + item2;
}

double calculateMemberPrice(char isMember, double total)
{
    double discount = 0.00;
    if (isMember == 'Y' || isMember == 'y')
    {
        discount = total * 0.10;
    }
    return total - discount;
}
