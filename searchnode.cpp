#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val)
    {
        data=val;
        left= NULL;
        right = NULL;
    }
};
node* searchbst(node* root, int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==key)
    {
        return root;
    }
    if(key>root->data)
    {
     return searchbst(root->right,key);
    }
    return searchbst(root->right,key);
}
int main()
{
    struct node* root = new  node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right= new node(3);
    root->right->right = new node(6);
    if(searchbst(root,7)!=NULL)
    {
        cout<<"key exists"<<" ";
    }
    else{
        cout<<"key not  exists"<<" ";
    }
    return 0;
}