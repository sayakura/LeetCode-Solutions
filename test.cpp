#include <iostream>
#include <vector>
#include <string>
using namespace std;
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

int main()
{
	vector<int> arr;
	for (int i = 1; i < 11; i++)
		arr.push_back(i);
	vector<int> left;
	left.assign(arr.begin(), arr.begin() + arr.size() / 2 - 1);
	vector<int> right;
	right.assign(arr.begin() + arr.size() / 2, arr.end());
	for (int i = 0; i < left.size(); i++)
		cout << to_string(left[i]) << endl;
	for (int i = 0; i < right.size(); i++)
		cout << to_string(right[i]) << endl;
	TreeNode *temp = new TreeNode(100);
	cout << to_string(temp->val) << endl;
	return (0);
}
