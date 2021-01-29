#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>

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

    int arr[5000];

    int count;

    ifstream inputFile;

    inputFile.open("triangle");

    while (count < 5000 && inputFile >> arr[count]){
        count++;
    }
    for (count = 0; count < 5000; count++){
        cout << arr[count] << " ";
    }

    struct node* root = NULL;

    root = array_to_BST(arr, 0, 0);

    //cout << max_total(root);

    struct node* test = NULL;

    return 0;
}

