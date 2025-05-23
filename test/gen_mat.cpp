#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<cmath>
#include<stdint.h>
#define ARRAYWIDTH 16
#define ARRAYHEIGHT 16
#define DATASIZE 8
int8_t matA[ARRAYHEIGHT][ARRAYWIDTH];
int8_t matB[ARRAYHEIGHT][ARRAYWIDTH];
int32_t matY[ARRAYHEIGHT][ARRAYWIDTH];

void gen_test_mat()
{
	FILE* fp = NULL;
	fp = fopen("./dat16_relu", "w+");
	FILE* fp_res = NULL;
	fp_res = fopen("./dat16_relu_res", "w+");
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
				matY[i][j] += matB[i][k] * matA[k][j];
	for (int i = 0; i < ARRAYHEIGHT; i++)
	{
		for (int j = ARRAYWIDTH-1; j >= 0; j--)
		{
			fprintf(fp, "%02x",(uint8_t)matA[i][j]);
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
			fprintf(fp, "%02x",(uint8_t)matB[i][j]);
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
			if (matY[i][j] < 0)
			{
				fprintf(fp_res, "%08x",0);
				printf("%d ", 0);
			}
			else
			{
				fprintf(fp_res, "%08x",matY[i][j]);
				printf("%d ", matY[i][j]);
			}
				
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
	// int8_t a = -127;
	// int8_t b = 1;
	// int32_t c = a* b;
	// printf("%x\n",c);
	return 0;
}
