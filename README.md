## AlgLink 

<dl>
<dt>Course Name</dt>
<dd>Algorithmic Problem Solving</dd>
<dt>Course Code</dt>
<dd>24ECSE309</dd>
<dt>Name</dt>
<dd>Prajwal Mallikarjun Ganeshanavar</dd>
<dt>SRN</dt>
<dd>01FE22BCS159</dd>
<dt>Course Instructor</dt>
<dd>Prakash Hegade</dd>
<dt>University</dt>
<dd>KLE Technological University</dd>
<dt>Portfolio Domain / Topic</dt>
<dd>LinkedIn</dd>
</dl>

* * *

> “The only constant in IT is **change**.” 



#### Note:
This page hosts:

1. **Introduction**
2. **Why Portfolio**
3. **Objectives**
4. **Data Structures and Algorithms applicable**
5. **Learnings and Key Takeaways**
6. **References**


* * *

## Introduction
<p style="text-align: justify;">
LinkedIn is a leading professional networking service, providing a platform for professionals to connect, share, and grow their careers. In today’s data-driven world, the efficiency and effectiveness of social networking services can be significantly enhanced through the strategic application of data structures and algorithms. This portfolio project delves into the core functionalities of LinkedIn’s diverse services, applying the theoretical knowledge and practical skills acquired from the course Algorithmic Problem Solving (APS). By using advanced algorithmic techniques and data structures, this project aims to propose solutions to real-world business applications. From optimizing connection recommendations for improved relevance to enhancing content delivery for better engagement, the potential for enhancement is vast.
</p>

![LinkedIn Image](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/assets/Introduction.png)
<p style="text-align: center; font-style: italic;">
Figure 1: LinkedIn Overview <a href="#ref1">[1]</a>
</p>
<p style="text-align: justify;">
This portfolio showcases how algorithms can be applied within LinkedIn’s ecosystem. Each use case illustrates how specific DSA principles can solve practical challenges faced by a social networking service like LinkedIn, bridging the gap between theory and application. Explore the use cases to see how DSA and Algorithmic Problem Solving techniques are used to enhance performance, reliability, and efficiency in a real-world context.
</p>


***Market Analysis of Linkedin***
![](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/assets/market_analysis.jpg)
<p style="text-align: center; font-style: italic;">
Figure 2: Market Analysis of LinkedIn <a href="#ref2">[2]</a>
</p>

## Need of Portfolio
<p style="text-align: justify;">
The ever-evolving landscape of social networking services necessitates continual improvements in service management and user experience. LinkedIn, as a leading player in this industry, faces various operational challenges that can be addressed through the strategic application of data structures and algorithms. This portfolio is essential for several reasons. Firstly, optimizing service efficiency is crucial; efficient connection recommendations and content delivery can maximize user engagement and satisfaction. By exploring advanced algorithmic solutions, this portfolio aims to enhance these processes, resulting in a more personalized and efficient service. Additionally, the transition from theoretical knowledge to practical application is a critical step in the learning process. This portfolio provides an opportunity to apply concepts learned in Data Structures and Algorithms (DSA) and Algorithmic Problem Solving (APS) courses to real-world problems, thereby solidifying understanding and skills.
</p>

## Objectives
<p style="text-align: justify;">
1.To apply theoretical concepts from Data Structures and Algorithms (DSA) and Algorithmic Problem Solving (APS) courses to practical, real-world problems within the LinkedIn platform.
</p>
<p style="text-align: justify;">
2.To address specific business challenges faced by LinkedIn through the application of algorithmic problem-solving.
</p>
<p style="text-align: justify;">
3.To explore and implement algorithmic solutions that ensure streamlined and efficient services within LinkedIn’s ecosystem.
</p>

## Data Structures and Algorithms applicable

## 1. Hire Candidates: Search and Research Members' Profiles and Hire the Right Candidates

**Algorithm:** Graph Algorithms (Graph Traversal, BFS)
<p style="text-align: justify;">
<strong>Description:</strong> LinkedIn can help recruiters find and hire the right candidates by using graph traversal algorithms like BFS. Each user profile can be represented as a node in a graph, and connections between users as edges. Recruiters can search for candidates based on certain criteria, and BFS can be used to traverse through the connections to find potential candidates who match the job requirements. This enables recruiters to efficiently explore their extended network to find the best fit for their hiring needs.
</p>
<p style="text-align: justify;">
<strong>Challenges:</strong> Managing a large, dynamic graph of user profiles and connections. Ensuring the privacy and security of user data while performing searches. Keeping the search results relevant and personalized based on the recruiter's preferences and job requirements.
</p>
  
### Breadth-First Search (BFS)

![](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/assets/bfs.jpg)
<p style="margin-left: 150px; font-style: italic;">
Figure 3: Breadth-First Search (BFS) <a href="#ref3">[3]</a>
</p>

- **Time Complexity:** O(V + E), where V is the number of vertices and E is the number of edges in the graph.
- **Space Complexity:** O(V), for storing the queue and the visited list.

[Here is my code for BFS Algorithm](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/codes/Bfs.c)

## 2. Connection Recommendations
**Algorithm:** Graph Algorithms (Graph Traversal, Community Detection).
<p style="text-align: justify;">
<strong>Description:</strong> LinkedIn can recommend connections to users by analyzing their current connections and suggesting new ones based on mutual connections and shared interests. Graph traversal algorithms like BFS and DFS can be used to explore and find potential connections within a user's network. Community detection algorithms can help identify clusters of users with similar profiles, enhancing the relevance of recommendations by focusing on users with shared professional interests or backgrounds.
</p>

**Challenges:** Managing large, dynamic graphs; ensuring privacy and security of user data.

### Breadth-First Search (BFS)

- **Time Complexity:** O(V + E), where V is the number of vertices and E is the number of edges in the graph.
- **Space Complexity:** O(V), for storing the queue and the visited list.

### Depth-First Search (DFS)
![](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/assets/DFS.png)
<p style="margin-left: 2px; font-style: italic;">
Figure 4: Depth-First Search (BFS) <a href="#ref4">[4]</a>
</p>
- **Time Complexity:** O(V + E), where V is the number of vertices and E is the number of edges in the graph.
- **Space Complexity:** O(V), for storing the recursion stack or iterative stack and the visited list.


[Here is my code for BFS Algorithm](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/codes/Bfs.c)

[Here is my code for DFS Algorithm](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/codes/Dfs.c)

## 3. Job Recommendations
**Algorithm:** Trie.
<p style="text-align: justify;">
<strong>Description:</strong> LinkedIn can recommend jobs by storing job titles and user searches in a trie structure, allowing for efficient retrieval of job recommendations based on user input. The trie can quickly match job titles with user search terms, providing relevant job postings in real-time. This ensures that users are presented with job opportunities that closely align with their skills and interests.

<strong>Challenges:</strong> Efficiently storing and searching a large number of job titles.
</p>

### Trie

![](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/assets/trie.png)
<p style="width: 80%; margin: 0 auto; font-style: italic;">
Figure 5: Trie Data Structure <a href="#ref5">[5]</a>
</p>

- **Time Complexity:**
  - Insertion: O(L), where L is the length of the word.
  - Search: O(L), where L is the length of the word.
  - Deletion: O(L), where L is the length of the word.
- **Space Complexity:** O(ALPHABET_SIZE * L * N), where ALPHABET_SIZE is the size of the alphabet (e.g., 26 for lowercase English letters), L is the average length of the words, and N is the number of words.

[Here is my code for Trie data structure](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/codes/Trie.cpp)

## 4. Skill Endorsements and Recommendations 

**Algorithm:** Association Rule Mining (Using Trie for storing and querying associations).
<p style="text-align: justify;">
<strong>Description:</strong> LinkedIn can recommend skills to users based on patterns in skills that are often endorsed together. By using a trie to store these associations, the platform can efficiently query and suggest additional skills that complement a user's existing endorsements. This helps users enhance their profiles by adding relevant skills that are valued in their professional network.
</p>

**Challenges:** Ensuring recommendations are relevant and not overwhelming users with too many suggestions.

### Trie

- **Time Complexity:**
  - Insertion: O(L), where L is the length of the word.
  - Search: O(L), where L is the length of the word.
  - Deletion: O(L), where L is the length of the word.
- **Space Complexity:** O(ALPHABET_SIZE * L * N), where ALPHABET_SIZE is the size of the alphabet (e.g., 26 for lowercase English letters), L is the average length of the words, and N is the number of words.

[Here is my code for Trie data structure](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/codes/Trie.cpp)

## 5. Content Personalization
**Algorithm:** Dijkstra's Algorithm (for finding shortest path in a graph of content connections).
<p style="text-align: justify;">
<strong>Description:</strong> LinkedIn can use Dijkstra's Algorithm to rank content based on the shortest path to user interests and connections. This algorithm helps determine the most relevant articles, posts, and job listings for each user by considering their unique preferences and network. This ensures that users see content that is most pertinent to their professional goals and interests.
</p>
<p style="text-align: justify;">
<strong>Challenges:</strong> Ensuring timely updates to rankings, maintaining relevance and diversity of content.
</p>

### Dijkstra's Algorithm
![](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/assets/Dijkstra's.gif)
<p style="margin-left: 165px; font-style: italic;">
Figure 6: Dijkstra's Algorithm <a href="#ref6">[6]</a>
</p>

- **Time Complexity:** O(V^2) with a simple implementation, O(E + V log V) with a priority queue or Fibonacci heap, where V is the number of vertices and E is the number of edges.
- **Space Complexity:** O(V + E), for storing the graph and additional structures like distance and priority queue.

[Here is my code for Dijkstras Algorithm](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/codes/Dijkstra's.c).

## 6. Personalized Email and Notification Campaigns
**Algorithm:** Hash Table (for fast lookup and segmentation)
<p style="text-align: justify;">
<strong>Description:</strong> LinkedIn can use a hash table to efficiently segment users based on their profiles, behaviors, and preferences. By hashing user attributes (such as job title, industry, activity level, etc.), LinkedIn can quickly categorize users into different segments for targeted email and notification campaigns. Hash tables allow for constant time complexity for both insertion and retrieval operations, making them ideal for handling large datasets and providing fast access to user segments.
</p>
<p style="text-align: justify;">
<strong>Challenges:</strong> Ensuring the hash function is well-designed to minimize collisions and distribute users evenly across the hash table. Managing dynamic updates to user profiles and preferences, which requires efficient rehashing or re-segmentation to keep the data current.
</p>

### Hash Table
![](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/assets/Hashing.gif)
<p style="margin-left: 150px; font-style: italic;">
Figure 7: Hash Table <a href="#ref7">[7]</a>
</p>
- **Time Complexity:**

  - Insertion: O(1), for adding a user to a segment.
  - Lookup: O(1), for retrieving users from a segment

[Here is code for Hash Table](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/codes/Hash_table.cpp)


## 7. Feed Ranking (Prioritizing Posts in User’s Feed)

**Algorithm: PageRank (Graph Algorithm), Priority Queue (Heap)**

<p style="text-align: justify;">
<strong>Description:</strong> LinkedIn’s feed ranking system determines the order in which posts appear on a user’s feed based on relevance, engagement, and social connections. The algorithms used are PageRank to measure influence of posts based on likes, comments, and shares, and Priority Queue (Max-Heap) to dynamically rank and serve the most relevant posts in real-time. The system considers factors such as user engagement history (likes, comments, shares), post recency (newer posts get higher priority), connection strength (posts from close connections appear first).
</p>
<p style="text-align: justify;">
<strong>Challenges:</strong> Ensuring real-time updates to reflect new interactions instantly, avoiding bias towards viral content to maintain diversity, and scaling the system to deliver fast, personalized feeds to millions of users efficiently.</p>

### PageRank (Graph Algorithm)

![](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/assets/Pagerank.gif)
<p style="margin-left: 135px; font-style: italic;">
Figure 8: PageRank Algorithm in Graphs <a href="#ref8">[8]</a>
</p>
- **Time Complexity:**
  - O(K * E) per iteration, where K is the number of iterations and E is the number of edges.
- **Space Complexity:**
  - O(V + E), where V is the number of vertices (users/posts) and E is the number of edges (interactions).

[Here is my code for Pagerank](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/codes/Pagerank.cpp)

### Priority Queue (Max-Heap)
![](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/assets/Priority_Queue.gif)
<p style="margin-left: 135px; font-style: italic;">
Figure 9: Heap Data Structure <a href="#ref9">[9]</a>
</p>
- **Time Complexity:**
  - Insertion (O(log N))
  - Extraction (O(log N))
  - Peek (O(1))
- **Space Complexity:**
  - O(N) (stores feed items in memory).

[Here is my code for Max-Heap](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/codes/Priority_Queues.cpp)

## 8. Tracking Time-based User Engagement

**Algorithm: Fenwick Tree (Binary Indexed Tree)**
<p style="text-align: justify;">
<strong>Description:</strong> LinkedIn can track user engagement (likes, comments, shares) over time to analyze trends and optimize content delivery. A Fenwick Tree (or Binary Indexed Tree) efficiently records engagement metrics in real-time, computes cumulative engagement over any time window (e.g., "How many likes in the past 7 days?") and supports dynamic updates (O(log N)) and range queries (O(log N)). Use cases include detecting trending content by identifying posts with sudden engagement spikes, visualizing user activity through weekly or monthly engagement dashboards, and monitoring ad performance by tracking click-through rates over specific time periods. </p>
<p style="text-align: justify;">
<strong>Challenges:</strong> A key challenge is processing millions of interactions per second, demanding low-latency, high-throughput systems. Another is balancing data granularity with storage costs i.e., finer metrics increase insight but also data volume and infrastructure load. </p>

### Fenwick Tree (Binary Indexed Tree)
![](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/assets/Fenwick%20Tree.png)
<p style="margin-left: 130px; font-style: italic;">
Figure 10: Binary Indexed Tree (Fenwick Tree) <a href="#ref10">[10]</a>
</p>

- **Time Complexity:**
  - Update (Add engagement): O(log N)
  - Query (Get total engagement in range [L, R]): O(log N)
- **Space Complexity:**
  - O(N) (where N is the max time units tracked, e.g., days or hours).
  
[Here is my code for Fenwick Tree (Binary Indexed Tree) data structure](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/codes/Fenwick_tree.cpp)



## 9. Job Hunting: Apply for Jobs Advertised on LinkedIn

**Algorithm: Trie**
<p style="text-align: justify;">
<strong>Description:</strong> LinkedIn can recommend jobs by storing job titles and user searches in a trie structure. This allows for efficient retrieval of job recommendations based on user input. When a user searches for job titles or keywords, the trie can quickly match and suggest relevant job postings. This helps users find suitable job opportunities more efficiently, improving their job hunting experience on LinkedIn.
</p>
<p style="text-align: justify;">
<strong>Challenges:</strong> Efficiently storing and searching a large number of job titles. Managing the dynamic nature of job postings and searches as new jobs are added and old ones are removed or filled. Ensuring that the recommendations remain relevant and personalized to the user's career interests and skills.
</p>

### Trie

- **Time Complexity:**
  - Insertion: O(L), where L is the length of the word.
  - Search: O(L), where L is the length of the word.
  - Deletion: O(L), where L is the length of the word.
- **Space Complexity:** O(ALPHABET_SIZE * L * N), where ALPHABET_SIZE is the size of the alphabet (e.g., 26 for lowercase English letters), L is the average length of the words, and N is the number of words.
  
[Here is my code for Trie data structure](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/codes/Trie.cpp)


## 10.Social Selling Platform
**Algorithm:** Collaborative Filtering and Graph Analysis
<p style="text-align: justify;">
<strong>Description:</strong> Collaborative filtering can be used to recommend products, services, and potential business connections to users based on their interactions, preferences, and behaviors. By analyzing patterns in user activity, LinkedIn can suggest relevant content and connections to enhance social selling efforts.
Graph analysis algorithms can be employed to understand and leverage the network of connections between users and companies. By analyzing these connections, LinkedIn can identify key influencers, potential leads, and the most effective pathways for building business relationships.
</p>
<p style="text-align: justify;">
<strong>Challenges:</strong> Data Volume: Handling the massive volume of user and company data efficiently.
Privacy: Ensuring user data privacy and compliance with data protection regulations.
</p>
[Here is my code for Dijkstras Algorithm](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/codes/Dijkstra's.c).

## 11. Profile View Analytics 
**Algorithm:** Fenwick Tree (Binary Indexed Tree) + Graph Algorithms (BFS/DFS for Stalker Detection).
<p style="text-align: justify;">
<strong>Description:</strong> LinkedIn’s "Who Viewed Your Profile" feature allows users to track who visited their profile over time. To implement this case, Fenwick Tree (BIT) can be used to count daily/weekly profile views in O(log N) time per update, answer range queries (e.g., "How many views in the last 30 days?") in O(log N) time and Graph Algorithms (BFS/DFS) help detect stalkers (users who frequently visit but don’t connect), influential viewers (high-profile visitors who might signal job opportunities).
</p>
**Challenges:** Handling millions of profile views every second without delays, protecting the privacy of users who want their data anonymized and storing large amounts of historical data efficiently without making the database too large

### Fenwick Tree (Binary Indexed Tree)
- **Time Complexity:**
	- Update (New View): O(log N)
	- Query (Total Views in Range [L, R]): O(log N)
- **Space Complexity:** O(N) (where N = max time units, e.g., 365 days).

[Here is my code for Fenwick Tree (Binary Indexed Tree) data structure](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/codes/Fenwick_tree.cpp)

### Breadth-First Search (BFS)

- **Time Complexity:** O(V + E), where V is the number of vertices and E is the number of edges in the graph.
- **Space Complexity:** O(V), for storing the queue and the visited list.

### Depth-First Search (DFS)

- **Time Complexity:** O(V + E), where V is the number of vertices and E is the number of edges in the graph.
- **Space Complexity:** O(V), for storing the recursion stack or iterative stack and the visited list.

[Here is my code for BFS Algorithm](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/codes/Bfs.c)

[Here is my code for DFS Algorithm](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/codes/Dfs.c)


## 12.Learning Recommendations (LinkedIn Learning)
**Algorithm:** Directed Acyclic Graph (DAG), Topological Sort
![](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/assets/DAG_with_Topological_Sort.gif)
<p style="margin-left: 155px; font-style: italic;">
Figure 11: Kahn’s Algorithm for Topological Sort <a href="#ref11">[11]</a>
</p>

<p style="text-align: justify;">
<strong>Description:</strong> LinkedIn Premium recommends personalized learning paths (e.g., "To become a Data Scientist, take these courses in order"). This requires modeling skill dependencies (e.g., "Learn Python before Machine Learning") as a DAG, topological sorting to generate a conflict-free course sequence.
</p>
<p style="text-align: justify;">
<strong>Challenges:</strong> The key challenges include managing dynamic updates as new courses and skills reshape the DAG, balancing personalization between breadth for exploration and depth for mastery, and addressing the cold-start problem where new users begin without skill or engagement data.</p>

[Here is my code implementation](https://raw.githubusercontent.com/PrajwalMG159/portfolio.github.io/refs/heads/main/codes/DAG_and_Topological_Sort.cpp).


## Learnings and Key Takeaways
<p style="text-align: justify;">
This portfolio demonstrates how selecting appropriate data structures and algorithms can address specific business challenges across various LinkedIn functionalities. Each use case details the application of suitable algorithms, outlines the challenges, highlights the benefits, and emphasizes design techniques tailored to LinkedIn's services. It shows how algorithms learned in APS and DSA classes can be directly applied to practical problems on LinkedIn and focuses on efficiency and practicality.
</p>
<p style="text-align: justify;">
By linking theory to practice, this portfolio provides insights into choosing the best solutions for real-world issues on LinkedIn. It illustrates the significant impact that well-chosen algorithms and data structures can have n improving LinkedIn's services, such as optimizing connection recommendations, enhancing content delivery, and personalizing job recommendations. The portfolio emphasizes the importance of understanding these concepts to drive innovation and efficiency on LinkedIn, ultimately contributing to a more engaging and effective professional networking platform.
</p>

## References
<p id="ref1">[1] LinkedIn. <a href="https://rockcontent.com/blog/what-is-linkedin/" target="_blank">https://rockcontent.com/blog/what-is-linkedin/</a>. Accessed June 7, 2025.</p>

<p id="ref2">[2] Market Analysis of LinkedIn. <a href="https://www.slideteam.net/linkedin-competitive-analysis-report-business-marketing-using-linkedin-ppt-demonstration.html" target="_blank">https://www.slideteam.net/linkedin-competitive-analysis-report-business-marketing-using-linkedin-ppt-demonstration.html</a>. Accessed June 7, 2025.</p>

<p id="ref3">[3] Breadth-First Search Traversal. <a href="https://www.freecodecamp.org/news/deep-dive-into-graph-traversals-227a90c6a261/" target="_blank">https://www.freecodecamp.org/news/deep-dive-into-graph-traversals-227a90c6a261/</a>. Accessed June 7, 2025.</p>
<p id="ref4">[4] Depth-First Search Traversal. <a href="https://www.geeksforgeeks.org/dfs-traversal-of-a-tree-using-recursion/" target="_blank">https://www.geeksforgeeks.org/dfs-traversal-of-a-tree-using-recursion/</a>. Accessed June 7, 2025.</p>

<p id="ref5">[5] Trie - A Tree-based Data Structure. <a href="https://www.polarsparc.com/xhtml/Trie-1.html" target="_blank">https://www.polarsparc.com/xhtml/Trie-1.html</a>. Accessed June 7, 2025.</p>

<p id="ref6">[6] Graph Traversal Overview. <a href="https://blog.csdn.net/2301_81373791/article/details/144214160" target="_blank">https://blog.csdn.net/2301_81373791/article/details/144214160</a>. Accessed June 7, 2025.</p>

<p id="ref7">[7] Hash Table. <a href="https://www.ilmuhacking.com/web-security/hashtable-collision-dos/" target="_blank">https://www.ilmuhacking.com/web-security/hashtable-collision-dos/</a>. Accessed June 7, 2025.</p>

<p id="ref8">[8] PageRank Algorithm for Graph Databases. <a href="https://memgraph.com/blog/pagerank-algorithm-for-graph-databases" target="_blank">https://memgraph.com/blog/pagerank-algorithm-for-graph-databases</a>. Accessed June 7, 2025.</p>

<p id="ref9">[9] Heap Data Structure Explained. <a href="https://tipsmake.com/heap-data-structure" target="_blank">https://tipsmake.com/heap-data-structure</a>. Accessed June 7, 2025.</p>

<p id="ref10">[10] Binary Indexed Tree. <a href="https://www.enjoyalgorithms.com/blog/binary-indexed-tree" target="_blank">https://www.enjoyalgorithms.com/blog/binary-indexed-tree</a>. Accessed June 7, 2025.</p>

<p id="ref11">[11] Kahn’s Algorithm for Topological Sort. <a href="https://mintuchel.tistory.com/entry/%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-kahn-%EC%9C%84%EC%83%81%EC%A0%95%EB%A0%AC" target="_blank">https://mintuchel.tistory.com/entry/%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-kahn-%EC%9C%84%EC%83%81%EC%A0%95%EB%A0%AC</a>. Accessed June 7, 2025.</p>
