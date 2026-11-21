template <int K>
struct PointType {
    float coord[K];
};

template <int K>
struct TreeNode {

    PointType<K>  point;
    TreeNode *leftson, rightson;
    int axis;

    int treesize, invalidnum;
    bool deleted, treedeleted, pushdown;
    float range[K][2];

};








