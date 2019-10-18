1. IP service model:

| Property       | Behavior     |
| ------------- |:-------------:| 
| Datagram    | Individually routed packets. Hop-by-hop routing. | 
| Unreliable  | Packets might be dropped.       | 
| Best effort | ... but only if necessary.      | 
| Connectionless | No per-flow state. Packets might be mis-sequenced. |

2. Why is the IP serivice so simple?

- Simple, dumb, minimal: faster, more streamlined and lower cost to build and maintain.
- The end-to-end principle: when possible, implement features in the end hosts, not communicating channel;
- Allows a variety of reliable(or unrealiable) services to be built on top.
- Works over any link layer: IP makes very few assumptions about the link layer below.

3. The IP Service Model (details)

- tries to prevent packets looping forever.
- will fragment packets if they are too long
- uses a header checksum to reduce chances of delivering datagram to wrong destination.
- allows for new versions of IP
  a. currently IPv4 with 32 bit addresses
  b. and IPv6 with 128 bit addresses
- allows for new options to be added to header

[IPv4 datagram](https://www.youtube.com/watch?v=TwnsN6iLWy8&list=PLvFG2xYBrYAQCyz4Wx3NPoYJOFjvU7g2Z&index=4) 13:45
