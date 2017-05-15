

代码说明 
 AbstractFactory 模式的实现代码很简单，在测试程序中可以看到，当我们要创建一组对
象（ProductA1，ProductA2）的时候我们只用维护一个创建对象（ConcreteFactory1），大大
简化了维护的成本和工作。 

讨论 
 AbstractFactory 模式和 Factory 模式的区别是初学（使用）设计模式时候的一个容易引
起困惑的地方。实际上，AbstractFactory 模式是为创建一组（有多类）相关或依赖的对象提
供创建接口，而 Factory 模式正如我在相应的文档中分析的是为一类对象提供创建接口或延
迟对象的创建到子类中实现。并且可以看到，AbstractFactory 模式通常都是使用 Factory 模
式实现（ConcreteFactory1）。 

使用办法
   用vs打开sln文件，编译，生成，运行即可。