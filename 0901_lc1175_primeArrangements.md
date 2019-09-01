判断是否是prime number: 
```
bool prime(int n) {
        if (n < 2)
            return false;

        // 注意这里条件是 i * i <= n; 而不是 i * i < n; 是可以等于的; 
        // 可以等于，所以从n=4开始进入for循环;
        // 如果不能取等于, 2,3,4都是直接return true了, 4就判断❌了
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0)
                return false;

        return true;
    }
```

1175. Prime Arrangements 

这道题, 实际上跟sieve并没有关系; 
质数只能出现在质数index上面，合数只能出现在合数index上面，这样实际上就把整个集合分成了两部分;
这样，质数算自己的permunation, 合数也是，相乘得到最终结果;

#### 所以说实际上看清楚prime number only in prime index, 写起来就很简单了 
