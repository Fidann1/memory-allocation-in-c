#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct contacts{
	unsigned long long int number;
	char whole_name[50];	
};

int main(){
	char nam[30];
	printf("Please enter your name:\n");
	scanf("%s",nam);
  
    printf("Hi %s,Welcome to CONTACT MANAGEMENT SYSTEM ,Iam here to help you for creating and managing your contact list.Lets get into it\n",nam);
	int size;
	printf("Firstly,lets create contact list");
	printf("Enter how many contacts you are gonna add ");
	scanf("%d",&size);
    struct contacts *c=(struct contacts*)malloc(size*sizeof(struct contacts));
	for(int i=0;i<size;i++){
		printf("Enter the name of contact\n");
		scanf("%s",c[i].whole_name );
		printf("Enter the number of contact\n");
		scanf("%llu",&c[i].number );	}
		
	printf("Your contact was created successfully.\n");	

	
	
while(1==1)	{
		int n;
	
printf("\nWhich operation do you want to do(*please enter the number):\n1.Display all contacts;\n2.Search contact;\n3.Add new contact;\n4.Delete contact;\n");
	scanf("%d",&n);	
		
	if(n==3){  printf("Enter how many contacts you want to add");
	int new_size;
	scanf("%d",&new_size);
	new_size=new_size+size;
    c=(struct contacts*)realloc(c,new_size*sizeof(struct contacts));
	 	for(int i=size;i<new_size;i++){
		printf("Enter the name of contact\n");
		scanf("%s",c[i].whole_name );
		printf("Enter the number of contact\n");
		scanf("%d",&c[i].number );
	}	}
				

	if(n==1){
	
	printf("Displaying Information\n");
	for(int i=0;i<size;i++){
		printf("%s - %d\n",c[i].whole_name ,c[i].number);
	}
	

}

 if(n==2){
 
 printf("Enter the contact's name u want to search");
 char search[50];
 scanf("%s",search);
 for(int i=0;i<size;i++){
 	
 	if(strcasecmp(search,c[i].whole_name)==0){	
		printf("%s - %d\n",c[i].whole_name ,c[i].number);
	 }
 	
 }
}
if(n==4){   
printf("What is the index of contact you want to delete?");
int l;
scanf("%d",&l);
l=l-1;
for(int i=l;i<size-1;i++){
	c[i]=c[i+1];
	
}
size--;
}}
free(c);
}
	

