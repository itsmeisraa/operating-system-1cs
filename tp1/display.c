#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
FILE *f = fopen("index.txt","w");
if(f == NULL){
    printf("the file doesnt exits");
    return 1;
}
int i = 0;
while(argv[1][i] != '\0'){
printf("%c\n",argv[1][i]);
fprintf(f,"%c\n",argv[1][i] );
i++;
}
fclose(f);
    return 0;
}