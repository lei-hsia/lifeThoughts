1. 用 Graph: Quick-Find; 直接比较node的id判断find是不是connected, 但是union中有for循环
2. 用 Tree:  Quick-Union; union没有for循环, 但是find/connect需要调用root函数, root函数找到当前node的最顶端的root;

坏处: 
1. Quick Find: too slow: 
  a. initialize: N
  b. union: N
  c. find: 1
  Union is too expensive. It takes N^2 array access to process a sequence of N union commands on N objects
  
2. Quick Union: also too slow:
  a. initialize: N
  b. union: N (including finding roots)
  c. find: N
  
Quick Find defects: 
  1. Union too expensive;
  2. Trees are flat, but too expensive to keep them flat
 
Quick Union defects:
  1. Trees can get tall;
  2. Find too expensive.
  
---
Union-find data type (API):
```
public class UF
  UF(int N)
  void union(int p, int q)
  boolean connected(int p, int q)
  int find(int p)
  int count()
```

Dynamic-connectivity client
```
public static void main(String[] args) {
  int N = StdIn.readInt();
  UF uf = new UF(N);
  while (!StdIn.isEmpty()) {
    int p = StdIn.readInt();
    int q = StdIn.readInt();
    if (!uf.connected(p, q)) {
      uf.union(p, q);
      StdOut.println(p + " " + q);
    }
  }
}
```

Quick-find (eager approach)
```
public class QuickFindUF {
  private int[] id;
  
  public QuickFindUF(int N) {
    id = new int[N];
    for (int i=0; i<N; ++i) id[i] = i;
  }
  
  public boolean connected(int p, int q) {
    return id[p] == return id[q];
  }
  
  public void union(int p, int q) {
    int pid = id[p];
    int qid = id[q];
    for (int i=0; i<N; ++i) {
      if (id[i] == pid) id[i] = qid;
  }
}
```

Quick-union (lazy approach)
```
public class QuickUnionUF {
  private int[] id;
  
  public QuickUnionUF(int N) {
    id = new int[N];
    for (int i=0; i<N; ++i) id[i] = i;
  }
  
  // 会一直向上移动到当前node的parent...直到到这个branch的root, root的ID就是其node.val
  private int root(int i) {
    while (i != id[i]) i = id[i];
    return i;
  }
  
  public boolean connected(int p, int q) {
    return root(p) == root(q);
  }
  
  public void union(int p, int q) {
    int i = root(p);
    int j = root(q);
    id[i] = j;
  }
}
```
