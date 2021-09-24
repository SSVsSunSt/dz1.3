#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	double pre;
	long ic;
	char strf[15];
	char stri[21];
	printf("enter no more than 14 digits\n");
        if(!scanf("%14lf",&pre)){
                printf("no char\n");
                exit(0);
        }
	ic=(long)pre;
	gcvt(pre,15,strf);
	if(strf[0]=='-'){
		printf("negative values not supported\n");
		exit(0);
	}
	gcvt(ic,21,stri);
	char* strp;
	strp=(char*)&strf+strlen(stri)+1;
	printf("integer | fraction\n%s | %s\n",stri,strp);
	return(0);
}
