#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<cmath>
#include<algorithm>
#include<stdint.h>
#define ARRAYWIDTH 16
#define ARRAYHEIGHT 16
#define DATASIZE 8


void gen_test_data()
{
    int32_t in[ARRAYWIDTH];
	FILE* fp = NULL;
	fp = fopen("./sort_data", "w+");
	FILE* fp_res = NULL;
	fp_res = fopen("./sort_data_res", "w+");
	if (fp == NULL || fp_res == NULL) 
	{
		printf("Fail to open file\n");
		return;
	}
    for (int i = 0; i < ARRAYWIDTH; i++)
    {
        in[i] = (rand() % (uint32_t)pow(2, 32)); 
        printf("%d ", in[i]);
    }
    for (int i = 0; i < ARRAYWIDTH; i++)
    {
        fprintf(fp, "%08x", in[i]);
    }
    printf("\n");
    std::sort(in, in+16);
    for (int i = 0; i < ARRAYWIDTH; i++)
    {
        printf("%d ", in[i]);
    }
    for (int i = 0; i < ARRAYWIDTH; i++)
    {
        fprintf(fp_res, "%08x", in[i]);
    }
	
	fclose(fp);
	fclose(fp_res);
}
int main()
{
	gen_test_data();
	return 0;
}
