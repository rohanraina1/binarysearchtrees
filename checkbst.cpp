#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* left,*right;
    node(int value)
    {
        data= value;
        left=NULL;
        right =  NULL;
    }
};
bool check(node* root , node* min= NULL , node* max = NULL)
{
    if(root==NULL)
    {
        return true;
    }
    if(min!=NULL && root->data<=min->data)
    {
        return false;
    }
    if(max!=NULL && root->data>=max->data )
    {
        return false;
    }
    bool leftvalid = check(root->left,min,root);
    bool rightvalid = check(root->right,root, max);
    return leftvalid and rightvalid;
}
int main()
{
    struct node* root = new  node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right= new node(3);
    root->right->right = new node(6);
    if(check(root,NULL,NULL))
    {
        cout<<"It is a valid Bst"<<endl;
    }
    else
    {
        cout<<"it is not a Bst"<<endl;
    }
    return 0;
}