#include<stdarg.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int image[512][512];
int row,column,len,matrix[270000];

main()
  {
	FILE *fp1;
	int i=0,grayscale,n,l,m,j,x=0;
	char ch1,ch2,name[50],s[100];
	char msg[100];
	
	
	 
	fp1=fopen("elaine.pgm","r");
	
	ch1=fgetc(fp1);
	
	while(ch1!='\n')
		{
		name[i++]=ch1;
		ch1=fgetc(fp1);
		}
	name[i]='\0';

	
  
	
	fgets(s,100,fp1);
	
	fscanf(fp1,"%d%d",&row,&column); 
	
	printf("\n%s",s); 
	printf("\t%d\t%d",row,column);
	fscanf(fp1,"\t%d",&grayscale);
	
	printf("\n highest grayscale value =\t%d\n",grayscale);
	printf("\n===================================================================\n");
	i=0;
	while((fscanf(fp1,"%d",&n))!=EOF)
		{
		matrix[i]=n;
		i++;
		}
        
	x=0;
      for(i=0;i<512;i++)
	{
  		for(j=0;j<512;j++)
                 { 
			image[i][j]=matrix[x];
			x++;
		}
		
	}
	
	for(i=0;i<512;i++)
	{
  		for(j=0;j<512;j++)
		  printf("\t%d",image[i][j]);
	   printf("\n");
	}

	fclose(fp1);





}





