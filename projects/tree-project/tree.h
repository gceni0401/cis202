#ifndef TREE_H
#define TREE_H

#include <vector>
#include <string>


class Node
{
private:

   int size() const;
   void print() const;
   std::string data;
   std::vector<Node*> children;
   friend class Tree;   
};


class Tree
{
    public:
    Tree();
    void print() const;
    Tree(std::string root_data);
    void add_subtree(const Tree& subtree);
    
    int size() const;
    
    private:   
    Node* root;
};

#endif