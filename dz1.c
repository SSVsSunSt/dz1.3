#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main(void){
	double pre;
	long ic;
	char strf[17];
	char stri[21];
        if(!scanf("%lf",&pre)){
                printf("no char\n");
                exit(0);
        }
	ic=(long)pre;
	gcvt(pre,17,strf);
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
