```at least K repeating characters```: 保证法不保证; 所以反过来找 ```freq < K```的, 这个char一定不在任何满足条件的substring中: 去掉这个char在前后两段substring中找longest substring; 其实这个就是divide & conquer的思路 

其实是一类题: ```at least```...

另外, 处理数组中的substring的类型的题: 
1. two pointers/sliding window;  
2. dp;  
3. divide & conquer
