1. AOP: python装饰器, spring AOP;
2. 复习resume 项目;
3. math: traffic, Heston
4. LC

---

### 装饰器的原理

1. 闭包的内层函数wrapper返回外层函数的参数func的调用结果func()，外层函数返回内层函数wrapper; 
2. 调用的时候把需要修饰的函数作为参数传递给外层函数的形参func; 然后调用之后赋值给这个需要修饰的函数;

e.g. 
```
def use_logging(func):
    def wrapper(*args, **kwargs):
        logging.warn("%s is running" % func.__name__)
        return func(*args, **kwargs)
    return wrapper
    
def bar():
    print('i am bar')
    
bar = use_logging(bar)
bar()
```
##### 本质:被修饰的函数作为参数传递给外层函数, 这个func在闭包的内层函数中调用并return, 外层函数return内层函数

use_logging把真正执行业务方法的func(这里是bar)包裹在函数里面，看起来bar像是被use_logging修饰了。
这个例子中，函数进入和退出时，被称为一个横切面（aspect): AOP

面向切面编程: flask中提供service使用```@app.route("xxx")```提供```xxx```作为service;
