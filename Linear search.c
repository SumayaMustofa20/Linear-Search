#include<stdio.h>
 int main()
 {
     int a[100];
     int n,i,s; //s is key , the element which I want to search

     printf("Enter the array size: ");
     scanf("%d",&n);

     printf("Enter the elements: ");
     for(i=0; i<n; i++)
     {
         scanf("%d",&a[i]);
     }

     printf("Enter the element you want to search: ");
     scanf("%d",&s);

     for(i=0; i<n; i++)
     {
        if(a[i]==s)
        {
            printf("The value is found in %d position\n",i+1);
        }

       else if(i == n)
        {
         printf("The value is not found");
        }
     }
 return 0;
 }
