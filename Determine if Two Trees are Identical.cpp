bool isIdentical(Node *r1, Node *r2)
    {
        if(r1 == NULL || r2 == NULL)
            return r1 == r2;

        bool left_node = isIdentical(r1->left , r2->left);
        bool right_node = isIdentical(r1->right , r2->right);

        return r1->data == r2->data && left_node && right_node;
    }
