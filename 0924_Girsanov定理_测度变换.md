其实直到slide21: 一直都是在求D(t)S(t)的微分: d(D(t)S(t))和d(D(t)X(t)), 
其中X(t)是一个portfolio, X(t) = delta*dS(t) + (X(t)-delta*S(t))*R(t)dt;
martingale approach说白了就是某一项的微分不含drift, 只含有W(t)
或者W(t)-tilde, 此时就可以用鞅: 未来的期望等于现值这个

Girsanov定理:测度变换的应用: 因为S(t)或者X(t)都乘了D(t), 然后根据
theta(t)dt + W(t) = W(t)-tilde, 可以用Girsanov测度变换的等式
