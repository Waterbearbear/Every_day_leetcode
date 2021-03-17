# Every Day Leetcode

This project is created to record the problem and thought in leetcode.



### Stack

#### 155.Min Stack

设置一个辅助栈专门用于放置当前最小的值，每次压栈时主栈压入新数据，辅助栈压入当前最小数据  



#### 316.Remove `重要` 

单调栈的问题，栈内元素大致递增，记录下串内字符的数量。有四题大致相同，总结一下规律  



#### 682.Baseket Ball Game

利用`istream`将字符串转换为数字

利用`ostream`将数字转换为字符串

目前只知道怎么将istream初始化的利用，怎么重复使用还需要补充资料。  





### Heap

#### 703.KthlargestNumInDataStream

无需对整个数组建堆，时间开销太大。建立一个K大的小顶堆，比堆顶小的全部都弃用。同时利用优先队列来建立小顶堆  



### Sort

#### 349.intersection of two arrays

注意考虑整个情况，不要上来就写

  



### Greedy   



### Graphics

#### 17.Letter Combinations of a Phone Number

利用递归即可。两个问题

1.char 类型的字符串 ‘0’ -- ‘9’ 转数字 可以不用isstringstream，使用 letter - '0' 即可

2.回归开始判断终止条件前，不要做任何操作。  



### BFS 

#### 101.对称二叉树

自己的思路：利用两次BFS，第一次先进左子树、再进右子树。第二次先进右子树，再进左子树即可

大佬的递归思路：左子树的左子树和右子树的右子树相同 && 左子树的右子树和右子树的左子树相同  





### ToDo List

- [ ] 优先队列 priority queue(to replace MinHeap)
- [ ] 集合 set
- [ ] 单调栈 
- [ ] 在问题规模多大时，需要控制时间复杂度
- [ ] istream

