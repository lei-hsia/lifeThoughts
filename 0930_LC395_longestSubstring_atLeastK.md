```at least K repeating characters```: 保证法不保证; 所以反过来找 ```freq < K```的, 这个char一定不在任何满足条件的substring中: 去掉这个char在前后两段substring中找longest substring; 其实这个就是divide & conquer的思路 
