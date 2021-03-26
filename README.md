# Every Day Leetcode

This project is created to record the problem and thought in leetcode.



## Stack

### 155.Min Stack

设置一个辅助栈专门用于放置当前最小的值，每次压栈时主栈压入新数据，辅助栈压入当前最小数据  



### 316.Remove `重要` 

单调栈的问题，栈内元素大致递增，记录下串内字符的数量。有四题大致相同，总结一下规律  



### 682.Baseket Ball Game

利用`istream`将字符串转换为数字

利用`ostream`将数字转换为字符串

目前只知道怎么将istream初始化的利用，怎么重复使用还需要补充资料。  



## Heap

### 703.KthlargestNumInDataStream

无需对整个数组建堆，时间开销太大。建立一个K大的小顶堆，比堆顶小的全部都弃用。同时利用优先队列来建立小顶堆  



## Sort

### 349.intersection of two arrays

注意考虑整个情况，不要上来就写

  



## Greedy   



## Graphics

### 17.Letter Combinations of a Phone Number

利用递归即可。两个问题

1.char 类型的字符串 ‘0’ -- ‘9’ 转数字 可以不用isstringstream，使用 letter - '0' 即可

2.回归开始判断终止条件前，不要做任何操作。  



## BFS 

### 101.对称二叉树

自己的思路：利用两次BFS，第一次先进左子树、再进右子树。第二次先进右子树，再进左子树即可

大佬的递归思路：左子树的左子树和右子树的右子树相同 && 左子树的右子树和右子树的左子树相同  

### 133.克隆图

  BFS的思路正确，但是实现的不是很好，对C++中map的理解不是很深，需要继续看看。

只需要用到一个队列，将原图遍历到的结点进队即可，然后把访问的节点利用hash表生成一个clone的Node.

遍历当前结点的所有neighbors，写进hash表，利用hash表生成clone的新结点，把当前的clone结点的neighbors push所有遍历到的neighbors。





## Union Find

### 200.IslandNumber

fa建完之后就不用再find()一篇做路径压缩了，直接遍历整个fa来find，可以得到根节点的。

用集合来保存遍历到的根节点，不要用pre_num保存上一个遍历到的根节点。因为在fa中可能同一个根节点前后夹着别的根节点，会重复pre_num，令sum++



## Search Tree

### 173.BSTiterator

搜索树有一个特别好的特性就是，中序遍历为有序表，利用这个性质使用栈来进行中序遍历，保存经过的结点。注意：不需要一次遍历完整个，只需要每次next的时候去右子树找最小的左子树即可。





## Hash

### 1207.独一无二的出现次数

不用每次find找end，比较两个hash表的长度即可。



## DP

### 139.rob

dp[i] = max(dp[i - 2] + num[i] , dp[i - 1])



## Search

### 剑指offer 04.二维数组中的查找

个人思路是遍历每一行，行末数字若小于当前target则continue，然后每个行内进行二分查找。



大佬思路：从右上角开始找，从右上角看就是个二叉搜索树。





## ToDo List

- [x] 优先队列 priority queue(to replace MinHeap)
- [x] 集合 set
- [ ] 单调栈 
- [ ] 在问题规模多大时，需要控制时间复杂度
- [x] istream（利用stoi等函数即可）
- [ ] map，C++中的关联容器
- [ ] & 在for中的用途
- [ ] emplace_back 和 push_back
- [ ] std::size_t

