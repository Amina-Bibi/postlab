#include<stdio.h>
int main()
{
    int a[100]={0};
    int n=0;
    int s;
    int c=1;
    while(n!=3){
    printf("Type 1 for \"first class\"\nType 2 for \"economy class\"\n");
    printf("Enter 3 to exit\n");
    printf("Select type of class:");
    scanf("%d",&n);
    while((n!=1) && (n!=2) && (n!=3)){
    printf("Enter valid  id ");
    scanf("%d",&n);
    }
    if(n==1){
    printf("Select seat number (1-30): ");
    scanf("%d", &s);
   
    	if(a[s]==1)
     	   printf("Sorry Not available Enter another seat number\n");
     	   else
   
	printf("\tBoarding Pass\nClass:\"First\"\nSeat number: %d\n",s); 
	 a[s]=1;
}
    else if(n==2){
    printf("Select seat number (31-100):");
    scanf("%d", &s);
  
     	if(a[s]==1)
     	   printf("Sorry Not available \n");
     
  else
    	printf("\tBoarding Pass\nClass:\"First\"\nSeat number: %d\n",s); 
    	 a[s]=1;
    
}
}
printf("Good bye!");

      return 0;
}
