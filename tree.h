#include<iostream>
#include<fstream>
#include<sstream>
#include"ArgumentManager.h"
using namespace std;

class node {
public:
  int *keys;
  int min, n;
  node **children;
  bool leaf;
  node(int min, bool leaf = false) : min(min), leaf(leaf) {
    keys = new int[2 * min - 1];
    children = new node*[2 * min];
  }
};

class btree {
public:
  node *root;
  int degree;

  btree(int degree) : degree(degree) { // constructor
    root = new node(degree);
    cout << "\ninitalized b-tree with degree " << degree << ".\n\n";
  }

  void insert(int data) {
    cout << "inserting " << data << '\n';
  }

  bool search(int data) {

    return false;
  }

  void remove(int data) {

  }

  void inorder() {
    cout << "traversing in order...\n";
  }

  void display(int deg) {
    cout << "displaying tree at level " << deg << ".\n";
  }

};
