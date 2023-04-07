#include <iostream>
#include "FactoryEasy.h"

using namespace std;


ProductEasy* FactoryEasy::create(int i)
{
    switch(i)
    {
        case 1:                      //生产产品A
            return new ProductEasyA();
            break;

        case 2:                       //生产产品B
            return new ProductEasyB();
            break;
        
        default:
            break;
    }
    return new ProductEasyA();
}

void ProductEasyA::show()
{
    cout << "show ProductEasyA" << endl;
}

void ProductEasyB::show()
{
    cout << "show ProductEasyB" << endl;
}