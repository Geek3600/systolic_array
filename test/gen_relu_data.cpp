#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<cmath>
#include<stdint.h>
#define ARRAYWIDTH 16
#define ARRAYHEIGHT 16
#define DATASIZE 8


void gen_test_data()
{
    int32_t in[ARRAYWIDTH];
    int32_t out[ARRAYWIDTH];
	FILE* fp = NULL;
	fp = fopen("./relu_data", "w+");
	FILE* fp_res = NULL;
	fp_res = fopen("./relu_data_res", "w+");
	if (fp == NULL || fp_res == NULL) 
	{
		printf("Fail to open file\n");
		return;
	}

    for (int i = 0; i < ARRAYWIDTH; i++)
    {
        in[i] = (rand() % (uint32_t)pow(2, 16) - ((uint32_t)pow(2, 16)/2)); 
        printf("%d ", in[i]);
        out[i] = in[i] > 0 ? in[i] : 0;        
    }
    printf("\n");
    for (int i = 0; i < ARRAYWIDTH; i++)
    {
        out[i] = in[i] > 0 ? in[i] : 0;
        printf("%d ", out[i]);        
    }
    for (int i = 0; i < ARRAYWIDTH; i++)
    {
        fprintf(fp, "%08x", in[i]);
        fprintf(fp_res, "%08x", out[i]);
    }
	
	fclose(fp);
	fclose(fp_res);
}
int main()
{
	gen_test_data();
	return 0;
}
