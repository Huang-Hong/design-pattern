
//饿汉模式
//饿汉模式本来就是线程安全的
class SingletonHungry
{
public:
    static SingletonHungry* getInstance()
    {
        return instance;
    }
private:
    SingletonHungry()
    {

    }
    static SingletonHungry* instance;
};

 
SingletonHungry* SingletonHungry::instance = new SingletonHungry(); //单例类定义的时候就进行实例化
 