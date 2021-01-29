struct BST
    key::Int
    left::Union{BST, Nothing}
    right::Union{BST, Nothing}
end

BST(key::Int) = BST(key, Nullable{BST}(), Nullable{BST}())
BST() = BST(0)

root = BST()

