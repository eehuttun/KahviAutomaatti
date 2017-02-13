#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>

class Product
{
    private:
        string name;
        double price;
    public:
        Product(string name_par, double price_par);
        virtual ~Product();
        void setName(string new_name);
        void setPrice(double new_price);
        string getName() const;
        double getPrice() const;
};

#endif // PRODUCT_H
