//
// Created by wyq on 4/1/16.
//
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

typedef struct BSTnode{
    int data;
    BSTnode *left, *right;
}BSTnode, *BSTroot;

void preorderTravel(BSTroot node) {
    stack<BSTroot> stack1;
    if (!node) {
        return;
    }

    while (node || !stack1.empty()) {
        while (node) {
            stack1.push(node);
            printf("%d\t", node->data);
            node = node->left;
        }
        node = stack1.top();
        stack1.pop();
        node = node->right;
    }
}

void inorderTravel(BSTroot node) {
    stack<BSTroot> stack1;
    if (!node) {
        return;
    }

    while (node || !stack1.empty()) {
        while (node) {
            stack1.push(node);
            node = node->left;
        }
        node = stack1.top();
        stack1.pop();
        printf("%d\t", node->data);
        node = node->right;
    }
}

void postorderTravel(BSTroot node) {
    vector<int> list;
    stack<BSTroot> stack1;
    if (!node) {
        return;
    }
    while (node || !stack1.empty()) {
        while (node) {
            stack1.push(node);
            node = node->right;
        }
        node = stack1.top();
        stack1.pop();
        list.push_back(node->data);
        node = node->left;
    }
    vector<int>::iterator it;
    for (it = list.end(); it != list.begin(); --it)
        printf("%d\t", *it);
}
