#ifndef BINARYTREE_H
#define BINARYTREE_H


template <typename T>
class BinaryTree {
    private:

    // data
    T key;

    // left
    BinaryTree<T>* leftChild;

    // right
    BinaryTree<T>* rightChild;

    public:

    // constructor
    BinaryTree(T rootnode);
    
    //insert children
    void insertLeft(T newNode);
    void insertRight(T newNode);

    // accessing the child node
    BinaryTree<T>* getLeftChild();
    BinaryTree<T>* getRightChild();

    // get and set node value
    void setRootVal(T obj);
    T getRootVal();

    //checker if the node is a leaf or not
    bool isLeaf();
};

// constructor

template <typename T>
BinaryTree<T>::BinaryTree(T rootobj) {
    // add a value to the keu
    key = rootobj;

    // set your left and right child to nullptr
    leftChild = nullptr;
    rightChild = nullptr;

}

//Inserting left:
template<typename T>
void BinaryTree<T>::insertLeft(T newNode){

    if(leftChild == nullptr){
        //CREATE A NEW NODE
        leftChild = new BinaryTree<T>(newNode);
        return;

    }else{
        leftChild = new BinaryTree<T>(newNode);

        //moves the existing left child below the new node;
        leftChild->leftChild = leftChild;

        //make the new node the left child;
        leftChild = leftChild;
    }

}

// Inserting right:
template<typename T>
void BinaryTree<T>::insertRight(T newNode){

    if(rightChild == nullptr){
        //CREATE A NEW NODE
        rightChild = new BinaryTree<T>(newNode);
        return;
    }
    else{
        rightChild = new BinaryTree<T>(newNode);

        //moves the existing right child below the new node;
        rightChild->rightChild = rightChild;

        //make the new node the right child;
        rightChild = rightChild;
    }

}

// accessing the child node
template<typename T>
BinaryTree<T>* BinaryTree<T>::getLeftChild(){
 return leftChild;
}


 template<typename T>
 BinaryTree<T>* BinaryTree<T>::getRightChild(){
    return rightChild;
 }

 template<typename T>
 void BinaryTree<T>::setRootVal(T obj){
    key = obj;   
 }

template <typename T>
T BinaryTree<T>::getRootVal(){
    return key;
}

//checking if leaf

template<typename T>
    bool BinaryTree<T>::isLeaf(){
        
        return leftChild == nullptr && rightChild == nullptr;
}
#endif