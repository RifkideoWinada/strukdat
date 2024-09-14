#include <iostream>

// Struktur untuk Node pohon biner
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Fungsi rekursif untuk membuat node baru
Node* buatNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

// Fungsi rekursif untuk inorder traversal
void inorderTraversal(Node* root) {
    if (root == nullptr) { // Kondisi dasar
        return;
    }
    inorderTraversal(root->left); // Traverse subpohon kiri
    std::cout << root->data << " "; // Cetak data node
    inorderTraversal(root->right); // Traverse subpohon kanan
}

int main() {
    // Membuat pohon biner
    Node* root = buatNode(1);
    root->left = buatNode(2);
    root->right = buatNode(3);
    root->left->left = buatNode(4);
    root->left->right = buatNode(5);

    std::cout << "Inorder traversal dari pohon biner: ";
    inorderTraversal(root);
    std::cout << std::endl;

    return 0;
}
