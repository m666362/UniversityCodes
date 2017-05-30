
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

void inorder(nodeptr p){
    if(p!=NULL){
        inorder(p->left);
        cout<<p->info<<" ";
        inorder(p->right);
    }
}

void preorder(nodeptr p){
    if(p!=NULL){
        cout<<p->info<<" ";
        preorder(p->left);
        preorder(p->right);
    }
}

void postorder(nodeptr p){
    if(p!=NULL){
        postorder(p->left);
        postorder(p->right);
        cout<<p->info<<" ";
    }
}


void display(){
    if(root){
        cout<<"\nTraverse tree Inorder"<<endl;
        inorder(root);
        cout<<"\nTraverse tree Preorder"<<endl;
        preorder(root);
        cout<<"\nTraverse tree Postorder"<<endl;
        postorder(root);

    }
    else{
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
    newnode ->info=item;
    while(p!=NULL)
    {
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
    if(back==NULL){
        root=newnode;
    }
    else if(back->info>item){
        back->left=newnode;
    }
    else{
        back->right=newnode;
    }
    display();
}

int menu(){
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
    do{
        if(n==1){
            cout<<"Insert a value : ";
            cin>>val;
            insertnode(val);
        }
        else if(n==2){
            display();
        }
        else if(n==3){
            break;
        }
        else{
            cout<<"Wrong Choice"<<endl;
        }
        n=menu();

    }while(true);
    return 0;
}
