#include<stdio.h>
int main(){
	FILE *fp;
	char buff[255];
	fp= fopen("demo.txt","r");
	fgets(buff,255,(FILE*)fp);
	printf("Thong tin trong file la:  %s\n",buff);
	fclose(fp);
	return 0;
}
