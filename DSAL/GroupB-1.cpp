#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Node {
  string label;
  int childCount;
  std::vector<Node*> children;
};

class Tree {
public:
  Node* root = NULL;

  void createTree() {
    root = new Node;
    cout << "Enter Name of Book\n";
    cin >> root->label; 
    cout << "Enter Number of Chapters in Book\n";
    cin >> root->childCount;
    cin.ignore(); 

    for (int i = 0; i < root->childCount; ++i) {
      root->children.push_back(new Node);
      cout << "Enter Chapter Name\n";
      cin >> root->children[i]->label;
      cout << "Enter Number of sections in chapter\n";
      cin >> root->children[i]->childCount;
      cin.ignore();

      for (int j = 0; j < root->children[i]->childCount; ++j) {
        root->children[i]->children.push_back(new Node);
        cout << "Enter Section Name\n";
        cin >> root->children[i]->children[j]->label;
        cout << "Enter Number of SubSections in Section\n";
        cin >> root->children[i]->children[j]->childCount;
        cin.ignore();

        for (int k = 0; k < root->children[i]->children[j]->childCount; ++k) {
          root->children[i]->children[j]->children.push_back(new Node);
          cout << "Enter SubSection Name\n";
          cin >> root->children[i]->children[j]->children[k]->label;
        }
      }
    }
  }

  void display(const Node* node) {
    if (node != nullptr) {
      cout << "\n\nYour Book -------->\n\n";
      cout << "Book Title : " << node->label << endl;
      cout << "\nNumber of chapters: " << node->childCount << endl;

      for (int i = 0; i < node->childCount; ++i) {
        cout << "\n" << "Chapter Name : " << node->children[i]->label <<"\n|\n|"<< endl;
        for (int j = 0; j < node->children[i]->childCount; ++j) {
          cout << "   " << "Section Name : " << node->children[i]->children[j]->label <<"\n   |\n   |"<< endl;
          for (int k = 0; k < node->children[i]->children[j]->childCount; ++k) {
            cout << "       " << "SubSection Name : " << node->children[i]->children[j]->children[k]->label <<"\n       |\n       |"<< endl;
          }
        }
      }
    }
  }
};

int main() {
  Tree obj1;
  obj1.createTree();
  obj1.display(obj1.root);
  return 0;
}
