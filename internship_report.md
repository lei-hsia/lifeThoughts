# <center> Internship report</center>
### <center> on Software Dev. Team </center>

##### <center> ©️Lei Xia </center> <br> 

<center> Course: FRE-GY 7021 BZ1 </center> <br> 

<center> report prepared For </center>
<center> Instructor: </center>
<center> Barry Blecherman </center> 
<center> Agnes Tourin </center> <br> 


<center> Financial Engineering</center>
<center> NYU </center> <br> 

<center> prepared By: </center>
<center> Lei Xia</center>
<center> ID: N12388585</center> <br>
<br>

<center> Summer 2019</center>

<br>
<br>

In the summer of 2019, I did an internship at the Software Dev. team in Greenwich, CT office of Interative Brokers(IB) LLC. 

This internship included training by top engineers about the inner workings of IB as a company, how to use their tools for the daily developer workflow, a primitive web service project as well as a real-world project. The real-world project concerned the project Consolidated Audit Trail(CAT), which track orders throughout their life cycle and identify the broker-dealers handling them, thus allowing regulators to more efficiently track activity in Eligible Securities throughout US markets. 

More information about [CAT](https://www.catnmsplan.com/)

<br> 
In addition to daily work that focus more on the tech size of fintech, we also have regular "Snack && Learn" sessions each Friday afternoon, topics of which range a lot from the history of IB to all sorts of issues and insights in financial markets. 

<br> 
Throughout the internship, it is safety concluded that I have gained a basic understanding of how tech and finance are organically integrated, how things are built in tech-heavy brokerage industry (to which is a trend traditional brokerage industry is shifting) and how assorted apps are created in real world.

This  report contains an overall impression of working environment at IB in comparison to my university, a description of the full internship, the technical aspects of the task that was assigned as well as an insight in the way IB do software engineering on a large scale.

<br> 

### Working at IB

During the internship I experienced a different working environment in comparison to the environment at my current university, [NYU](https://www.nyu.edu/), and my two previous exchange schools, [St Edmund Hall, Oxford University](https://www.seh.ox.ac.uk/) and [Columbia University](https://www.columbia.edu/). There are stark differences among these schools, and difference derived from IB is another kind of divergence, though some similarities also exist. 

<br>

From my perspective, NYU and Columbia are more easily categorized into the same genre while IB Greenwich office has more similarities to Oxford, though school lives in general are quite distinct from corporate life. And yet the former two are school lives in a big metropolis while the latter two are more like lives in smaller British towns. This reminds me of when [Robert Shiller](https://som.yale.edu/faculty/robert-shiller) at Yale once said "look how British we are" in his Financial Market class. 

"Greenwich is very Oxford": the first impression I had when I first went there. 

<br>

General impressions aside, there is a stark difference of prioritizations and assignments of tasks between industry and university life. In the 12 weeks, we were given the task to first implement a small prototype-like but highly standardized MVC service. After the first project, all interns were involved in different parts of the CAT project in whichever part we were most interested at the beginning of the project. 

There was no pre-specified set of sub-tasks required to address the second problem so it's more like an exploration on the front edge. Obviously, I had daily meetings with my major supervisor, ELP, who also went to Spain on vacation for two weeks during the internship, and other second supervisors when ELP was away, as well as other team members with whom I could ask for help, discuss viable approaches and problems. This ad-hoc approach allowed me to work on problems and discuss blocking issues not too long after I encountered them, usually after one hour stuck on the same issue. This is quite an efficient way of doing things because it's highly likely that I can find a way out when the problem is still "fresh", as compared with the common cases in school when problem-solving requires a much longer cycle as a result of the difficulties in finding an appropriate time and opportunity to ask professors or TAs for solutions. Corporate working  environment like this makes it possible for people to have a higher efficiency and truly benefit from teamwork. 

<br>
The first day when we had the internship orientation consisted of speech given by HR, ELP, the head of our division and  other few people in One Pickwick Plaza. We went to find our desks at the end of the day and set up working environment on our computers/workstations on second day. 

Also, I realized how much people like to use Jira and Confluence these days, though I am still consevative about if they are indeed that good. After all the necessary settings and tools are setup, we were given the first project. 

<br>

The first project was like a relatively large piece of Java project assignment when I was taking [CS1004:Intro to CS in Java](http://www.cs.columbia.edu/~cannon/1004/syllabus.html) at Columbia, though much more involved than the basics. It was also not very different from the final projects of some classes I've taken at NYU, say, [FRE6883: Financial Computing in C++](https://engineering.nyu.edu/academics/departments/finance-and-risk-engineering/fre-course-listings) or [FRE6951: GPU Programming](https://engineering.nyu.edu/sites/default/files/2019-06/FRE-GY6951.pdf), or [FRE7773: Machine Learning](https://www.coursicle.com/nyu/courses/FREGY/7773/). 

Though it was like a schoolwork, I think it was much more useful than the courses I've taken at NYU for two reasons:

1. The first reason has something to do with myself: I had a way too high expectation for myself. To elaborate: I chose too many hard classes in Spring 2019. At the end of the semester, I had a hard time balancing the workload of several projects from C++, CUDA C and Big Data classes. More specifically, projects were: 
	a. "Evaluating the impact of Earning Report on Stock Prices" in C++;
	b. "Binomial Security Pricing Model in Parellel Computing" in CUDA C;
	c. "twitter sentimental analysis" in Jupyter.
	
	 Because I was so occupied in many very hard projects in languages that I was not so proficient in, it was a torturing time for me. It was just not possible for me to multitasking at some many hard projects if I wanted to do a good job on all. I ended up overuse myself to do well in all classes.
	 
	 On the other hand, I could focus solely on this Java SpringMVC instead of multitasking on different projects, which was a much better way of learning new things. Also, because Java is my first programming language, I had a much better time dealing with it. In the end, I am quite confident that I really creamed off the good part of it, though it was not so easy at first. 

2. The classes at school were not very well-designed. C++ and CUDA C are not easy classes, and yet the coursework along the semester had some very eerie distributions. 

	C++ class has very few independent homework; instead, it was mostly some small functionality changes from code presented in class, which was not very properly useful in earlier weeks. This class grew increasingly hard, with the final project unnecessarily hard using ExcelDriver which was not compatible with my Mac and drawing some graphs. We also overloaded hundreds of classes. In fact, I doubt how this is really useful in practice. Anyway, it was not a good experience in general.
	
	This uncomfortable experience might stem from the comparison between another class, CS1004 at Columbia. I saw many people who were quite comfortable with this C++ class, though I beg to differ. In CS1004, homework were independent from what was covered in the class/slides. Rather, it was from the exercises of two well-written books, one of which was the famous "Big Java, Early Edition". We got to do assignments completely different from what was covered in class, which kept things novel and let us to apply what we had learned to other scenarios out of the box. Also, we had the largest projects workload during the spring break, which is a very smart way of distributing workload throughout the semester because we could have an extra few days to do the project and use the remaining days to go to Hawaii. We were given final exams instead of projects, which is also very nice because we would not have so much time for projects considering we had several classes/projects at the same time during final weeks. 
	
	Frankly speaking, I would say Columbia CS does things in a more reasonable and smarter way. It was this way of learning computer science that fascinated me and let me dive into the magic world of computer science. But NYU is still okay in general. Maybe I was too peculiar and treat Columbia CS as a benchmark so that I feel others were not good. I need more time to think through this. It might become crystal-clear after my graduation.
	
	CUDA C is even more sinister. We were supposed to come up with a "meaningful enough" project by ourselves which would involve intricated math models and lengthy CUDA C programs, in 3 weeks. Examples of math would be something similar to Mersenne Twister pseudo-random generator, etc. Sample code from classes were not that useful either. I remembered that a 700-line CUDA program similating Fast Fourier Transform(FFT) declared 55 array/pointer variables at the beginning without any comment(you got to be kidding me). By contrast, some of my friends taking [CS15418](http://www.cs.cmu.edu/~418/) at Carnegie Mellon University(CMU) mentioned to me that they had a similar project, which lasted for two whole months and people would work in groups of three. These three people went to Google, Sumimoto-Mitsui and DeepMind respectively after graduations. I boldly deduce our professor, Louis Scott, just had too high an expectation on us. Though I did not a bad job in the end, it was so tiring that I decided that I don't want to get involved in this for sometime. Anyway, this was really really a hard class.  Good as an NVidia Developer himself,  Mr. Scott, the very experienced C++ programmer who works at Fed NY now, clearly didn't think so. This also reminded me how much I still could learn down this path. 


The above part is more like a reflection on my schoolwork in this spring instead of what happended during the internship. It is definitely needed, though, to entail a clear and insightful perspective when it comes to my internship experience.

<br>


### The RESTful API Project 

When it comes to web development or writing REST service, almost all my former web development experience was in Python. Also, though I was exposed to MVC framework before, I didn't use that for more than one year by the time I was assigned this project, which made things quite alien to me. Besides that, I had no experience in serious JavaEE development. As a result, it was quite harsh for me at the beginning to figure out what is going on in the template code, how each different part in the code was integrated together and how requests are going through different parts in this framework. 

Then my boss ELP asked Mr. Fed, his asset No.1, to give all interns a brief introduction to Java SpringMVC. I had to admit that it was literally a brief introduction which was too high-level to be useful. 

I felt like that was the critical point when I made up my mind that I had to sort everything out because I was upset by it for quite a few days. Then I began to seriously look into the code, paid attention to every details and tried to put every small clues together to see the whole picture. Besides that, I also discussed how things work with other interns since most of us didn't have a clear understanding how SpringMVC work. 

Luckily, things gradually became clearer as we discuss and think. I also found that a Book called [Spring in Action](https://www.gocit.vn/files/Spring.in.Action.3rd.Edition-www.gocit.vn.pdf) and [spring.io](https://spring.io/) to be quite a good reference when things are not clear. (This is a pivotal point: **official documentations are very helpful when things are equivocal, though many fail to realize this**). For instance, [how request comes into SpringMVC framework was clearly illustrated in Spring in Action](https://github.com/lei-hsia/java/blob/master/request_SpringMVC.pdf). 

But this book was not a panacea, either. I believed that the author wrote this book at least eight years ago because even the third edition used large quantities of XML instead of annotations. One example from the book is like the following, the first thing that should be done to use Spring MVC: to place the following ```<servlet>``` declaration in the web.xml file:

```
<servlet>
	<servlet-name>spitter</servlet-name>
	<servlet-class>
org.springframework.web.servlet.DispatcherServlet
	</servlet-class>
	<load-on.startup>1</load-on-startup>
</servlet>
```

With that being said, I was also trained in the XML way of writing Java Beans when I first picked up core concepts such as IoC and AOP in SpringMVC instead of annotations. But it seems as if many have a disposition to use annotations instead of XML, while explains why annotation was in its heyday. In fact, these two are essentially the same. The only difference was that all beans are created in a single XML file if XML is adopted while annotations were used as are decorators in Python, using an @ to specify classes to be beans. Obviously annotations go with different classes so they have a much larger diaspora: they can literally be at any places wherever there are classes. I had an interesting discussion about this topic with Javier, who also deals with such applications on a daily basis.

In fact, most of companies developing in JavaEE uses a mix of both XML and annotations to write beans, for legacy reasons as well as current fad reasons. I also found out that Spring MVC was in fact not very different from the classical ["web-service-dao" model](https://www.google.com/search?q=web+service+dao+pattern&rlz=1C5CHFA_enGB721GB722&oq=web+service+dao&aqs=chrome.1.69i57j0l4.8415j1j7&sourceid=chrome&ie=UTF-8) before Spring MVC was introduced, where user interface carries a similar duty as do controllers; the business logic stays in the same layer and dao is separated for database access. A good example of controller that gates the initial step of request suggested by Spring in Action would be something like the following: 

```
package com.habuma.spitter.mvc;
import javax.inject.Inject;
import java.util.Map;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import com.habuma.spitter.service.SpitterService;

@Controller
public class HomeController {
	public static final int DEFAULT_SPITTLES_PER_PAGE = 25;
	private SpitterService spitterService;
	@Inject
	public HomeController(SpitterService spitterService) {
	  this.spitterService = spitterService;
	}
	@RequestMapping({"/","/home"})
	public String showHomePage(Map<String, Object> model) {
	  model.put("spittles", spitterService.getRecentSpittles(DEFAULT_SPITTLES_PER_PAGE));
	    return "home";
	}
}
```

Having a rough understanding of functions of each components, I began to carefully inspect code in each component in the template. The method invoked seemed intimidating in the first place, but they turned out to be just basic methods in different well-encapsulated packages. It turned out to be that all we would need to implement are just a basic POJO that include the fields needed for the query, a Dao class and a few changes in the definition of URL. These were done in a few days.

In a nutshell, the code we really wrote for this project was around just 100 lines, the tricky part was to know where to write them. I need to understand how the whole Spring MVC works in order to do that. In addition to that, I always like to collect enough information about something before making a pertinent decision upon it, which was why I decided to probe deep enough about Spring MVC. Because we were assigned this project from the start without much knowledge about it, it was kind of menacing in the first place, but more exciting. We probed that ourselves, had discussions about it, tried some different ways of implementations, debugged here and there and finally successfully produced an endpoint. It was the first time that I was assigned a project first before I really knew it. It was challenging to me, but super exciting. 

### Testing at IB

The emphasis on testing is very prevalent at IB. In fact, one of my peer interns worked exclusively on QA testing and some worked on the cross-validation project worked very heavily on testing. For me, except for the dashboard-building part that was exempt from code testing (they were still being tested, in other forms), all code review were objective to testing. These projects required the existence of tests that either tested the new functionalities or were regression tests to make sure bugs were fixed. Full Test-Driven-Development(TDD) was not something that I had to practice, although I sometimes used TDD for debugging after Chung has mentioned this during the daily meeting.

Javier once told me that when he tried to implement or make changes to some code in the distinguishing and categorizing institutional account and individual account project, he would have to come up with each and every new test cases for each potential failures because it would be a disaster for customers who would encounter problems with their accounts if these problems had not been considered and solved before account products went into production. This makes a lot of sense since mistakes were far more expensive when customers encountered with them than were they discovered and solved during QA. 

For me, the test stages can be seen as a "two-stage" process:
   1. debugging in code before jumped into writing test cases in test directory;
   2. writing test cases after MVC is implemented;
Also, the template code helped a lot in that app and test were two directories at the same level. This was a nice separation. 

The debugging process was quite different from what I had experienced as a python web developer. Since python is a weak-type programming language, I never needed to compile a project to run it. Since projects were written in Java, they would be compiled first. Also, because I was using the template instead of building things from scratch, I had a hard time finding what was exactly wrong when an error occurred. I remembered there was a time when I could not decide what was wrong in the class that would encapsulate all the fields I need when there was clearly an error in this class, I turned to my supervisor for help. He added a logger that would print all the information in the server terminal so it would be easy to see what was going on. I also tried to take a look at the log file to diagnose the issue, but it didn't work.

Since the root cause cannot be found, instead of waiting and continuing the search, the changes were rolled back to original version which at least still worked. If that also failed, it might be a good idea to just clone the initial project and work step by step while making sure code still compile along the way when small changes were made. Sometimes it was just not worth it spending hours after hours to trace what exactly happened than start the whole project all over again. In my specific example, my supervisor, some peer interns and I discussed and reasoned what would be the cause for the failure and deduced why certain errors occurred. Nonetheless, we were unable to fix the issue immediately so I restarted the whole project all over again. 

Writing test cases were quite different from the previous stage when I had encountered failures while writing the app part. At the beginning of this stage, I knew that app part already compiled and worked fine, which was something to feel good about. Nevertheless, as test cases should be executed in an isolated environment from the real database to get the data, we needed to find a way to mock this data procurement. I have never done anything like that. Luckily, one of the interns had some experience with that before and he mailed the rest of us about how it should work.

The answer was to use [Mockito](https://www.tutorialspoint.com/mockito/) which was a mocking framework, Java-based library used for effective unit test in Java applications. I would also need to include all dependencies of Mockito before using it, which reminded me that I should seriously learn something about Maven/Ivy because dependency issues were something I was not so good at. Then I spent a day or two on Mockito APIs and tutorials to find out how it worked before writing several test cases for the application. This was like the end of the project. I submitted my code via git commands and got accepted a few days later. 

From the first project, I learned really a lot: Spring MVC, a project that involved compilation, dependencies, more professional way of writing test cases, etc. What more profound was the fact that I learned that I have so much to learn. As my circle of knowledge expanded a little bit, so does the circumference of darkness surrounding it. Indeed, this project reminded me of these philosophical words of Albert Einstein.


### Work-life balance

On a less technical note, my employer adn I also worked on my work-life balance. During my study, I  was used to working 7 days a week. I usually get up around 7AM, go to the library around 8:30AM, study till 11:45AM, eat lunch and work till 6PM, go back to work out for one hour, take a shower and take a rest or work between 9PM and 10/11PM. My working hours depended on the size of my assignments/projects and sometimes worked late because I was excited working on a particular project. One occurrence I recall was working on the course [Intro to Java](needs insertion here) till 2AM in the morning, as I got some feelings that I was able to solve the Poker Card problem.

Being used to these working hours, I had some trouble having a healthy work-life balance at the start of my internship. In the first couple of weeks, I would work hours similar to what I was used to during university. However, since I have to commute between New York City and Greenwich on a daily basis, I have to set aside about 1.5 hours each time from one location to the other. I have to get up around 6:15AM to be able to finish up everything and leave home around 6:58AM, catch the train at 7:30AM, arrive at Greenwich around 8:15 and go to office around 8:30AM. When I finish one daily work, I leave around 6PM to catch the train leaving at 6:19PM back to New York. But it would always be very late when I got back home, work out and have a tiny dinner. From the third week and on, I leave around 5:44PM to catch the train leaving at 6PM, which is far more better than previous ones. Most IB engineers left before 6PM while some would stick around. Some people arrive around 7AM and leave around 4:30PM. The working hours are quite flexible based on one's own feeling of working that day, self-awareness of productivity, etc. 

Because I get up quite early everyday, work out and commute for three hours, it's really pivotal to reserve energy for high working efficiency. I decided to leave early from the third week and didn't spend much time watching anime YouTube videos or doing LeetCode problems at night. Instead, I choose to go to bed early, which is very beneficial for a fresh morning in the following day. In this way, even though I reduced the total amount of working hours per day, I was more productive and able to resolve problems, or think about problems much faster. Learning to manage a work-life balance was very valuable. Without true corporate experience and discussion with peers, it might be hard to really realize this problem with such deep insight. 


### Red-black Tree

In one of the daily meetings we had, one of the interns asked what kind of interviews we would have if we are interested in a full-time  opportunity, with our supervisor told us: "You might expect all different kinds of interviews, but you will not have scenarios as 'write a red-black tree'". It was a typical joke among computer science students, but it really intrigued me to review something about red-black tree. I remembered first picking up things in data structures in the May of 2017 at the Social Science Library in Oxford. I was self-studying, though, reading a textbook printed by Tsinghua University. It was quite hard when I hit the chapter of max heap and min heap which covers the fundamental principles that make them function properly. Max heap, min heap were covered in chapter 5, and trees were one chapter ahead in chapter 4. The idea of AVL tree and red-black tree is interesting, but the implementations were quite involved. However, given how valuable this tree is in comprimising both complexity of the data structure and efficiency when insertion and deletion are performed, it still worth the revisit, especially considering the fundamental differences between a web dev and a true software dev, or a neophyte versus a senior developer. The more experienced can have an instinct in choosing efficient data structures and devise the most efficient ways of solving problems. 

A red-black tree is a kind of self-rebalancing binary search tree. Each node of the binary tree has an extra bit, and that bits is often interpreted as the color(red or black) of the node. These color bits are used to ensure the tree remains approxiamately balanced during insertions and deletions. 

Balance is preserved by painting each node of the tree with one of two colors in a way that satisfies certain properties, which collectively constrain how unbalanced the tree can become in the worst scenario. When the tree is modified, the new tree is subsequently rearranged the repainted to restore the coloring properties. The properties are designed in such a way that this rearranging and recoloring can be performed efficiently.

The balancing of the tree is not perfect, but it's good enough to allow it to guarantee searching in ```O(log n)``` time, where n is the total number of elements in the tree. The insertion and deletion operations, along with the tree rearrangement and recoloring, are also performed in ```O(log n)``` time. 

Tracking the color of each node requires only 1 bit of information per node because there are only two colors. The tree does not contain any other data specific to its being a red-black tree so its memory footprint is almost identical to a classic(uncolored) BST. In many cases, the additional bit of information can be stored at no additional memory cost. 

The discussion of insertions and deletions are left behind here, but a reference of it is available [here](https://en.wikipedia.org/wiki/Red%E2%80%93black_tree#Operations). 

Red black tree is very often compared with B-tree, which is a common structure used in databases and file systems. I'm pretty sure MySQL uses B-tree structure because it can be shown when one types something in MySQL terminal. B-tree is also a self-balancing tree DS that maintains sorted data adn allows searches, sequential access, insertions and deletions in logarithmic time. The B-tree is a generalization of a BST in that a node can have more than 2 children. Unlike other self-balancing BSTs, the B-tree is well suited for storage systems that read and write relatively large blocks of data, such as discs. 

Code for red-black tree is shown below. It's quite long, which reminds me of "supersonic speed" in [Eminem's "Rap God"](https://www.google.com/search?q=rap+god&rlz=1C1JPGB_enUS852US852&oq=rap+&aqs=chrome.2.69i59j69i57j69i59j0l3.2359j0j7&sourceid=chrome&ie=UTF-8).

I got inspiration from the classic source for people to study algorithms, namely, from the red-black tree section of [Princeton's algorithm site](https://algs4.cs.princeton.edu/code/). Although I didn't really have the change to use this structure (I would be very surprised if I would be using it for an internship), I find it worth the time even to review and go through the code to refresh my memory.

```
import java.util.NoSuchElementException;

/**
 *  The {@code BST} class represents an ordered symbol table of generic
 *  key-value pairs.
 *  It supports the usual put, get, contains, delete, size, is-empty methods.
 *  It also provides ordered methods for finding the minimum, maximum, floor, and ceiling.
 *  It also provides a keys method for iterating over all of the keys.
 *  A symbol table implements the associative array abstraction:
 *  when associating a value with a key that is already in the symbol table,
 *  the convention is to replace the old value with the new value.
 *  Unlike {@link java.util.Map}, this class uses the convention that
 *  values cannot be {@code null}—setting the
 *  value associated with a key to {@code null} is equivalent to deleting the key
 *  from the symbol table.
 *  
 *  This implementation uses a left-leaning red-black BST. It requires that
 *  the key type implements the {@code Comparable} interface and calls the
 *  {@code compareTo()} and method to compare two keys. It does not call either
 *  {@code equals()} or {@code hashCode()}.
 *  The put, contains, remove, minimum, maximum, ceiling, and floor operations each take
 *  logarithmic time in the worst case, if the tree becomes unbalanced.
 *  The size, and is-empty operations take constant time.
 *  Construction takes constant time.
 *  
 *  For additional documentation, see this site: "https://algs4.cs.princeton.edu/33balanced", Section 3.3 of
 *  "Algorithms, 4th Edition" by Robert Sedgewick and Kevin Wayne.
 *  For other implementations of the same API, see {@link ST}, {@link BinarySearchST},
 *  {@link SequentialSearchST}, {@link BST},
 *  {@link SeparateChainingHashST}, {@link LinearProbingHashST}, and {@link AVLTreeST}.
 *
 */
 
 public class RedBlackBST<Key extends Comparable<Key>, Value> {

    private static final boolean RED   = true;
    private static final boolean BLACK = false;

    private Node root;     // root of the BST

    // BST helper node data type
    private class Node {
        private Key key;           // key
        private Value val;         // associated data
        private Node left, right;  // links to left and right subtrees
        private boolean color;     // color of parent link
        private int size;          // subtree count

        public Node(Key key, Value val, boolean color, int size) {
            this.key = key;
            this.val = val;
            this.color = color;
            this.size = size;
        }
    }
```

The Node class would be an inner class, which is quite common when it comes to trees where a Node class is entailed.

```
    /**
     * Initializes an empty symbol table.
     */
    public RedBlackBST() {
    }

   /***************************************************************************
    *  Node helper methods.
    ***************************************************************************/
    // is node x red; false if x is null ?
    private boolean isRed(Node x) {
        if (x == null) return false;
        return x.color == RED;
    }

    // number of node in subtree rooted at x; 0 if x is null
    private int size(Node x) {
        if (x == null) return 0;
        return x.size;
    } 


    /**
     * Returns the number of key-value pairs in this symbol table.
     * @return the number of key-value pairs in this symbol table
     */
    public int size() {
        return size(root);
    }
   /**
     * Is this symbol table empty?
     * @return {@code true} if this symbol table is empty and {@code false} otherwise
     */
    public boolean isEmpty() {
        return root == null;
    }


   /***************************************************************************
    *  Standard BST search.
    ***************************************************************************/

    /**
     * Returns the value associated with the given key.
     * @param key the key
     * @return the value associated with the given key if the key is in the symbol table
     *     and {@code null} if the key is not in the symbol table
     * @throws IllegalArgumentException if {@code key} is {@code null}
     */
    public Value get(Key key) {
        if (key == null) throw new IllegalArgumentException("argument to get() is null");
        return get(root, key);
    }
    
        // value associated with the given key in subtree rooted at x; null if no such key
    private Value get(Node x, Key key) {
        while (x != null) {
            int cmp = key.compareTo(x.key);
            if      (cmp < 0) x = x.left;
            else if (cmp > 0) x = x.right;
            else              return x.val;
        }
        return null;
    }

    /**
     * Does this symbol table contain the given key?
     * @param key the key
     * @return {@code true} if this symbol table contains {@code key} and
     *     {@code false} otherwise
     * @throws IllegalArgumentException if {@code key} is {@code null}
     */
    public boolean contains(Key key) {
        return get(key) != null;
    }
    
    /***************************************************************************
    *  Red-black tree insertion.
    ***************************************************************************/

    /**
     * Inserts the specified key-value pair into the symbol table, overwriting the old 
     * value with the new value if the symbol table already contains the specified key.
     * Deletes the specified key (and its associated value) from this symbol table
     * if the specified value is {@code null}.
     *
     * @param key the key
     * @param val the value
     * @throws IllegalArgumentException if {@code key} is {@code null}
     */
    public void put(Key key, Value val) {
        if (key == null) throw new IllegalArgumentException("first argument to put() is null");
        if (val == null) {
            delete(key);
            return;
        }

        root = put(root, key, val);
        root.color = BLACK;
        // assert check();
    }

    // insert the key-value pair in the subtree rooted at h
    private Node put(Node h, Key key, Value val) { 
        if (h == null) return new Node(key, val, RED, 1);

        int cmp = key.compareTo(h.key);
        if      (cmp < 0) h.left  = put(h.left,  key, val); 
        else if (cmp > 0) h.right = put(h.right, key, val); 
        else              h.val   = val;

        // fix-up any right-leaning links
        if (isRed(h.right) && !isRed(h.left))      h = rotateLeft(h);
        if (isRed(h.left)  &&  isRed(h.left.left)) h = rotateRight(h);
        if (isRed(h.left)  &&  isRed(h.right))     flipColors(h);
        h.size = size(h.left) + size(h.right) + 1;

        return h;
    }

   /***************************************************************************
    *  Red-black tree deletion.
    ***************************************************************************/

    /**
     * Removes the smallest key and associated value from the symbol table.
     * @throws NoSuchElementException if the symbol table is empty
     */
    public void deleteMin() {
        if (isEmpty()) throw new NoSuchElementException("BST underflow");

        // if both children of root are black, set root to red
        if (!isRed(root.left) && !isRed(root.right))
            root.color = RED;

        root = deleteMin(root);
        if (!isEmpty()) root.color = BLACK;
        // assert check();
    }

    // delete the key-value pair with the minimum key rooted at h
    private Node deleteMin(Node h) { 
        if (h.left == null)
            return null;

        if (!isRed(h.left) && !isRed(h.left.left))
            h = moveRedLeft(h);

        h.left = deleteMin(h.left);
        return balance(h);
    }


    /**
     * Removes the largest key and associated value from the symbol table.
     * @throws NoSuchElementException if the symbol table is empty
     */
    public void deleteMax() {
        if (isEmpty()) throw new NoSuchElementException("BST underflow");

        // if both children of root are black, set root to red
        if (!isRed(root.left) && !isRed(root.right))
            root.color = RED;

        root = deleteMax(root);
        if (!isEmpty()) root.color = BLACK;
        // assert check();
    }

    // delete the key-value pair with the maximum key rooted at h
    private Node deleteMax(Node h) { 
        if (isRed(h.left))
            h = rotateRight(h);

        if (h.right == null)
            return null;

        if (!isRed(h.right) && !isRed(h.right.left))
            h = moveRedRight(h);

        h.right = deleteMax(h.right);

        return balance(h);
    }

    /**
     * Removes the specified key and its associated value from this symbol table     
     * (if the key is in this symbol table).    
     *
     * @param  key the key
     * @throws IllegalArgumentException if {@code key} is {@code null}
     */
    public void delete(Key key) { 
        if (key == null) throw new IllegalArgumentException("argument to delete() is null");
        if (!contains(key)) return;

        // if both children of root are black, set root to red
        if (!isRed(root.left) && !isRed(root.right))
            root.color = RED;

        root = delete(root, key);
        if (!isEmpty()) root.color = BLACK;
        // assert check();
    }

    // delete the key-value pair with the given key rooted at h
    private Node delete(Node h, Key key) { 
        // assert get(h, key) != null;

        if (key.compareTo(h.key) < 0)  {
            if (!isRed(h.left) && !isRed(h.left.left))
                h = moveRedLeft(h);
            h.left = delete(h.left, key);
        }
        else {
            if (isRed(h.left))
                h = rotateRight(h);
            if (key.compareTo(h.key) == 0 && (h.right == null))
                return null;
            if (!isRed(h.right) && !isRed(h.right.left))
                h = moveRedRight(h);
            if (key.compareTo(h.key) == 0) {
                Node x = min(h.right);
                h.key = x.key;
                h.val = x.val;
                // h.val = get(h.right, min(h.right).key);
                // h.key = min(h.right).key;
                h.right = deleteMin(h.right);
            }
            else h.right = delete(h.right, key);
        }
        return balance(h);
    }

   /***************************************************************************
    *  Red-black tree helper functions.
    ***************************************************************************/

    // make a left-leaning link lean to the right
    private Node rotateRight(Node h) {
        // assert (h != null) && isRed(h.left);
        Node x = h.left;
        h.left = x.right;
        x.right = h;
        x.color = x.right.color;
        x.right.color = RED;
        x.size = h.size;
        h.size = size(h.left) + size(h.right) + 1;
        return x;
    }

    // make a right-leaning link lean to the left
    private Node rotateLeft(Node h) {
        // assert (h != null) && isRed(h.right);
        Node x = h.right;
        h.right = x.left;
        x.left = h;
        x.color = x.left.color;
        x.left.color = RED;
        x.size = h.size;
        h.size = size(h.left) + size(h.right) + 1;
        return x;
    }

    // flip the colors of a node and its two children
    private void flipColors(Node h) {
        // h must have opposite color of its two children
        // assert (h != null) && (h.left != null) && (h.right != null);
        // assert (!isRed(h) &&  isRed(h.left) &&  isRed(h.right))
        //    || (isRed(h)  && !isRed(h.left) && !isRed(h.right));
        h.color = !h.color;
        h.left.color = !h.left.color;
        h.right.color = !h.right.color;
    }

    // Assuming that h is red and both h.left and h.left.left
    // are black, make h.left or one of its children red.
    private Node moveRedLeft(Node h) {
        // assert (h != null);
        // assert isRed(h) && !isRed(h.left) && !isRed(h.left.left);

        flipColors(h);
        if (isRed(h.right.left)) { 
            h.right = rotateRight(h.right);
            h = rotateLeft(h);
            flipColors(h);
        }
        return h;
    }

    // Assuming that h is red and both h.right and h.right.left
    // are black, make h.right or one of its children red.
    private Node moveRedRight(Node h) {
        // assert (h != null);
        // assert isRed(h) && !isRed(h.right) && !isRed(h.right.left);
        flipColors(h);
        if (isRed(h.left.left)) { 
            h = rotateRight(h);
            flipColors(h);
        }
        return h;
    }

    // restore red-black tree invariant
    private Node balance(Node h) {
        // assert (h != null);

        if (isRed(h.right))                      h = rotateLeft(h);
        if (isRed(h.left) && isRed(h.left.left)) h = rotateRight(h);
        if (isRed(h.left) && isRed(h.right))     flipColors(h);

        h.size = size(h.left) + size(h.right) + 1;
        return h;
    }


   /***************************************************************************
    *  Utility functions.
    ***************************************************************************/

    /**
     * Returns the height of the BST (for debugging).
     * @return the height of the BST (a 1-node tree has height 0)
     */
    public int height() {
        return height(root);
    }
    private int height(Node x) {
        if (x == null) return -1;
        return 1 + Math.max(height(x.left), height(x.right));
    }

   /***************************************************************************
    *  Ordered symbol table methods.
    ***************************************************************************/

    /**
     * Returns the smallest key in the symbol table.
     * @return the smallest key in the symbol table
     * @throws NoSuchElementException if the symbol table is empty
     */
    public Key min() {
        if (isEmpty()) throw new NoSuchElementException("calls min() with empty symbol table");
        return min(root).key;
    } 

    // the smallest key in subtree rooted at x; null if no such key
    private Node min(Node x) { 
        // assert x != null;
        if (x.left == null) return x; 
        else                return min(x.left); 
    } 

    /**
     * Returns the largest key in the symbol table.
     * @return the largest key in the symbol table
     * @throws NoSuchElementException if the symbol table is empty
     */
    public Key max() {
        if (isEmpty()) throw new NoSuchElementException("calls max() with empty symbol table");
        return max(root).key;
    } 

    // the largest key in the subtree rooted at x; null if no such key
    private Node max(Node x) { 
        // assert x != null;
        if (x.right == null) return x; 
        else                 return max(x.right); 
    } 


    /**
     * Returns the largest key in the symbol table less than or equal to {@code key}.
     * @param key the key
     * @return the largest key in the symbol table less than or equal to {@code key}
     * @throws NoSuchElementException if there is no such key
     * @throws IllegalArgumentException if {@code key} is {@code null}
     */
    public Key floor(Key key) {
        if (key == null) throw new IllegalArgumentException("argument to floor() is null");
        if (isEmpty()) throw new NoSuchElementException("calls floor() with empty symbol table");
        Node x = floor(root, key);
        if (x == null) return null;
        else           return x.key;
    }    

    // the largest key in the subtree rooted at x less than or equal to the given key
    private Node floor(Node x, Key key) {
        if (x == null) return null;
        int cmp = key.compareTo(x.key);
        if (cmp == 0) return x;
        if (cmp < 0)  return floor(x.left, key);
        Node t = floor(x.right, key);
        if (t != null) return t; 
        else           return x;
    }

    /**
     * Returns the smallest key in the symbol table greater than or equal to {@code key}.
     * @param key the key
     * @return the smallest key in the symbol table greater than or equal to {@code key}
     * @throws NoSuchElementException if there is no such key
     * @throws IllegalArgumentException if {@code key} is {@code null}
     */
    public Key ceiling(Key key) {
        if (key == null) throw new IllegalArgumentException("argument to ceiling() is null");
        if (isEmpty()) throw new NoSuchElementException("calls ceiling() with empty symbol table");
        Node x = ceiling(root, key);
        if (x == null) return null;
        else           return x.key;  
    }

    // the smallest key in the subtree rooted at x greater than or equal to the given key
    private Node ceiling(Node x, Key key) {  
        if (x == null) return null;
        int cmp = key.compareTo(x.key);
        if (cmp == 0) return x;
        if (cmp > 0)  return ceiling(x.right, key);
        Node t = ceiling(x.left, key);
        if (t != null) return t; 
        else           return x;
    }

    /**
     * Return the key in the symbol table whose rank is {@code k}.
     * This is the (k+1)st smallest key in the symbol table. 
     *
     * @param  k the order statistic
     * @return the key in the symbol table of rank {@code k}
     * @throws IllegalArgumentException unless {@code k} is between 0 and
     *        <em>n</em>–1
     */
    public Key select(int k) {
        if (k < 0 || k >= size()) {
            throw new IllegalArgumentException("argument to select() is invalid: " + k);
        }
        Node x = select(root, k);
        return x.key;
    }

    // the key of rank k in the subtree rooted at x
    private Node select(Node x, int k) {
        // assert x != null;
        // assert k >= 0 && k < size(x);
        int t = size(x.left); 
        if      (t > k) return select(x.left,  k); 
        else if (t < k) return select(x.right, k-t-1); 
        else            return x; 
    } 

    /**
     * Return the number of keys in the symbol table strictly less than {@code key}.
     * @param key the key
     * @return the number of keys in the symbol table strictly less than {@code key}
     * @throws IllegalArgumentException if {@code key} is {@code null}
     */
    public int rank(Key key) {
        if (key == null) throw new IllegalArgumentException("argument to rank() is null");
        return rank(key, root);
    } 

    // number of keys less than key in the subtree rooted at x
    private int rank(Key key, Node x) {
        if (x == null) return 0; 
        int cmp = key.compareTo(x.key); 
        if      (cmp < 0) return rank(key, x.left); 
        else if (cmp > 0) return 1 + size(x.left) + rank(key, x.right); 
        else              return size(x.left); 
    } 

   /***************************************************************************
    *  Range count and range search.
    ***************************************************************************/

    /**
     * Returns all keys in the symbol table as an {@code Iterable}.
     * To iterate over all of the keys in the symbol table named {@code st},
     * use the foreach notation: {@code for (Key key : st.keys())}.
     * @return all keys in the symbol table as an {@code Iterable}
     */
    public Iterable<Key> keys() {
        if (isEmpty()) return new Queue<Key>();
        return keys(min(), max());
    }

    /**
     * Returns all keys in the symbol table in the given range,
     * as an {@code Iterable}.
     *
     * @param  lo minimum endpoint
     * @param  hi maximum endpoint
     * @return all keys in the sybol table between {@code lo} 
     *    (inclusive) and {@code hi} (inclusive) as an {@code Iterable}
     * @throws IllegalArgumentException if either {@code lo} or {@code hi}
     *    is {@code null}
     */
    public Iterable<Key> keys(Key lo, Key hi) {
        if (lo == null) throw new IllegalArgumentException("first argument to keys() is null");
        if (hi == null) throw new IllegalArgumentException("second argument to keys() is null");

        Queue<Key> queue = new Queue<Key>();
        // if (isEmpty() || lo.compareTo(hi) > 0) return queue;
        keys(root, queue, lo, hi);
        return queue;
    } 

    // add the keys between lo and hi in the subtree rooted at x
    // to the queue
    private void keys(Node x, Queue<Key> queue, Key lo, Key hi) { 
        if (x == null) return; 
        int cmplo = lo.compareTo(x.key); 
        int cmphi = hi.compareTo(x.key); 
        if (cmplo < 0) keys(x.left, queue, lo, hi); 
        if (cmplo <= 0 && cmphi >= 0) queue.enqueue(x.key); 
        if (cmphi > 0) keys(x.right, queue, lo, hi); 
    } 

    /**
     * Returns the number of keys in the symbol table in the given range.
     *
     * @param  lo minimum endpoint
     * @param  hi maximum endpoint
     * @return the number of keys in the sybol table between {@code lo} 
     *    (inclusive) and {@code hi} (inclusive)
     * @throws IllegalArgumentException if either {@code lo} or {@code hi}
     *    is {@code null}
     */
    public int size(Key lo, Key hi) {
        if (lo == null) throw new IllegalArgumentException("first argument to size() is null");
        if (hi == null) throw new IllegalArgumentException("second argument to size() is null");

        if (lo.compareTo(hi) > 0) return 0;
        if (contains(hi)) return rank(hi) - rank(lo) + 1;
        else              return rank(hi) - rank(lo);
    }


   /***************************************************************************
    *  Check integrity of red-black tree data structure.
    ***************************************************************************/
    private boolean check() {
        if (!isBST())            StdOut.println("Not in symmetric order");
        if (!isSizeConsistent()) StdOut.println("Subtree counts not consistent");
        if (!isRankConsistent()) StdOut.println("Ranks not consistent");
        if (!is23())             StdOut.println("Not a 2-3 tree");
        if (!isBalanced())       StdOut.println("Not balanced");
        return isBST() && isSizeConsistent() && isRankConsistent() && is23() && isBalanced();
    }

    // does this binary tree satisfy symmetric order?
    // Note: this test also ensures that data structure is a binary tree since order is strict
    private boolean isBST() {
        return isBST(root, null, null);
    }

    // is the tree rooted at x a BST with all keys strictly between min and max
    // (if min or max is null, treat as empty constraint)
    // Credit: Bob Dondero's elegant solution
    private boolean isBST(Node x, Key min, Key max) {
        if (x == null) return true;
        if (min != null && x.key.compareTo(min) <= 0) return false;
        if (max != null && x.key.compareTo(max) >= 0) return false;
        return isBST(x.left, min, x.key) && isBST(x.right, x.key, max);
    } 

    // are the size fields correct?
    private boolean isSizeConsistent() { return isSizeConsistent(root); }
    private boolean isSizeConsistent(Node x) {
        if (x == null) return true;
        if (x.size != size(x.left) + size(x.right) + 1) return false;
        return isSizeConsistent(x.left) && isSizeConsistent(x.right);
    } 

    // check that ranks are consistent
    private boolean isRankConsistent() {
        for (int i = 0; i < size(); i++)
            if (i != rank(select(i))) return false;
        for (Key key : keys())
            if (key.compareTo(select(rank(key))) != 0) return false;
        return true;
    }

    // Does the tree have no red right links, and at most one (left)
    // red links in a row on any path?
    private boolean is23() { return is23(root); }
    private boolean is23(Node x) {
        if (x == null) return true;
        if (isRed(x.right)) return false;
        if (x != root && isRed(x) && isRed(x.left))
            return false;
        return is23(x.left) && is23(x.right);
    } 

    // do all paths from root to leaf have same number of black edges?
    private boolean isBalanced() { 
        int black = 0;     // number of black links on path from root to min
        Node x = root;
        while (x != null) {
            if (!isRed(x)) black++;
            x = x.left;
        }
        return isBalanced(root, black);
    }

    // does every path from the root to a leaf have the given number of black links?
    private boolean isBalanced(Node x, int black) {
        if (x == null) return black == 0;
        if (!isRed(x)) black--;
        return isBalanced(x.left, black) && isBalanced(x.right, black);
    } 


    /**
     * Unit tests the {@code RedBlackBST} data type.
     *
     * @param args the command-line arguments
     */
    public static void main(String[] args) { 
        RedBlackBST<String, Integer> st = new RedBlackBST<String, Integer>();
        for (int i = 0; !StdIn.isEmpty(); i++) {
            String key = StdIn.readString();
            st.put(key, i);
        }
        for (String s : st.keys())
            StdOut.println(s + " " + st.get(s));
        StdOut.println();
    }
}
```

### Some thoughts besides work 1 : Japan's sanction on Korea

Sanctions are with regarding to material essential to semiconductor manufacturing.

Internship was not just about work. Besides working at IB, I'm also keen on interesting country affairs in East Asia, especially recently. Asia-Pacific is quite disquieted these days: trade war between two big countries on the east and west sides of Pacific, riots in HK, Japan's sanction on Korea. But what I want to say something in the last one, from a tech-driven perspective. If I were to intern as a quant or investment banking staff, I would say something pertinent to the previous two.

There're two other reasons why I'm quite intrigued by this. For one, I used to take classes at [Saïd Business School](https://www.sbs.ox.ac.uk/) under an American professor, Suellen Littleton, in winter, 2016. Back then, assignments were distributed in the form of presentations. We were requested to choose whatever we were interested in, research and make presentations one-to-one with professor when we were supposed to have tutorials. It was quite like the "case", or stragetic consulting business in McKinsey. 

The final project I chose for the first term was on semiconductors, not only because I had been an equity industry analyst in Shanghai in the summer, 2016, when I was mainly focusing on agriculture and semiconductor industries, but also because I've visited TSMC before and had long been fascinated by these tiny, yet state-of-the-art IC technologies that drove the world for the past 30 years or so. In a word, I'm a person inherently interested in this who had previous IC experience both from a financial perspective and from a tech perspective.

<br>
<br> 

The other reason was that I lived with a Japanese guy, Kawasaki, for one year. He was an heir to the Kawasaki family, the ninth biggest zaibatsu in Japan, well-known for their company [KHI](https://en.wikipedia.org/wiki/Kawasaki_Heavy_Industries), heavy machineries and hi-tech manufacturings. He told me several times that "49% of semiconductor industry players were  Japanese in 1990, there are no Japanese companies even in top 10 list now". Many Japanese in the industry also had the same frustrations. I totally agree with what he said based on what I had seen in Japan. Since I'm fluent in Japanese, lived in Osaka as a child for three years during 2002-04 and had former visiting experience in Kyoto University, I was honored to have the chance to talk with several professors on this topic, thus getting my own thoughts on this issue. 

The root reason behind this sanction, if we ignore the superficial reason concerning historical disputes, lies in the stagnant economy of Japan. For nearly three decades, a meager 0.1% was seen in Japanese economy. ICT industry seems as a perfect industry to rebuild their economy. They had the power to pickup this industry again and that's exactly what they are going to do. To do so, they need to swallow shares of some of the players already in this field. Korea's Samsung, SK Hynix and LG, formidable as they seemed to be, relied too heavily on the materials imported from Japan, namely, fluorinated polyimides, photoresists and hydrogen fluoride, which made these three seemingly giants easy targets.

Fluorinated polyimides are used in smartphone displays. 
Photoresists are thin layers of material used to transfer circuit patterns onto semiconductor wafers.
Hydrogen fluoride is used as an etching gas in the chipmaking process. (To make IC wafers, processes including doping, ion implantation, photolithographic patterning, etching, thin-film deposition of various materials and wafer slicing are entailed.)

Since Japan produces about 90% of fluorinated polyimide and about 70% of etching gas worldwide and around 90% of photoresists, according to a government report. This makes it difficult for South Korean chipmakers to find alternative sources of supply.

This was a very interesting "drama" from my perspective. I'm quite intrigued by what is going to happen next. Also, I did know that companies like Samsung that made memory for computers gained a lot by doubling the memory price in 2017, which, by the way, annoyed Japan to some degree from my perspective because Korea took away all the surplus profits and left nothing for Japan. Memory chips are used in computers. There are tech wars between the two countries because of economic winter. To make memory chips, there are several steps in which inorganic and organic chemistry are involved. In the meantime, Huawei's Harmony OS was born. All of these events seem to integrate finance, ICT, materials, chemistry, hardwares and softwares together, which made me realize how the famous saying in "King Lion", i.e. "everything exists in a dedicated balance, with millions of connections among each other" is manifested as it was told. Magnificent. 
##### Ausgezeichnet.


<br>
<br>

### Some thoughts besides work 2 : Trip to Aachen, Germany

I went to the airport to catch the flight to Aachen on the 19th, Jul. Because my supervisor went to Spain, I also wanted to go to the Continent as well to take a break in the middle of the internship. As a result, I decided to spend that weekend in Aachen because my uncle told me that he would go there. 

When I finished spring semester in May, I went to Stutggart to meet my uncle right before the internship started. He has the habit of going to Aachen each summer because he always tell me how much he likes the spa and sulfur springs there. "Die besten Schwefelquellen der Welt", as he said, although I beg to differ. From my perspective, there're three places in the world that have very good springs: YingCheng, Hubei in middle China, Izu, Shizuoka in southern Japan and Aachen in northern Rhine-Westphalia, Germany. I can't say which one is the best because they all offer very nice experience and top-of-the-line services, though they all have own specialities. Though it sounds unusual to go to springs in summer, the springs are not that hot. Also, it is said that the sulfur was super good to wipe out the tiredness in work.

Also, we went camping instead of living in hotels this time. My uncle suggested this option because he wanted to be more "independent" this time. People might say that it's because that economy is one powerful motive for camping, since after the initial outlay upon equipment, or through hiring it, the total expense can be far less than the cost of hotels. But, contrary to a popular assumption, it is far from being the only one, or even the greatest. The man who manoeuvres carelessly into his five euros worth of space at one of Europe's myriad permanent sites may find himself bumping a Bentley. More likely, Ford Escort will be hub to hub with Renault or Mercedes, but rarely with bicycles made for two.

We discussed a little bit about modern trip and finally I understood what he really meant. He was saying that the modern traveller is often a man who dislikes the "Splendide" and the "Bellavista", not because he cannot afford, or
shuns their meterial comforts, but because he is afraid of them. Affluent he may be, he is by no means sure
what to tip the doorman or the chambermaid. Master in his own house, he has little idea of when to say boo to
a maitre d'hotel.

From all such fears camping releases him. Granted, a snobbery of camping itself, based upon equipment and techniques, already exists, but it is of a kind that, if he meets it, he can readily understand and deal with. There is no superior 'they' in the shape of managements and hotel hierarchies to darken his holiday days.

To such motives, yet another must be added. The contemporary phenomenon of motor-car worship is to be explained not least by the sense of independence and freedom that ownership entails. To this pleasure camping gives an exquisite refinement.

Idealists have objected to the practice of camping, as to the packaged tour, that the traveller abroad thereby denies himself the opportunity of getting to know the people of the country visited. Insularity and self-containment, it is argued, go hand in hand. The opinion does not survive experience of a popular Continental camping place. Holiday hotels tend to cater for one nationality of visitors especially, sometimes exclusively. Camping sites, by contrast, are highly cosmopolitan. Granted, a preponderance of Germans is a characteristic that. seems common to most Mediterranean sites; but as yet there is no overwhelmingly specialized patronage. Notices forbidding the open-air drying of clothes, or the use of water points for car
washing, or those inviting 'our camping friends' to a dance or a boat trip are printed not only in French or
Spanish or Italian, but also in English, German and Dutch. At meal times the odour of sauerkraut vies with that
of garlic. The Frenchman's breakfast coffee competes with the Englishman's bacon and eggs.

In the end, whether the remarkable growth of organized camping means the eventual death of the more independent kind
is hard to say. Municipalities naturally want to secure the campers' site fees and other custom. Police are wary
of itinerants who cannot be traced to a recognized camp boundary or to four walls. But most probably it will all
depend upon campers themselves: how many heath fires they cause, how much litter they leave, in short,
whether or not they wholly alienate landowners and those who live in the countryside

### The CAT project 

This is quite a large project, with the details accessible [here](https://www.catnmsplan.com/). 

The main goal for this project is made public very clearly: "The Consolidated Audit Trail will track orders throughout their life cycle and identify the broker-dealers handling them, thus allowing regulators to more efficiently track activity in Eligible Securities throughout the U.S. markets. The primary goal of Securities and Exchange Commission (SEC) Rule 613 is to improve the ability of the SEC and the Self-Regulatory Organizations (SROs) to oversee trading in the US securities markets."

I was responsible for a small part of the whole project. I was expecting thousands, if not millions, of data (considering the background of a brokerage company, the data might be trading instruction sets maybe?) coming in. I need to find a way to ensure that they will be processed as the order they come in chronologically, without missing nor duplicates. This sounds formidable at first, and that's why Apache Kafka is used.

Apache Kafka is a distributed streaming platform, which has three key capabilities: 
	1. Publish and subscribe to streams of records, similar to a message queue or enterprise messaging system;
	2. Store streams of records in a fault-tolerant durable way;
	3. Process streams of records as they occur;

In a word, it's a messge-queue like platform that can store and process records of messages. What I did exactly was that I need to monitor, keep records stats of these data flow and put them in an interface to make sure that they were indeed carried out as they were supposed to. It was like when people want to know the tracking updates of the goods they ordered on Amazon. The only differences here are that instead of keeping track of goods information, I track orders. 

I would say this is a pretty advanced system once built, though I was only responsible for a small part of it. Teamwork was manifested during this. For my part, running one Kakfa was not that hard while there were several issues when I was trying to run a cluster of several Kafka brokers. Then it comes to the classic question when people were running Kafka: Okay, so I have Kafka running on my machine now, then what? The most ubiquitous question most people have when running Kafka is that: how do I "see" what exactly is going on inside Kafka? Reasonable. If you know a large system is running, you definitely want something from it to show and convince you that it's running smoothly and properly: you will need to monitor the data flows going inside and coming out of this cluster. The well-defined measurements for these data are manifested in metrics, with over 400 from brokers, 58 from message producers and 28 from message consumers. In addition to the problem of "what", I also need to address 
the question of "why": why these very metrics, what they mean, and what the relationships are among them. Do some can be accountable for others? If something go wrong, what the causes might stem from and what alert thresholds should be set. 

These are all topics worth exploring and they indeed took me about the following two months after the first project had been finished. I seemed to be the same every day at work, but in fact it was kind of like what Forrest Gump had gone through when he decided to run across the whole United States: exciting at first, then gloomy, but still carried on till the end with the initial courage and perseverance. I did learn a lot from this second project.


### Conclusion 

All in all, working at IB is not extremely different compared to university life. However, priorities and aspects such as a work-life balance are very much different in industry compared to being a student. The major difference lies in that I can have a very flexible schedule when I was a student since I was in charge of all my time throughout while it's better for me to  observer the schedule set in the company. Overall, I enjoy the time at IB very much.

The knowledge I obtained from my university courses were sufficient to be able to have thoughtful conversations with my colleagues. However, practical experience outside course assignments, very solid command of all basic knowledge and exams are required to be able to effectively write industry code. I need to work harder and smarter to be better.

Besides that, I found there're still a long way to go to really "excel" and reach my initial goal I set for myself when I was pretty small. It would not be a plain path forward; rather, it would be an arduous journey that requires perseverance and creativity, but it's fun. It's exactly what would make me a better man and someday stand on the top of the world.
