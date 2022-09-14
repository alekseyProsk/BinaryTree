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
private:
	class Node
	{
	public:
		Node(int data) : data{ data }, left{ nullptr }, right{ nullptr }{}
		Node* left;
		Node* right;
		int data;
	
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

};

int main()
{
	BinarTree tree(4);

	return 0;
}