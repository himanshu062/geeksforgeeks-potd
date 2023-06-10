class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
    int minDiff(Node *root, int K)
    {
        //Your code here
        int ans = 1e9;
        function<void(Node *)>dfs = [&](Node * cvalue)
        {
            if(cvalue == nullptr)
            {
                return;
            }
            ans= min(ans,abs(cvalue ->data - K));
            if(K < cvalue -> data)
            dfs(cvalue ->left);
            else
            dfs(cvalue -> right);
        };
        dfs(root);
        return ans;
    }
};
