#include<stdio.h>
#include<gmp.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<cmath>
#include<stdint.h>
#define ARRAYWIDTH 8
#define ARRAYHEIGHT 8
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
	fp = fopen("./test_matrix_8_8.data", "w+");
	if (fp == NULL) 
	{
		printf("Fail to open file\n");
		return;
	}

	int a = 1;
	srand(time(NULL));
	for (int i = 0 ; i < ARRAYHEIGHT; i++)
		for (int j = 0; j < ARRAYWIDTH; j++)
		{
			// matA[i][j] = rand() % (uint8_t)pow(2, DATASIZE); 
			// matB[i][j] = rand() % (uint8_t)pow(2, DATASIZE); 
			matA[i][j] = a; 
			matB[i][j] = a++; 
		}
	
	for (int i = 0; i < ARRAYHEIGHT; i++)
		for (int j = 0 ;j < ARRAYWIDTH; j++)
			for (int k = 0 ;k < ARRAYHEIGHT; k++)
				matY[i][j] += (uint16_t)matA[i][k] * (uint16_t)matB[k][j];
	fprintf(fp, "MatrixA\n");
	for (int i = 0; i < ARRAYHEIGHT; i++)
	{
		for (int j = ARRAYWIDTH-1; j >= 0; j--)
		{
			fprintf(fp, "%02x",matA[i][j]);
		}
		fprintf(fp, "\n");
	}
	fprintf(fp, "MatrixB\n");
	for (int i = 0; i < ARRAYHEIGHT; i++)
	{
		for (int j = ARRAYWIDTH-1; j >= 0; j--)
		{
			fprintf(fp, "%02x",matB[i][j]);
		}
		fprintf(fp, "\n");
	}
	fprintf(fp, "MatrixResult\n");
	for (int i = 0; i < ARRAYWIDTH; i++)
	{
		for (int j = ARRAYWIDTH-1; j >= 0; j--)
		{
			fprintf(fp, "%04x",matY[i][j]);
		}
		fprintf(fp, "\n");
	}
	fclose(fp);
}
void read_data()
{
	FILE* fp;
	mpz_t a;
	mpz_init(a);
	fp = fopen("./test_matrix_8_8.data", "r");
	if (fp == NULL) 
	{
		printf("Fail to open file\n");
		return;
	}
	char str[1024];
	char* endptr;
	fscanf(fp, "%s", str);
	for (int i = 0; i < ARRAYHEIGHT; i++)
	{
		fscanf(fp, "%s", str);
		printf("%s\n",str);
		mpz_init_set_str(a, str, 16);
		gmp_printf("%Zd\n",a);
		// printf("%016lx\n", strtol(str, &endptr, 16));
	}
	fscanf(fp, "%s", str);
	for (int i = 0; i < ARRAYHEIGHT; i++)
	{
		fscanf(fp, "%s", str);
		printf("%016lx\n", strtol(str, &endptr, 16));
	}
	fscanf(fp, "%s", str);
	for (int i = 0; i < ARRAYHEIGHT; i++)
	{
		fscanf(fp, "%s", str);
		printf("%032lx\n", strtol(str, &endptr, 16));
	}

	fclose(fp);

}
int main()
{
	gen_test_mat();
	read_data();
	return 0;
}
