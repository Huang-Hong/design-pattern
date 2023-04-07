#include <iostream>
#include "SingletonLazy.h"
#include "SingletonHungry.h"
#include "FactoryEasy.h"
#include "Factory.h"

using namespace std;
 
 
int main()
{
    // singleton* instance1 = new singleton();//构造函数为private
    /*lazy*/
/************************************************************************************/    
    SingletonLazy* instance1 = SingletonLazy::getInstance();
    SingletonLazy* instance2 = SingletonLazy::getInstance();
    if (instance1 == instance2)
    {
        cout << "SingletonLazy same" << endl;
    }
/************************************************************************************/
    SingletonHungry* instance3 = SingletonHungry::getInstance();
    SingletonHungry* instance4 = SingletonHungry::getInstance();
    if (instance3 == instance4)
    {
        cout << "SingletonHungry same" << endl;
    }
/*****************************************************************************/
    FactoryEasy *factotyEasy = new FactoryEasy();   //实例化--工厂对象
    factotyEasy->create(1)->show();          //指定生产A产品
    factotyEasy->create(2)->show();          //指定生产B产品
/*********************************************************************************/

    FactoryA* factoryA = new FactoryA();
    FactoryB* factoryB = new FactoryB();

    factoryA->create()->show();
    factoryB->create()->show();


    return 0;
}