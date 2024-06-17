#include<stdio.h>
int main(){
	FILE *fp;
	fp= fopen("demo.txt","w");
	fputs("HOC VIEN PTIT \n",fp);
	fclose(fp);
	return 0;
}
