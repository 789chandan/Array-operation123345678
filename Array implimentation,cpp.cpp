#include<stdio.h>
int main(){
int arr[50],size,pos,ele;
printf("Enter the size of array:");
scanf("%d",&size);
/*
if(size<=0 || size>50){
    printf("Invalid size");
}else if(size>0){
*/
printf("Enter the %d element to insert",size);

for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}

printf("The elment of array are:");
for(int i=0;i<size;i++){
    printf("%d",arr[i]);
    printf(" ");
}

// Deletion from particular position of an array
printf("Enter the position to delete");
scanf("%d",&pos);

/*for(int i=pos-1;i<size-1;i++){
	arr[i]=arr[i+1];
}
size--;
*/
//deletion from begining
/*
for(int i=0;i<size-1;i++){
	arr[i]=arr[i+1];
}
size--;
*/
/*
// delete element from firs 
for(int i=0;i<size-1;i++){
	arr[i]=arr[i+1];
}
size--;
*/
size--;
/*
printf("Entert the position to insert");
scanf("%d",&pos);
*/
//printf("Enter the element to insert");
//scanf("%d",&ele);
// insertion an element at particular position of array
/*
for(int i=size-1;i>=pos;i--){
    arr[i+1]=arr[i];
}
    arr[pos-1]=ele;
    size++;
*/
// insertion at begining
/*
for (int i=size-1;i>=0;i--){
	arr[i+1]=arr[i];
}
arr[0]=ele;
size++;
*/
//insertion at end
/*
for(int i=0;i>=size-1;i++)
{
	arr[i+1]=arr[i];
}
arr[size]=ele;
size++;
*/
for(int i=0;i<size;i++){
    printf("%d",arr[i]);
    printf(" ");
}
    return 0;
}
