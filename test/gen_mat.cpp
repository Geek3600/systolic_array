#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<cmath>
#include<stdint.h>
#define ARRAYWIDTH 64
#define ARRAYHEIGHT 64
#define DATASIZE 8
uint8_t matA[ARRAYHEIGHT][ARRAYWIDTH];
uint8_t matB[ARRAYHEIGHT][ARRAYWIDTH];
uint32_t matY[ARRAYHEIGHT][ARRAYWIDTH];
long unsigned int matrixA[ARRAYHEIGHT];
long unsigned int matrixB[ARRAYHEIGHT];
long unsigned int matrixY[ARRAYHEIGHT];
void gen_test_mat()
{
	FILE* fp = NULL;
	fp = fopen("./dat4", "w+");
	FILE* fp_res = NULL;
	fp_res = fopen("./dat4_res", "w+");
	if (fp == NULL || fp_res == NULL) 
	{
		printf("Fail to open file\n");
		return;
	}

	int a = 1;
	srand(time(NULL));
	for (int i = 0 ; i < ARRAYHEIGHT; i++)
		for (int j = 0; j < ARRAYWIDTH; j++)
		{
			matA[i][j] = rand() % (uint8_t)pow(2, DATASIZE); 
			matB[i][j] = rand() % (uint8_t)pow(2, DATASIZE); 
			// matA[i][j] = a; 
			// matB[i][j] = a++; 
		}
	
	for (int i = 0; i < ARRAYHEIGHT; i++)
		for (int j = 0 ;j < ARRAYWIDTH; j++)
			for (int k = 0 ;k < ARRAYHEIGHT; k++)
				matY[i][j] += (uint16_t)matB[i][k] * (uint16_t)matA[k][j];
	for (int i = 0; i < ARRAYHEIGHT; i++)
	{
		for (int j = ARRAYWIDTH-1; j >= 0; j--)
		{
			fprintf(fp, "%02x",matA[i][j]);
			printf("%d ",matA[i][j]);
		}
		printf("\n");
		fprintf(fp, "\n");
	}
	printf("\n");
	for (int i = 0; i < ARRAYHEIGHT; i++)
	{
		for (int j = ARRAYWIDTH-1; j >= 0; j--)
		{
			fprintf(fp, "%02x",matB[i][j]);
			printf("%d ",matB[i][j]);
		}
		printf("\n");
		fprintf(fp, "\n");
	}
	printf("\n");
	for (int i = 0; i < ARRAYWIDTH; i++)
	{
		for (int j = ARRAYWIDTH-1; j >= 0; j--)
		{
			fprintf(fp_res, "%08x",matY[i][j]);
			printf("%d ", matY[i][j]);
		}
		printf("\n");
		fprintf(fp_res, "\n");
	}

	fclose(fp);
	fclose(fp_res);
}
int main()
{
	gen_test_mat();
	return 0;
}
