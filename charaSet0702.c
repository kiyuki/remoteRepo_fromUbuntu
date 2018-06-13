/*
 * =====================================================================================
 *
 *       Filename:  charaSet0702.c
 *       *
 *    Description:  
 *    
 *
 *        Version:  1.0
 *        Created:  2018年06月13日 16時29分57秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>

union single_data{
	unsigned int u;
	int i;
	float f;
	unsigned char c[4];
}x;

union double_data{
	double d;
	unsigned char c[8];
}xx;


