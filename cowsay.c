#include <stdio.h>
#include <string.h>

void printBorder(int size, int pos)
{
	if (pos == 0){
		printf(" ");	
		for (int i = 0; i < size; i++)
			printf("_");	  
		printf("\n");
		printf("/ ");			
	}else{
		printf(" \\\n");
		printf("\\");
		for (int i = 0; i < size; i++)
			printf("_");	  
		printf("/\n");			
	}		
	
	
}

int main(int argc, char **argv)
{
  int i, j;
  int len = 0;
  char buffer[10];
  char *sep = ""; 

  
/*
  if (argc == 1){
	  printf(" ______\n");
	  printf("/ moOh \\\n");
	  printf("\\______/\n");
  }
*/if (argc > 1){  
	  for (i = 1; i < argc; i++)
		  len += strlen(argv[i]);
	  printBorder(len+argc, 0);	  
	  for (i = 1; i < argc; i++){
		  printf("%s%s", sep, argv[i]);	
		  sep = " ";
	  }
	  printBorder(len+argc, 1);	  
  }else{	
      /*
	  while(fgets(buffer, 10 , stdin) != NULL)
	  	len += strlen(buffer);			
	  printBorder(len, 0);
	  */	  
	  while(fgets(buffer, 10 , stdin) != NULL)
	  	printf("%s", buffer);
  }
  
  printf("      \\    ^__^\n");
  printf("       \\   (oo)\\_______\n");
  printf("           (__)\\       )\\/\\\n");
  printf("               ||----w |\n");
  printf("               ||     ||\n");
  return (0);
}

