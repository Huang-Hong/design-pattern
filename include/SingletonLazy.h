
//懒汉模式
//线程不安全
class SingletonLazy
{
public:
    static SingletonLazy* getInstance()
    {
        if(instance == nullptr)
        {
            instance = new SingletonLazy();
        }
        return instance;
    }
private:
    SingletonLazy()
    {
        
    }
    static SingletonLazy* instance;
};

 
SingletonLazy* SingletonLazy::instance = nullptr; //static 成员变量必须在类声明的外部初始化, type class::name = value;
