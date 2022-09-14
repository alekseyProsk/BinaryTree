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

};

int main()
{


	return 0;
}