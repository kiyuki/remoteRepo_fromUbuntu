/*
 * =====================================================================================
 *
 *       Filename:  homework2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2018年06月12日 21時52分50秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(int argc, char *argv[]){
	int i;
	printf("argc=%d\n", argc);
	FILE *fp;
	FILE *fp2;
	char fname[] = "test.txt";
	char *writefile = "writefile.txt";
	char *filedata;
	srand((unsigned)time(NULL));
	//init_genrand((unsigned)time(NULL));
	
	fp = fopen(fname, "r"); // ファイルを開く。失敗するとNULLを返す。
	fp2 = fopen(writefile, "w");
	if(fp2 == NULL){
		printf("%s file not open! \n", writefile);
		return -1;
	} else{
		printf("%s file opened", writefile);
	}


	if(fp == NULL) {
		printf("%s file not open!\n", fname);
		return -1;
	} else {
		printf("%s file opened!\n", fname);
	}

	for(int i=0; i< 100; i++){
		fprintf(fp2,"%d\n",rand()%100 + 1);
	}
	
	for(int i=0;i < argc; i++){
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	fclose(fp);
	fclose(fp2);
	fp = fopen(writefile, "r");
	for(int i=0; fgets(filedata, 256, fp); i++){
		printf("%s\n", filedata);
	}


	return 0;
}
