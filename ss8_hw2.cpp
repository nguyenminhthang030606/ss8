#include <stdio.h>
int main (){
	int array [5]={7,8,13,55,23};
	int num,found =0 ;
	printf ("phan tu trong mang la:");
		scanf ("%d",&num);
	for (int i=0;i<5;i++){
		if (array[i]==num){
			printf ("vi tri phan tu trong mang la: %d\n",i);
			found=1;
			break;			 
		}		
	} 
		if(!found){
			printf ("phan tu khong ton tai"); 
	    }
		 
	return 0; 
} 
