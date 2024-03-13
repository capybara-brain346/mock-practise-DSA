#include <iostream>
#include <stack>
#include <string>

using namespace std;

struct TreeNode {
    string value;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(string val) : value(val), left(nullptr), right(nullptr) {}
};

bool isOperator(const string& token) {
    return token == "+" || token == "-" || token == "*" || token == "/";
}

TreeNode* buildExpressionTree(const string& prefixExpr) {
    stack<TreeNode*> st;
    string token;
    size_t pos = prefixExpr.size() - 1; 
    
    while (pos != string::npos) {
        while (pos != string::npos && prefixExpr[pos] == ' ') {
            pos--; 
        }
        
        if (pos == string::npos) {
            break; 
        }
        
        token = "";
        while (pos != string::npos && prefixExpr[pos] != ' ') {
            token = prefixExpr[pos] + token; 
            pos--;
        }
        
        if (isOperator(token)) {
            TreeNode* node = new TreeNode(token);
            node->left = st.top();
            st.pop();
            node->right = st.top();
            st.pop();
            st.push(node);
        } else {
            st.push(new TreeNode(token));
        }
    }
    
    return st.top();
}

void postorderTraversal(TreeNode* root) {
    if (root) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->value << " ";
    }
}

int main() {
    string prefixExpr = "+ - - a * b c / d e f";
    TreeNode* root = buildExpressionTree(prefixExpr);
    
    cout << "Post-order traversal: ";
    postorderTraversal(root);
    cout << endl;
    
    return 0;
}
