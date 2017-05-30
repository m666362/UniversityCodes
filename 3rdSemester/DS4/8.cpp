
#include<bits/stdc++.h>
using namespace std;

void del(int item);

struct nodetype
{
    int info;
    struct nodetype *left;
    struct nodetype *right;
    struct nodetype *prev;
};
typedef struct nodetype *nodeptr;
nodeptr root;

void inorder(nodeptr p)
{
    if(p!=NULL)
    {
        inorder(p->left);
        cout<<p->info<<" ";
        inorder(p->right);
    }
}

void preorder(nodeptr p)
{
    if(p!=NULL)
    {
        cout<<p->info<<" ";
        preorder(p->left);
        preorder(p->right);
    }
}
void postorder(nodeptr p)
{
    if(p!=NULL)
    {
        postorder(p->left);
        postorder(p->right);
        cout<<p->info<<" ";
    }
}


void display()
{
    if(root)
    {
        cout<<"\nTraverse tree Inorder"<<endl;
        inorder(root);
        cout<<"\nTraverse tree Preorder"<<endl;
        preorder(root);
        cout<<"\nTraverse tree Postorder"<<endl;
        postorder(root);

    }
    else
    {
        cout<<"BST is NULL"<<endl;
    }
}

void insertnode(int item)
{
    nodeptr p,newnode,back;
    p=root;
    back=NULL;
    newnode=(nodetype *)malloc(sizeof(nodetype));
    newnode -> left =NULL;
    newnode->right=NULL;
    newnode->prev=NULL;

    newnode ->info=item;
    while(p!=NULL)
    {
        back=p;
        p->prev=back;
        if(p->info>item)
        {
            p->prev=back;
            p=p->left;
        }
        else
        {
            p->prev=back;
            p=p->right;
        }
    }
    if(back==NULL)
    {
        p->prev=back;
        root=newnode;
    }
    else if(back->info>item)
    {
        p->prev=back;
        back->left=newnode;
    }
    else
    {
        p->prev=back;
        back->right=newnode;
    }
    display();
}

int menu()
{
    int n;
    cout<<"\nMain Menu"<<endl;
    cout<<"1. Insert\n";
    cout<<"2. Display\n";
    cout<<"3. Exit\n\n";
    cout<<"Enter Choice (1-3):\n";
    cin>>n;
    return n;
}

int main()
{
    nodeptr p;
    int val;
    root =NULL;
    int n=menu();
    do
    {
        if(n==1)
        {
            cout<<"Insert a value : ";
            cin>>val;
            insertnode(val);
        }
        else if(n==2)
        {
            display();
        }
        else if(n==3)
        {
            break;
        }
        else
        {
            cout<<"Wrong Choice"<<endl;
        }
        n=menu();

    }
    while(true);
    return 0;
}

void del(int item)
{
    nodeptr p, Fayaz;
    p=root;
    int info1, info2;

    int flag1, flag2;

    while(p!=NULL)
    {
        if(p->info==item)
        {
            if(p->left == NULL && p->right ==NULL)
            {
                p=p->prev;
                p->left = NULL;
                p->right = NULL;
            }
            else if(p->left != NULL)
            {
                Fayaz=p->left;
                p->right;
                p=p->prev;
                p=p->prev;

                if(flag1==1)
                {
                    p->right=Fayaz;
                }
                else if(flag2==1)
                {
                    p->left=Fayaz;
                }
            }
            else
            {
                Fayaz=p;
                p=p->right;

                while(p->left!=NULL)
                {
                    p=p->left;
                }
                info1= p->info;
                if(p->right!=NULL)
                {
                    p=p->right;
                    info2=p->info;

                }

                p=Fayaz;
                p->info=info1;
                p=p->right;
                p=p->left;
                p->info=info2;
                p->right=NULL;
            }
        }
        else if(p->info<item)
        {
            p=p->right;
            flag1=1;
            flag2=0;
        }
        else
        {
            p=p->left;
            flag2=1;
            flag1=0;
        }
    }
    if(p==NULL)
    {
        printf("%d Not found\n", item);
    }
}
