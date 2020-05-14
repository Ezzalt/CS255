//------------------------------------------------------------------------------
// Name: Nayan Bhattacharyya
// Course-Section: CS 255-01
// Assignment: Assignment 11
// Due date: 05/04/2020
// Collaborators: NA
// Resources: NA
// Description: The class implementation for bst.h
//------------------------------------------------------------------------------

#include<iostream>
#include "bst.h"

using namespace std;

//class implementation begins
//------------------------------------------------------------------------------
/* bst() - default constructor
*/

bst :: bst() : root(NULL){}

//------------------------------------------------------------------------------
/* bst(const bst& srcTree) - copy constructor
*/

bst :: bst(const bst& srcTree)
{
	if (srcTree.isEmpty())
		root = NULL;
	else
 		copyTree(&root, srcTree.root);
}

//------------------------------------------------------------------------------
/* ~bst() - destructor
*/

bst :: ~bst()
{
	destroyTree(root);
}

unsigned int bst :: height () const
{
	return treeHeight(root);
}

//------------------------------------------------------------------------------
/* bool insert(int value) - method to insert a value
    input - int value - value to be input
    output - bool value of success
*/
bool bst :: insert(int value)
{
	node* current;
	node* temp = NULL;
	node *newNode;
	newNode = new (std::nothrow) node;

	newNode->data  = value;
	newNode->left = newNode->right = NULL;

	if(isEmpty())
    	root = newNode;

	else
	{
		current = root;
		while(current != NULL)
		{
			temp = current;
			if(value > current->data)
        		current = current->right;

    		else if(value < current->data)
        		current = current->left;
			else
				return false;
		}
		if(value > temp->data)
            temp->right = newNode;
        else
            temp->left = newNode;
	}


    return true;
}

//------------------------------------------------------------------------------
/* bool search(int value) - method to search a value
    input - int value - value to be searched
    output - bool value of success
*/

bool bst::search(int item) const
{
	node *current;
	bool found = false;

	if (isEmpty())
		cout << "Cannot search an empty tree." << endl;
	else
	{
		current = root;
		while (current != NULL && !found)
		{
			if (current->data == item)
				found = true;
			else if (current->data > item)
				current = current->left;
			else
				current = current->right;
		}
 	}
 return found;
}


//------------------------------------------------------------------------------
/* bool remove(int value) - method to remove a value
    input - int value - value to be removed
    output - bool value of success
*/

bool bst::remove(int item)
{
	node *current;
	node* previous;
	if(!search(item))
    {
        cout << "Item not present in tree!!" << endl;
        return false;
    }
	else
	{
		current = root;
		previous = root;
		while (current != NULL)
		{
			if(current->data == item)
				break;
            else
            {
                previous = current;
                if (current->data > item)
                    current = current->left;
                else
                    current = current->right;
            }

		}
        if(current == root)
            removeFromTree(&root);
		else if(previous->data > item)
            removeFromTree(&(previous->left));
        else
            removeFromTree(&(previous->right));
		return true;
	}
}

//------------------------------------------------------------------------------
/* void inOrderTraversal() - method to call inOrder() with root of object
*/

void bst :: inOrderTraversal() const
{
	inOrder(root);
}


//------------------------------------------------------------------------------
/* void preOrderTraversal() - method to call preOrder() with root of object
*/
void bst :: preOrderTraversal() const
{
	preOrder(root);
}


//------------------------------------------------------------------------------
/* void postOrderTraversal() - method to call postOrder() with root of object
*/
void bst :: postOrderTraversal() const
{
	postOrder(root);
}

//------------------------------------------------------------------------------
/* operator= - Overloaded - (assignment) to assign the two value of one tree
    variable to another
  output - the pointer reference for assigned values
*/
const bst& bst :: operator=(const bst &rval)
{
	if (rval.isEmpty())
		root = NULL;
	else
 		copyTree(&root, rval.root);
    return *this;
}

//------------------------------------------------------------------------------
/* operator== - Overloaded - (equality) to check if the two trees are equal
  output - bool true or false
*/
bool bst::operator==(const bst &rval) const
{
	return equalTrees(root, rval.root);
}

//------------------------------------------------------------------------------
/* operator<< - Overloaded - (insertion) to output tree in inOrder format
  output - ostream object
*/
ostream& operator<<(ostream& osObj, const bst& src)
{
	src.inOrderTraversal();
	return osObj;
}

//------------------------------------------------------------------------------
/* operator>> - Overloaded - (extraction) to add node to tree
  output - istream object
*/
istream& operator>>(istream& isObj, bst& dest)
{
	int c = 0;
	cout << "Input Data To be entered: ";
	isObj >> c;
	if(dest.insert(c))
		cout << "Data inserted" << endl;
	else
		cout << "Memory allocation failed!!" << endl;
    return isObj;
}


//------------------------------------------------------------------------------
/* bool equalTrees(const node* leftTree, const node* rightTree) -
    to check if the two trees are equal recursively
  output - bool true or false
*/
bool bst :: equalTrees(const node* leftTree, const node* rightTree) const
{
	if (leftTree == NULL && rightTree == NULL)
        return true;

    else if (leftTree != NULL && rightTree == NULL)
		return false;
    else if (leftTree == NULL && rightTree != NULL)
		return false;
    else
	{
        if (leftTree->data == rightTree->data &&
			equalTrees(leftTree->left, rightTree->left)
            && equalTrees(leftTree->right, rightTree->right))
            return true;
        else
            return false;
    }
}

//------------------------------------------------------------------------------
/* void destroyTree(node* p) - to destroy nodes of tree
 */
void bst :: destroyTree(node* p)
{
	if(p != NULL)
	{
		destroyTree(p->left);
		destroyTree(p->right);
		delete p;
		p = NULL;
	}
}

//------------------------------------------------------------------------------
/* void copyTree(node** destRoot, node* srcRoot) - to copy nodes of tree to
    another
 */
void bst :: copyTree(node** destRoot, node* srcRoot)
{
	if (srcRoot == NULL)
		*destRoot = NULL;
 	else
	{
		*destRoot = new (std :: nothrow) node;
		(*destRoot)->data = srcRoot->data;
		copyTree(&(*destRoot)->left, srcRoot->left);
		copyTree(&(*destRoot)->right, srcRoot->right);
	}
}

//------------------------------------------------------------------------------
/* void removeFromTree(node** p) - to remove nodes of tree as a support for
    remove()
 */
void bst::removeFromTree(node** p)
{
	node* current;
	node* previous;
	node* temp = NULL;

	if (*p == NULL)
		cout << "Node does not exist!" << endl;
	else if ((*p)->left == NULL && (*p)->right == NULL)
	{
		temp = *p;
		*p = NULL;
		delete temp;
	}
	else if ((*p)->left == NULL)
	{
		temp = *p;
		*p = temp->right;
		delete temp;
	}
	else if ((*p)->right == NULL)
	{
		temp = *p;
		*p = temp->left;
		delete temp;
	}
	else
	{
		current = (*p)->left;
		previous = NULL;
		while (current->right != NULL)
		{
			previous = current;
			current = current->right;
		}

		(*p)->data = current->data;

		if (previous == NULL)
			(*p)->left = current->left;
		else
			previous->right = current->left;

		delete current;
	}
}


//------------------------------------------------------------------------------
/* void inOrder(node* p) - inOrder traversal recursively
 */
void bst :: inOrder(node *p) const
{
    if(p == NULL)
    {
        return;
    }
    inOrder(p->left);
    cout << p->data << endl;
    inOrder(p->right);
}

//------------------------------------------------------------------------------
/* void preOrder(node* p) - preOrder traversal recursively
 */
void bst :: preOrder(node *p) const
{

    if(!p)
    {
        return;
    }
    cout << p->data << endl;
	preOrder(p->left);
    preOrder(p->right);
}

//------------------------------------------------------------------------------
/* void postOrder(node* p) - postOrder traversal recursively
 */
void bst :: postOrder(node *p) const
{

    if(!p)
    {
        return;
    }
	postOrder(p->left);
    postOrder(p->right);
	cout << p->data << endl;
}

//------------------------------------------------------------------------------
/* unsigned int treeHeight(node *p) - returns the height of tree
    output - return value unsigned int height of tree
 */
unsigned int bst :: treeHeight(node *p) const
{
	if (p == NULL)
		return 0;
	else
		return 1 + max(treeHeight(p->left), treeHeight(p->right));
}

//------------------------------------------------------------------------------
/* bool isEmpty() - checks if tree is empty
    output - return true or false accordingly
 */
bool bst::isEmpty() const
{
	return (root == NULL);
}

int bst :: max(int x, int y) const
{
	int max = (x > y) ? x : y;
	return max;
}
