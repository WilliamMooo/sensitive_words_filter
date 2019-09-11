#include <list>
#include <string>
using namespace std;

class sensitiveWords {
private:
    struct Node {
        char data;
        bool last;
        Node *sibling;
        Node *next;
    };
public:
    void getWordList(list <char*>&list_keyword);
    void ReleaseKeyWordList(list <char*>&list_keyword);
    Node* NodeHasExist(Node *cur,char data);
    Node* BuildTree();
    void ReleaseTree(Node *root);
    string LookUp(char *content,Node *root);
    string run();
};
