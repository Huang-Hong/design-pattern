
//缺点:
//每次新增一个类时,都需要改变工厂函数,破坏了封装性；（如果生产厂家需要新增一个产品,那么工厂函数Factory就需要跟着改变,所以上面的工厂模式违背了开放封闭原则;）

//补：开放封闭原则：软件实体（类、模块、函数）可以扩展，但是不可修改

class ProductEasy
{
public:
    virtual void show() = 0;
};

class ProductEasyA : public ProductEasy
{
public:
    void show();
};

class ProductEasyB : public ProductEasy
{
public:
    void show();
};

class FactoryEasy
{
public:
    ProductEasy* create(int i);
};

