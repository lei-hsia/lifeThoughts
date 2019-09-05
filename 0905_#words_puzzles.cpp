这个是对的: 

for (const string& p : puzzles) {
            int total = 0;
            // int mask  = 1 << (p[0] - 'a');
            int l = p.size() - 1;
            for (int i = 0; i < (1 << l); ++i) {
                int mask  = 1 << (p[0] - 'a');
                for (int j =0; j < l; ++j) {
                    if (i & (1 << j)) mask |= 1 << (p[j+1] - 'a');
                }
                auto it = freq.find(mask);
                if (it != freq.end()) total += it->second;
            }
            res.push_back(total);
        }

这个是错的; 
for (const string& p : puzzles) {
            int total = 0;
            int mask  = 1 << (p[0] - 'a');
            int l = p.size() - 1;
            for (int i = 0; i < (1 << l); ++i) {
                // int mask  = 1 << (p[0] - 'a');
                for (int j =0; j < l; ++j) {
                    if (i & (1 << j)) mask |= 1 << (p[j+1] - 'a');
                }
                auto it = freq.find(mask);
                if (it != freq.end()) total += it->second;
            }
            res.push_back(total);
        }
        
mask应该在内层的for循环内部, 因为两层循环的意思实际上是, 外层是64种不同的情况, 内层是选中的6位
是哪一位, 6位都进行mask结束之后，64种情况中的这一种情况就结束了, mask得到了, 然后看words中映射
到相同的mask中的words有多少个; 

然后, 进入64种mask中下一种情况, 此时的mask应该还原为只包括了第一位的char的mask; 
可以看出, ✅的写法中mask还原了，❌的情况中mask没有还原
