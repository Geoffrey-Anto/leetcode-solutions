/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    void poplulate(Node* root) {
        queue<Node*> q;

        if(root)
            q.push(root);

        while(!q.empty()) {
            int n = q.size();

            while(n--) {
                auto top = q.front();
                q.pop();

                if(n == 0) {
                    top->next = nullptr;
                } else {
                    top->next = q.front();
                }

                if(top->left)
                    q.push(top->left);
                if(top->right)
                    q.push(top->right);
            }
        }
    }
    Node* connect(Node* root) {
        poplulate(root);

        return root;
    }
};
