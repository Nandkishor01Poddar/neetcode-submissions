/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* parent;
};
*/

class Solution {
public:
    Node* lowestCommonAncestor(Node* p, Node * q) {
        unordered_set<Node*> visited;
        
        // Traverse up from p and store all visited nodes
        while (p != nullptr) {
            visited.insert(p);
            p = p->parent; 
        }
        
        // Traverse up from q; first match is the LCA
        while (q != nullptr) {
            if (visited.count(q)) { 
                return q;
            }
            q = q->parent;
        }
        
        return nullptr;
    }
};