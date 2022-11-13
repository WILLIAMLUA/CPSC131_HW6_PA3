/**
 * PROBLEM 1: SEARCH IN A BINARY SEARCH TREE
 * WILLIAM LUA
 * MARIAH SALGADO
 */

class Solution { //Struct TreeNode
public:
    TreeNode* searchBST(TreeNode* root, int val) { //int Val;
        TreeNode* temp = root; 
        while(temp != NULL){
            if(temp->val == val){
                return temp;
            }
            else if(val < temp->val){
                temp = temp->left; //TreeNode *left;
            }
            else{
                temp = temp->right; //TreeNode *right;
            }
        }
        return NULL;
    }
};
   
/**
*Solved with recursion
*struct TreeNode {
*int val;
*TreeNode *left;
*TreeNode *right;
*TreeNode() : val(0), left(nullptr), right(nullptr) {}
*TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
*TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
* };
*/
