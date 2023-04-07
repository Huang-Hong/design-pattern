//缺点:
//每增加一个新的产品,就需要增加一个新的工厂

class Product
{
public:
    virtual void show() = 0;  
};

class ProductA : public Product
{
public:
    void show();
};

class ProductB : public Product
{
public:
    void show();
};

class Factory          //工厂
{
public:
    virtual Product* create() = 0;
};

class FactoryA : public Factory
{
public:
    Product* create();
};

class FactoryB : public Factory
{
public:
    Product* create();
};
