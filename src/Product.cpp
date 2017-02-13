#include "Product.h"

Product::Product(string name_par, double price_par)
{
    name = name_par;
    price = price_par;
}
void Product::setName(string new_name)
{
    name = new_name;
}
void Product::setPrice(double new_price)
{
    price = new_price;
}
string Product::getName() const
{
    return name;
}
double Product::getPrice() const
{
    return price;
}
