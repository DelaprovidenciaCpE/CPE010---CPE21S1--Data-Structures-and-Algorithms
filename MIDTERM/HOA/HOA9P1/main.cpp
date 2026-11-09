#include <iostream>
#include "binaryTree.h"


/*
       A
      / \
     B   C
    / \   /  \
   D   E   F   nullptr

*/




int main(){

    //create the root node
    BinaryTree<char>* root = new BinaryTree<char>('A');

    //Create the children of root A
    root->insertLeft('B');
    root->insertRight('C');

    //create the children of B
    root->getLeftChild()->insertLeft('D');
    root->getLeftChild()->insertRight('E');

    //create the children of C
    root->getRightChild()->insertLeft('F');

    std::cout<<"Root: " << root->getRootVal() <<std::endl;

    std::cout<<"Root: " << root->getRootVal() <<std::endl;
std::cout<<"Left Child of A: " <<root->getLeftChild()->getRootVal()<<std::endl;
std::cout<<"Right Child of A: " <<root->getRightChild()->getRootVal()<<std::endl;

std::cout<<"Right Child of C: " <<root->getRightChild()->getLeftChild()->
getRootVal() <<std::endl;
    return 0;
}