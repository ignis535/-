import sys
sys.stdin = open("input.txt", 'r')

def preorder(node):
    if node > 7:
        return
    else:
        print(node, end = ' ')
        preorder(2 * node)
        postorder(2 * node + 1)

def inorder(node):
    if node > 7:
        return 
    else:
        inorder(2 * node)
        print(node, end = ' ')
        inorder(2 * node + 1)

def postorder(node):
    if node > 7:
        return
    else:
        postorder(2 * node)
        postorder(2 * node + 1)
        print(node, end = ' ')

if __name__ == "__main__":
    print("전위순회 출력: ", end = "")
    preorder(1)
    print()
    print("중위순회 출력: ", end = "")
    inorder(1)
    print()
    print("후위순회 출력: ", end = "")
    postorder(1)
