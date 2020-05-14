//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 11
// Due date: 05/04/2020
// Collaborators: NA
// Resources: NA
// Description: The class declaration for bst
//------------------------------------------------------------------------------
//inclusion guard begins

#ifndef BST_H
#define BST_H

//struct node declaration
struct node
{
	int data;
	node *left;
	node *right;
};

//class declaration begins
class bst
{
    public:// public constructors
    bst();
    bst(const bst& srcTree);
    ~bst();

    unsigned int height() const;//public functions
    bool insert(int item);
	bool remove(int item);
	bool search(int item) const;
    void inOrderTraversal() const;
	void preOrderTraversal() const;
	void postOrderTraversal() const;

	const bst& operator=(const bst& rval);//overloaded operators
	bool operator==(const bst& rval) const;
	friend std::ostream& operator<<(std::ostream& osObj, const bst& src);
	friend std::istream& operator>>(std::istream& isObj, bst& dest);

	private://private functions
	node *root; // private member root for root node
	bool equalTrees(const node* leftTree, const node* rightTree) const;
	void destroyTree(node* p);
	void copyTree(node** destRoot, node* srcRoot);
	void removeFromTree(node** p);
	void preOrder(node* p) const;
	void inOrder(node* p) const;
	void postOrder(node* p) const;
	unsigned int treeHeight(node* p) const;
	bool isEmpty() const;
	int max(int x, int y) const;
};

//inclusion guard ends
#endif
