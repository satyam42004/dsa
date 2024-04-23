/*
Construct an expression tree from the given prefix expression eg. +--a*bc/def and
traverse it using post order traversal (non recursive) and then delete the entire tree.
*/
//Ganesh bodakhe
//A21
#include<iostream>
#include<stack>
using namespace std;
char exprsn[] = {'+', '-', '-', 'a', '*', 'b', 'c', '/', 'd', 'e', 'f'};
struct node {
struct node* left;
struct node* right;
char data;
};
stack<node*> stk;
void createExpressionTree() {
struct node* ptr1;
struct node* ptr2;
for (int i = 10; i > -1; i--) {
struct node* nn = new node;
nn->left = NULL;
nn->right = NULL;
if (exprsn[i] != '*' && exprsn[i] != '+' && exprsn[i] != '-' && exprsn[i] != '/') {
nn->data = exprsn[i];
stk.push(nn);
}
else {
ptr1 = stk.top();
stk.pop();
ptr2 = stk.top();
stk.pop();
nn->data = exprsn[i];
nn->left = ptr1;
nn->right = ptr2;
stk.push(nn);
}
}
}
void postOrderTraversal(node* root) {
stack<node*> s1;
stack<char> s2;
s1.push(root);
while (!s1.empty()) {
struct node* current = s1.top();
s1.pop();
s2.push(current->data);
if (current->left) {
s1.push(current->left);
}
if (current->right) {
s1.push(current->right);
}
}
while (!s2.empty()) {
cout << s2.top() << " ";
s2.pop();
}
}
int main() {
createExpressionTree();
cout<<"Expression tree is created !!";
cout<<"\nPost Order Traversal is : [";
struct node* root = stk.top();
postOrderTraversal(root);
cout<<"]";
return 0;
}