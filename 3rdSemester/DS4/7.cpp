
#include<bits/stdc++.h>
using namespace std;
struct nodetype
{
    int info;
    struct nodetype *left;
    struct nodetype *right;

};
typedef struct nodetype *nodeptr;
nodeptr root;
nodeptr p;

void display();

void insertnode(int item)
{
    nodeptr newnode,back;
    p=root;
    back=NULL;
    newnode=(nodetype *)malloc(sizeof(nodetype));
    newnode -> left =NULL;
    newnode->right=NULL;
    newnode ->info=item;
    while(p!=NULL)
    {
        //printf("\nInto while\n");
        back=p;
        if(p->info>item)
        {
            p=p->left;
        }
        else
        {
            p=p->right;
        }
    }
    if(back==NULL)
    {
        root=newnode;
    }
    else if(back->info>item)
    {
        back->left=newnode;
    }
    else
    {
        back->right=newnode;
    }
    display();
}
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
void search(int item)
{
    p=root;
    while(p!=NULL)
    {
        if(p->info==item)
        {
            if(p==root)
            {
                printf("%d found at the root\n", item);
            }
            else
            {
                printf("%d found as a child\n", item);
            }
            return;
        }
        else if(p->info<item)
        {
            p=p->right;
        }
        else
        {
            p=p->left;
        }
    }
    if(p==NULL)
    {
        printf("%d Not found\n", item);
    }
}
int menu()
{
    int n;
    cout<<"\nMain Menu"<<endl;
    cout<<"1. Insert\n";
    cout<<"2. Display\n";
    cout<<"3. Search\n";
    cout<<"4. Exit\n";
    cout<<"\nEnter Choice (1-3):\n";
    cin>>n;
    return n;
}

void display()
{
    if(root)
    {
        cout<<"\nTraverse tree INorder"<<endl;
        inorder(root);
        cout<<"\nTraverse tree PREorder"<<endl;
        preorder(root);
        cout<<"\nTraverse tree Postorder"<<endl;
        postorder(root);

    }
    else
    {
        cout<<"BST is NULL"<<endl;
    }
}
int main()
{
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
            printf("Enter a value to search:\n");
            scanf("%d", &val);
            search(val);
        }
        else if(n==4)
        {
            cout<<"Program terminated\n";
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
