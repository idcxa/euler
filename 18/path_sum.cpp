#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

/* Binary Tree node structure */
struct node {
    int data;
    struct node* left;
    struct node* right;
};

/* Function to create a new Binary Tree node */
struct node* new_node(int data) {
    struct node* temp = new struct node;
    temp -> data = data;
    temp -> left = NULL;
    temp -> right = NULL;
    return temp;
}

int max_total(struct node* node) {

    if (node == NULL)
        return 0;

    int suml = max_total(node -> left) + node -> data;

    int sumr = max_total(node -> right) + node -> data;

    if (suml > sumr)
        return suml;
    else
        return sumr;
}

struct node* array_to_BST(int arr[], unsigned int n, int i) {

    struct node* root = NULL;

    if (n > 14) {
        return root;
    }

    root = new_node(arr[i]);

    root -> left        = array_to_BST(arr, n+1, (i+1)+n);
    root -> right       = array_to_BST(arr, n+1, (i+2)+n);

    return root;

}

int main() {

    int arr[] = {75,95,64,17,47,82,18,35,87,10,20,4,82,47,65,19,1,23,75,3,34,88,2,77,73,7,63,67,99,65,4,28,6,16,70,92,41,41,26,56,83,40,80,70,33,41,48,72,33,47,32,37,16,94,29,53,71,44,65,25,43,91,52,97,51,14,70,11,33,28,77,73,17,78,39,68,17,57,91,71,52,38,17,14,91,43,58,50,27,29,48,63,66,4,68,89,53,67,30,73,16,69,87,40,31,4,62,98,27,23,9,70,98,73,93,38,53,60,4,23};

    struct node* root = NULL;

    root = array_to_BST(arr, 0, 0);

    cout << max_total(root);

    struct node* test = NULL;

    return 0;
}

