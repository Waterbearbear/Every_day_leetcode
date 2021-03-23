/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {

        //map相关知识
        //hash的方法
        //emplace_back
        //引用& 遍历的时候是复制一份,还是什么
        if(node == nullptr)
        {
            return node;
        }

        unordered_map<Node*, Node*> visited;
        visited[node] = new Node(node->val);
        queue<Node*> Q;

        Q.push(node);
        while(!Q.empty())
        {
            auto now_node = Q.front();
            Q.pop();


            for(auto& every_neighbor:now_node->neighbors)
            {
                if(visited.find(every_neighbor) == visited.end())
                {
                    visited[every_neighbor] = new Node(every_neighbor->val);
                    Q.push(every_neighbor);
                }
                visited[now_node]->neighbors.push_back(visited[every_neighbor]);
            }
        }

        return visited[node];




        // Node* newnode;
        // newnode = node;

        // // Node* p = newnode;

        // que_old.push(node);
        // que_clone.push(newnode);

        // while(!que_old.empty())
        // {
        //     auto old_node = que_old.front();
        //     auto clone_node = que_clone.front();

        //     que_old.pop();
        //     que_clone.pop();
        //     if(interview[old_node->val]) continue;

        //     for(auto neighbor_node:(old_node->neighbors))
        //     {
        //         Node* clone_neighbor_node;
        //         clone_neighbor_node = neighbor_node;

        //         clone_node->neighbors.push_back(clone_neighbor_node);

        //         que_old.push(neighbor_node);
        //         que_clone.push(clone_node);
        //         // if(!interview[neighbor_node->val])
        //         // {
        //         //     que.push(neighbor_node);
        //         //     // interview[neighbor_node->val] = true;
        //         // }
        //     }
        //     interview[old_node->val] = true;
        // }

        // return newnode;
        // for(auto neighbor_node:neighbors)
        //     newnode->neighbors
    }

// public:
    // vector<int> interview;
    // map<int,bool> interview;
    // queue<Node*> que_old;
    // queue<Node*> que_clone;
};