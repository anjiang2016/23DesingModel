代码说明：
singleton模式中，singleton不可以被实例化，因此我们将其构造函数直接声明为 protected 或者private.
讨论：
    Singleton模式经常和Factory(AbstractFactory)模式在一起使用，因为系统中工厂对象一般来说只有一个，笔者在开发 Visual CMCS得时候，语义分析过程中都用到工场模式来创建对象，对象实在太多了，这里的
	工厂对象实现就是同一个 Singleton模式的实例，因为系统中，我们只需要一个工厂。