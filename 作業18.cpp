#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#define MAX 10000

int main(void)
{
	char *str=(char*)malloc(sizeof(char)*MAX); 
    int i,len,num[128]={0}; 
    printf("�п�J�@�r��");
    scanf("%s",str);  
    len=strlen(str);
    
    for(i=0;i<len;i++){
    	num[(int)str[i]]++; 
	}
	
    for(i=0;i<128;i++){
    	if(num[i]!=0){
    		printf("�r��%c�X�{%d��\n",(char)i,num[i]);
		}
	}
    return 0;
    free(str);
}
