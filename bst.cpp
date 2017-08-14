#include <iostream>

template <class T>
class Tree
{
    // Internal class which stores only Node related information.
    struct TreeNode
    {
        T data;
        TreeNode * left;
        TreeNode * right;

        TreeNode(T val):data(val),left(NULL),right(NULL)
        {
        }
    };
    TreeNode * root;
    void print(TreeNode*);
    void freeMemory(TreeNode*);


public:
    Tree();
    ~Tree();
    void insert(T);
    void print();
};

template <class T>
Tree<T>::Tree():root(NULL){}

template <class T>
Tree<T>::~Tree()
{
    freeMemory(root);
}

template <class T>
void Tree<T>::freeMemory(Tree::TreeNode *node)
{
    if (node==NULL)
        return;
    if (node->left)
        freeMemory(node->left);
    if (root->right)
        freeMemory(node->right);
    delete node;
}

template <class T>
//make it return value?
void Tree<T>::insert(T val)
{
    TreeNode * treeNode = NULL;
    try
    {
        treeNode = new TreeNode(val); // handle exception necessary?
    } catch (std::bad_alloc &exception)
    {
        std::cerr << "bad_alloc caught: " << exception.what() << std::endl;
    }
    TreeNode *temp=NULL;
    TreeNode *prev=NULL;

    temp = root;
    while(temp)
    {
        prev = temp;
        if (temp->data < treeNode->data)
            temp = temp->right;
        else
            temp = temp->left;
    }
    if (prev==NULL)
        root = treeNode;
    else
    {
        if (prev->data<treeNode->data)
            prev->right = treeNode;  // use setter function?
        else
            prev->left = treeNode;
    }
}

template <class T>
void Tree<T>::print(TreeNode *root)
{
    if (root==NULL)
        return ;
    print(root->left);
    std::cout << root->data << std::endl;
    print(root->right);
}

template <class T>
void Tree<T>::print()
{
    print(root);
}


int main()
{
    Tree<int> tree;
    tree.insert(14);
    tree.insert(12);
    tree.insert(6);
    tree.insert(17);
    tree.insert(8);
    tree.print();

}
