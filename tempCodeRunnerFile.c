//Merging of two arrays 
#include<stdio.h>
#include<stdlib.h>
//Creating the method that allocate the array in heap area of memory.
int*HeapMemory(int sz)
{
    int *p;
    p=(int*)malloc(sz*sizeof(int));
    return p;
}
//Scaning the values of the arrays
void Scanning(int *n,int szw)
{
  printf("Enter the values in the  array\n");
  for(int i=0;i<szw;i++)
  {
    scanf("%d",&n[i]);
  }  
}
 //Display the array
 void Display(int *j,int sze)
 {
    for(int i=0;i<sze;i++)
    {
    printf("%d\t",j[i]);
    }
 }
 //Creating the Merging function 
 void Merging(int *u,int *l,int *p,int sizA1,int sizA2)
 {
    int i=0;
    int j=0;
    int k=0;
   while(i<sizA1 && j<sizA2)
   {
    //Compare the both array element then put the smaller element on third Array
    if(u[i]<l[j])
    {
        p[k++]=u[i++];
    }
    else
    {
        p[k++]=l[j++];
    }
   }
   //To put the last element on the third array
   for(;i<sizA1;i++)
   {
    p[k++]=u[i];
   }
   for(;j<sizA2;j++)
   {
    p[k++]=l[i];
   }
 } 
int main()
{
  int size1=0;
  int size2=0;
  int size3=0;
  printf("Enter the Size of an first Array\n");
  scanf("%d",&size1);
  printf("Enter the Size of an Second Array\n");
  scanf("%d",&size2);
  printf("Enter the Size of an Third Array\n");
  scanf("%d",&size3);
  int *p1,*p2,*p3;
  //Calling the method for Heap memory allocation.
  p1=HeapMemory(size1);
  p2=HeapMemory(size2);
  p3=HeapMemory(size3);
  //Calling the scan function for enter the value in the array.
  Scanning(p1,size1);
  Scanning(p2,size2); 
  //Calling the method for Display the value of the array.  
  Display(p1,size1);
  printf("\n");
  Display(p2,size2);
  printf("\n");
  //Calling the method to perform merging.
  Merging(p1,p2,p3,size1,size2);
  printf("Display the element after merging two arrays\n");
  Display(p3,size3);
  return 0;
}