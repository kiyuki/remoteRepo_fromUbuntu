/*
 * =====================================================================================
 *
 *       Filename:  sort6.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2018年06月13日 14時52分33秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 *======================================================================================/*/

#include <stdio.h>

int bubleSort(int *dataSet, int sizeOfData);
void showData(int *dataSet, int sizeOfData);
int main(void);

int data[]={5,3,7,2,6,1};

int bubleSort(int *dataSet, int sizeOfData)
{
	int i, j, temp;
	for(int outer=0; outer< sizeOfData- 1; outer++){
		for(int inner=sizeOfData-1;inner> outer; inner--){
			if(dataSet[inner] < dataSet[inner-1]){
				temp = dataSet[inner];
				dataSet[inner] = dataSet[inner-1];
				dataSet[inner -1] = temp;			
			}
		}
	}

}

void showData(int *dataSet, int sizeOfData){
	for(int i=0; i<sizeOfData; i++){
		printf("%d\n",dataSet[i]);
	}
}

int main(void){
	bubleSort(data, 6 /* sizeof(data)/sizeof(int) */);
	showData(data, 6 /*  sizeof(data)/sizeof(int) */);
}


