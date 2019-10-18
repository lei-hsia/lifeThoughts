#### Data life cycle: 

1. application: stream of data: to 2: 
2. transport: segments of data: to 3:
3. network:  packets of data

#### TCP byte stream:

"3-way handshake": "SYN, SYN/ACK, ACK"

1. Client: syncrhonized msg, "SYN" to the server
2. Server: syncrhonize && acknowledge, "SYN/ACK" to the client
3. Client: acknowledge this msg, "ACK"

IP说的就是3个point隔开的那个IP地址: IP: network layer address
端口说的是TCP的那个端口: TCP: transport layer address

|        | IP address           | TCP port  |
| ------------- |:-------------:| -----:|
| Client      | 171.67.76.157 | 23946 |
| Server      | 128.148.252.129      | 80 |

Client发送packets给server，client并不是和server直接连接在一起的，而是中间有另外的server；<br>

```
中间的server叫做router; router可以有很多个; 这个routers集群是通过**forwarding table**
相互连接的;这些forwarding table可以看作是case: ... default那种结构, match的标准类似regex
那种; 如果client发送过来的packets有非常specific的match，那就match那个; 如果没有, 那就match
到default的router;
```

e.g. 
```
Request web page from www.cs.brown.edu
Use wireshake to see TCP byte stream establishment and data exchange
Use traceroute to see route packets take through Internet
```
