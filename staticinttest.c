#include <stdio.h>
#include <stdlib.h>

#define sizeofarray 5
#define SWQ(x) (x * x)

float triangle(float width, float height);

int main(void)
{	
	int whileloop=0;
	FILE *filename;    /* I'm openning a file*/
	//FILE *filebin;
	filename = fopen("input.txt", "wr");
	//filebin = fopen("binary.out","w");
	int index;
	double example = 786;
	double product;	
	char string[50] ="Hi my name is nick, nice to meet you. \n";
	int cur_char;
	int ch;
	register int abc, xyz;
	int count_char = 0;    //counting the characters in the wordy file

	if(filename == NULL)
	{
		printf("Unable to open input file. \n");
	}
	/*if(filebin == NULL)
	{
		printf("Unable to open input file. \n");
	}*/

	while(whileloop<500)  //writing my name 500 times to the file
	{
		fputs(string,filename);
		++whileloop;
	}
	/*(for( cur_char = 0; cur_char < 128 ; ++cur_char)
	{
		fputc(cur_char, filebin);
	}*/
	for( index = 0; index < sizeofarray; ++index)
	{
	  int test1 = 2;
	  static int test2 = 2;
	  printf("Test1 variable is equal to : %d Test2 variable is equal to: %d \n", test1, test2);
          ++test1;
	  ++test2;
	}
	
	while(1)
	{
	  	ch = fgetc(filename);
		if(ch == EOF)
		  break;		
                ++count_char;
	}
	float width = 5;
	float height = 6;
	float resultant;

	resultant = triangle(5 , 6);

	printf("The area of the triangle is %lf \n", resultant);
	
	product = SWQ(example);

	printf("The result of SWQ is : %G \n", product);

	printf("The number of characters in the file, input.txt, is : %d \n", count_char);

	fclose(filename);
	return(0);
}



float triangle(float width, float height)
{
	float result;
	result = (width * height)/2;
	


 	return result;
}


