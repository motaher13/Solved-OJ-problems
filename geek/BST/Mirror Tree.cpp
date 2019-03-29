#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
void mirror(struct Node* node);
void rev(Node *node, Node *root);
void inOrder(struct Node* node)
{
    if (node == NULL)
        return;
    inOrder(node->left);
    printf("%d ", node->data);
    inOrder(node->right);
}

struct Node* newNode(int data)
{
    struct Node* node = (struct Node*)
                        malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}

int main()
{
    int t;
    struct Node *child;
    scanf("%d", &t);
    while (t--)
    {
        map<int, Node*> m;
        int n;
        scanf("%d",&n);
        struct Node *root = NULL;
        while (n--)
        {
            Node *parent;
            char lr;
            int n1, n2;
            scanf("%d %d %c", &n1, &n2, &lr);
            if (m.find(n1) == m.end())
            {
                parent = newNode(n1);
                m[n1] = parent;
                if (root == NULL)
                    root = parent;
            }
            else
                parent = m[n1];
            child = newNode(n2);
            if (lr == 'L')
                parent->left = child;
            else
                parent->right = child;
            m[n2]  = child;
        }
        mirror(root);
        inOrder(root);
        cout << endl;
    }
    return 0;
}

void rev(Node *node, Node *root)
{

    if(node->right!=NULL)
    {
        Node *lft=new Node();
        lft->data=node->right->data;
        lft->left=lft->right=NULL;
        root->left=lft;
        rev(node->right,root->left);
    }

    if(node->left!=NULL)
    {
        Node *rgt=new Node();
        rgt->data=node->left->data;
        rgt->left=rgt->right=NULL;
        root->right=rgt;
        rev(node->left,root->right);
    }

}



void mirror(Node* node)
{
    Node *root=new Node();
    root->data=node->data;
    root->left=root->right=NULL;
    rev(node,root);
    node->left=root->left;
    node->right=root->right;

}


















