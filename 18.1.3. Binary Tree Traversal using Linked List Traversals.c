void push(BTNODE b) {
	BTNODE current = peek();
	if(prev == NULL || prev->left == current || prev->right == current)
	{
		if(current->left != NULL)
		{
			push(current->left);
		}
		else if(current -> right != NULL)  {
			push(current->right);
			
		}
	else{
		pop();
		printf("%d ",current->data);}
	}
	else if(current->left==prev){
		if(current->right!=NULL){
			push(current->right);
		}
		else{
			pop();
		printf("%d ",current->data);
		}
	}
	else if (current -> right == prev){
		pop();
		printf("%d ",current->data);
	}
	prev=current;
	}
	printf("\n");

	// Write the postorder() traversal function, and you are free to write your own utility functions
	// Required to complete the postorder traversal without using recursion
	
}
