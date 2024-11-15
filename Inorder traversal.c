// Program for linked implementation of complete binary tree 
        // Dequeue() it. 
        if (hasBothChild(front)) 
        {
                Dequeue(queue);
        }
    } 
    // Enqueue() the new node for later insertions 
            Enqueue(temp, queue); 
} 
  
// Standard level order traversal to test above function 
void levelOrder(struct node* root) 
{ 
    struct Queue* queue = createQueue(SIZE); 
    Enqueue(root, queue); 
    while (!isEmpty(queue)) 
    { 
        struct node* temp = Dequeue(queue); 
        printf("%d ", temp->data); 
        if (temp->left) 
            Enqueue(temp->left, queue); 
        if (temp->right) 
            Enqueue(temp->right, queue); 
    } 
}

// Driver program to test above functions 
int main() 
{
    struct node* T1 = NULL; 
    struct Queue* queue1 = createQueue(SIZE); 
    int ele;
   
    while(1){
       printf("Enter value : ");
       scanf("%d",&ele);
    if(ele==-1){
        break;
    } 
    else{
           insert(&T1, ele, queue1); 
       }
    }
    inorder(T1);
    printf("\n");
    preorder(T1);
    printf("\n");
    postorder(T1);
}
