#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "test.h"

int main(void)
{
  FILE* fp;
  int ulaz,led;
  
  
  fp = fopen("/dev/led", "w");
  if(fp == NULL)
    {
      printf("Cannot open /dev/led for write\n");
      return -1;
    }
	
	printf("Unesite broj od 1 do 8");
	scanf("%d",ulaz);
	switch(ulaz)
	{
	 case 1 : 
		led = 1;
		fprintf(fp,"%x",led);
		fclose(fp);
		break;
		
	 case 2 : 
		led = 2;
		fprintf(fp,"%x",led);
		fclose(fp);
		break;
		
	 case 3 : 
		led = 3;
		fprintf(fp,"%x",led);
		fclose(fp);
		break;
	
	 case 4 : 
		led = 4;
		fprintf(fp,"%x",led);
		fclose(fp);
		break;
		
	 case 5 : 
		led = 5;
		fprintf(fp,"%x",led);
		fclose(fp);
		break;
		
	 case 6 : 
		led = 6;
		fprintf(fp,"%x",led);
		fclose(fp);
		break;
		
	 case 7 : 
		led = 7;
		fprintf(fp,"%x",led);
		fclose(fp);
		break;
	
	 case 8 : 
		led = 8;
		fprintf(fp,"%x",led);
		fclose(fp);	
		break;
		
	 default:
		printf("Wrong Input");
	}	
	
	}
  if(fclose(fp) == EOF)
    {
      printf("Cannot close /dev/led\n");
      return -1;
    }
  return 0;
}

