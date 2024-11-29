#include <stdio.h>

int main(){
	
	int mang[3][4] = {
	{2, 4, 6, 8},
	{1,3, 5, 7},
	{2, 5, 8, 9}
	}; 
	int max = mang[0][0];
	for ( int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++) {
			if (mang[i][j] > max) {
				max = mang[i][j]; 
			}
		}
	} 
	printf("Phan tu lon nhat trong mang la: %d", max); 
	return 0; 
} 
