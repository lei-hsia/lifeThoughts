Remove All Adjacent Duplicates In String

1. ```s.substr(0, i)```: substr返回的是一个之前的string的copy;
2. for循环中modify了原来的string, 并没有关系, 因为是local variable;

---
1209. Remove All Adjacent Duplicates in String II

```
vector<int> count(n);
...
count[i] = i > 0 && s[i-1] == s[j] ? count[i-1]+1 : 1;
```

```count[i] = i > 0 && s[i-1] == s[j] ? count[i-1]+1 : 1;```是因为, 还是要在for循环中一位一位判断,然后for循环中是有```++i```的, 
所以不能在for循环中写一个```while```循环, 同时，因为每往右边移动一位都要判断，然后记录连着的有多少个, 所以只能用```count[i] = count[i-1]+1```
的方式记录; 否则这个“连着”表现不出来.
