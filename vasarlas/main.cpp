#include <iostream>
#include "customer.cpp"
#include "store.cpp"

using namespace std;

int main()
{
    Customer c("customer1.txt");
    Store s("foods.txt", "technical.txt");
    c.purchase(s);
    return 0;
}
