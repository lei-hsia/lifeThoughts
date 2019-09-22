1201. Ugly Number III: 

```
A ∩ B: 表示A和B集合中的最小公倍数 lcm; 
lcm(a, b) = a * b / _gcd(a, b);
```
```
另外, n-th: index并没有那么大, 是可以用int表示的;
而这个series的数是远比index大的, 而且有a*b这种, 所以要用long long.
```

Q: 三个集合的交集操作得到的是```A ∪ B ∪ C```的数量, 是怎么把```card|A ∩ B ∩ C|```转化为```n-th``` number的? 
A: 因为这个series是单调递增的, 所以实际上在集合```A ∪ B ∪ C```中的元素的数量和对应的```n-th```number是一一对应的; 比如```a=2,b=3,c=4```要求的```n=8```, 那么这个数就是12; 反之,如果要求的数是12，那么这个数就是series中的第8个数.
