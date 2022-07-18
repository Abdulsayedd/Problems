#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int size;
    int total;
    int index;
    vector<Node*> child;
    Node(int index, int size)
        :
        size(size),
        total(size),
        index(index)
    {}
};
int calculateTotal(Node* root)
{
    if(root->child.empty()) return root->size;
    for(Node* node : root->child) {
        root->total += calculateTotal(node);
    }
    return root->total;
}
void mostBalancedUtil(Node* root, const int total , int& diff)
{
    if(root == NULL) return;
    int d = abs(total - 2 * root->total);
    if(d < diff) diff = d;
    for(Node* child : root->child)
        mostBalancedUtil(child, total, diff);
}
int mostBalancedPartition(vector<int> parent, vector<int> files_size) {
    vector<Node*> nodes(parent.size());
    Node* root = NULL;
    for(int i = 0; i < parent.size(); ++i) {
        Node* node = new Node(i, files_size[i]);
        nodes[i] = node;
        if(parent[i] != -1) {
            nodes[parent[i]]->child.push_back(node);
        } else {
            root = node;
        }
    }
    int total = calculateTotal(root);
    int diff = total;
    mostBalancedUtil(root, total, diff);
    return diff;
}
int main()
{
    int P_C; cin >> P_C;
    vector<int> parent(P_C);
    for (int i = 0; i < P_C; i++) {
        cin >> parent[i];
    }
    int files_size_count; cin >> files_size_count;
    vector<int> files_size(files_size_count);
    for (int i = 0; i < files_size_count; i++) {
        cin >> files_size[i];
    }
    int result = mostBalancedPartition(parent, files_size);
    cout << result << "\n";
    return 0;
}
