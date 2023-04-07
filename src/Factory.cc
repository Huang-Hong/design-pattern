#include <iostream>
#include "Factory.h"

using namespace std;


void ProductA::show()
{
    cout << "show ProductA" << endl;
}

void ProductB::show()
{
    cout << "show ProductB" << endl;
}

Product* FactoryA::create()
{
    return new ProductA();
}

Product* FactoryB::create()
{
    return new ProductB();
}
