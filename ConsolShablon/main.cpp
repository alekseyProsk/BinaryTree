#include <iostream> 

using namespace std;

class BinarTree
{
public:
	BinarTree() = default;
	BinarTree(int data) 
	{
		root = new Node(data);
	}
	
	void print()
	{
		_print(root);
	}

	void insert(int data)
	{
		_insert(data, root);
	}
	~BinarTree()
	{
		_del(root);
	}
private:
	class Node
	{
	public:
		Node(int data) : data{ data }, left{ nullptr }, right{ nullptr }{}
		int data;
		Node* left;
		Node* right;
		
	
	};
	Node* root;
	void _print(Node* branch)
	{
		if (branch != nullptr)
		{
			
			cout << branch->data << endl;
			_print(branch->left);
			_print(branch->right);
		}
	}

	void _insert(int data, Node*& branch)
	{
		if (branch != nullptr)
		{
			if (data > branch->data)
				_insert(data, branch->right);
			else if (data < branch->data)
				_insert(data, branch->left);
		}
		else
			branch = new Node(data);
	}
	void _del(Node*& branch)
	{
		if (branch != nullptr)
		{
			_del(branch->left);
			_del(branch->right);
			delete branch;
		}
	}

};

int main()
{
	BinarTree tree;

	tree.insert(5);
	tree.insert(4);
	tree.insert(7);
	tree.print();

	return 0;
}