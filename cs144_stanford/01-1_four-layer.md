Summary of 4 Layer model: 

1. ```Application```: Bi-directional reliable byte stream between two applications, using application-specific
semantics (e.g. http, bit-torrent);
2. ```Transport```: Guarantees correct, in-order delivery of data end-to-end. Controls congestion.
3. ```Network```: Delivers datagrams end-to-end. Best-effort delivery - no guarantees. Must use
the Internet Protocol (IP).
4. ```Link```: Delivers data over a single link between and end host and router, or between routers

Achtung: 
1. ```IP is the 'thin waist'```: for the ```network``` layer, ```IP``` must be used;
2. By contrast, ```Link```: ```Ethernet, WIFI, DSL, 3G, ...```
3. ```Transport```: ```TCP, UDP, RTP```;
4. ```Application```: ```http, smtp, ssh, ftp, ...```

Achtung: 

"The 7-layer OSI model":
1. Application
2. Presentation
3. Session
4. Transport
5. Network: only this one corresponds to one layer in 4-layer model, others: all correspond to two layers
6. Link
7. Physical

E.g. 
1. Link: Ethernet
2. Network: IP
3. Transport: TCP
4. Application: http, ASCII
