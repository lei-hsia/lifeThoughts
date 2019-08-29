Talking with Javier just now at 3:10PM, 29th, Aug. 2019.

Conclusion:
### Nothing is new.

He works in Clearing Dept. People who work in Clearing dept. represent IB to do business with the Clearing House, meaning: when there're money on the one side and assets on the other side, clearing dept people would work with Clearing House to make these two things match and finish the deal.  

He mentioned that there're times when he has to WFH to finish something, e.g. when market in Hong Kong is opening and some clearing things need to be done, then he might have to WFH at 9:30PM, or 10-11PM. 

There's Compliance team at IB also mentioned. What does Compliance team do and with whom they work ? The answer would be: they have their own programmers in Compliance team, mainly in Python (it used to be Perl). The regulators set certain laws, and compliance team know these laws, work with programmers to make sure regulators' demands are met. A very good example would involve what I've been doing for the past two months till now, part of the CAT project. The epitome would be some other 4 interns who's really working on validations, e.g. MM et al. who works on the cross-validation project to make sure that each and every file is right in the format requested by regulators. 

I'm building a monitoring system to make sure that the billions of trading instruction sets are up-to-date, to track that they are indeed delivered as they come in our databases/datacenters in the order they come. And, if possible, to track all the pertinent information for these data. To do this, I use Apache Kafka. For monitoring and visualization purposes, I use Prometheus and Grafana.

#### In the end, this is very similar to Amazon's logistics tracking system, and IB is not very different from Amazon in terms of business model. Why do I say this ?

IB is a brokerage company, BUT IT DOESN'T TRADE ANYMORE. To be precise, it stopped to be a market-maker two years ago when it sold all its market-making business to Two Sigma. The organization for trading purpose is called Timber Hill --- no longer existed anymore. So in effect, IB doesn't trade using its own money anymore; instead, it provides a platform for customers to trade. Does this sound familar? Yes, it's like Alibaba, or Amazon. They don't sell stuff, they only provide a platform for people to buy and sell. The only difference is that, instead of buying and selling real goods like what people do on Alibaba or Amazon, people trade (buy and sell) financial products on IB's platform, TWS. All business expand with the core product, TWS. More technically, IB now gives access to people who want to trade.

And for this tracking system I'm building, it's requested by SEC's CAT, for their convenience to regulate trading companies, but also for companies' convenience to monitor activities happening on their own core products. This is quite similar to Amazon's tracking system. Essentially, these kind of companies are like an Amazon in financial industry.

#### Wait, but why would IB quit trading, if it's the core business it's been doing for so many years ? Why they sell this business to Two Sigma at 2017, that particular time ? 

Simple. Because IB can't make money, or lose money, when they trade. Why ? As I said before, IB has many different divisions, e.g. clearning, compliance, finance, internal audit, trade(no longer), quant, math pure dev etc. For this trading arm, a more commonly know name would be "market-making" business: IB's a market-maker. It provides liquidity, meaning it maintains a market for buyers and sellers. And these market-makers have to maintain the market no matter what. Essentially, market-maker have the obligations for maintain a market in exchange for some advantages in the market. They are also big institutional traders in the market. 

This is the case until around 2016, when GPU, quant and High-Frequency Trading became heated. HF, for High Frequency trading, also for Hedge Fund, because it's usually Hedge Fund that does High-Frequency trading. The epitome would be Two Sigma. They also trade, and they don't have any market-making obligations. 

Then there's the problem. They can trade, with extreme efficiency, and don't have obligations to be market-makers. As is known, when everyone's selling, no one is buying, there's no market for it. And since no one is buying, then no one would be "selling" (because no one is buying). In this case, market-maker would have to buy it to make a market. But they will lose money. They make money when the bid-offer spread can cover the cost. With HF trader, who take the profit most of the time by going in the right direction and pull out, the market-making business would largely be an "voluntary" offset to lose money. So market-making is no longer a profitable business. Again, nothing is new: it's like selling real goods: economy-of-scale plays effect here. Only those who can still trade with huge quantities, without obligations to go in a direction to make the market even they know they're going to lose money by doing this, can still make profits here, which means market-making would not be profitable when companies like Two Sigma can freely play in the market. Not to mention even the bid-offer margin was reduced by a large amount because their high-frequency bid-offer activities. When who can still afford to play? Only High-Frequency trader themselves. That's why this business is sold.

In short, the business was sold because profits were compressed by High-Frequency traders like Two Sigma, while at the same time previous market-maker like IB had to lose money when some trading scenarios happen while Two Sigma can just pull out. 

For this event (IB sold US market options' trading to Two Sigma), go to this [link](https://financefeeds.com/two-sigma-securities-completes-acquisition-interactive-brokers-us-options-market-making-business/)

In this link, it's seen that Thomas Peterffy says: "providing liquidity to sophisticated, professional sythesizers of short-term fundamental, technical and big data is not a profitable activity". Very intricated sentence. But it just means, providing liquidity by being the market-maker ourselves, even sometimes losing money, is not profitable because these high-frequency traders who masters an integrated knowledge base of fundamental, technical aspects and big data dries up liquidity too fucking fast. It's no longer worth doing it. 

Another sentence by him: "Today retail order-flow is purchased by large order internalizers and joining them would represent a conflict we do not wish to have". This means he already knew that most trading instructions are already from internalizers, meaning other institutional trading units, who are not so easily to deal with than normal people. From two aspects, trading using our own money is no longer profitable. Thus, quitted. Now it's a platform and just give customers access.

Recap: Nothing is new. IB's a platform. IB doesn't trade itself. Trading/Market-making business was sold to TSS from the menace of HF trading activities. 

"The US options market-making business of Interactive Brokers used to be conducted by its Timber Hill affiliate. Upon completing the acquisition, TSS assumes about 1,300 exchange specialist assignments previously operated by Timber Hill. TSS intends to offer its broker-dealer clients access to listed options across all US exchanges, on top of its existing offering of more than 8,000 US exchange-listed equities in 2018.

The team joining TSS from Timber Hill will be located in Chicago and Connecticut, with additional trading personnel working alongside and helping to augment the TSS team in New York City."
