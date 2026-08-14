class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        string path;
        dfs(root, path, result);
        return result;
    }
    
private:
    void dfs(TreeNode* node, string& path, vector<string>& result) {
        if (!node) return;
        
        int len = path.size();
        path += to_string(node->val);
        
        if (!node->left && !node->right) {
            result.push_back(path);
        } else {
            path += "->";
            dfs(node->left, path, result);
            dfs(node->right, path, result);
        }
        
        path.resize(len);  // backtrack
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna