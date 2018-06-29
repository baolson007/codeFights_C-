//
// Definition for binary tree:
// template<typename T>
// struct Tree {
//   Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
//   T value;
//   Tree *left;
//   Tree *right;
// };

bool isTreeSymmetric(Tree<int> * t) {
    if(!t)
        return true;
    return (symmetric(t->left, t->right));
}

bool symmetric(Tree<int> * l, Tree<int> * r){
    
    //both null
    if(l == nullptr && r == nullptr)
        return true;
    
    //not equal (if one is null, other will not be null)
    if(l == nullptr || r == nullptr || l->value != r->value)
        return false;
    
    return symmetric(l->left, r->right) && symmetric(l->right, r->left);

}