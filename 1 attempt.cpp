#include <stdio.h>
#include <stdlib.h>

int main() {
	int size;
	printf("enter the size of array\n");
    scanf("%d",&size);           
    int *ptr;
	ptr=(int*) malloc(size * sizeof(int));           
    for(int i=0;i<size;i++) { 
    printf("Enter the numbers\n");
    scanf("%d",&ptr[i]);
    
	}          
    for(int i=0;i<size;i++) {printf("%d\n",ptr[i]);
	}             
    int x;  
	printf("If you want to add new numbers enter 1 if you dont want enter 0\n");        
    scanf("%d",&x);
    if(x==1) {
	printf("Enter the new size of array\n");
	int n;
	scanf("%d",&n);
    ptr=(int*)realloc(ptr,n*sizeof(int));  
        for (int i = size; i < n; ++i) {
            printf("enter the new numbers\n");
            scanf("%d",&ptr[i]);
        }
 

        printf("The elements of the array are: ");
        for (int i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }	  
	  
}
	  
else printf("Program ended successfully");	           
               
               
               
    free(ptr);               
}
