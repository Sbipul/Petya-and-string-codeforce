#include<stdio.h>
#include<string.h>
int main(){

    char f[102],s[102];
    int i;
    fgets(f,sizeof(f),stdin);
    fgets(s,sizeof(s),stdin);

    for(i=0;i<strlen(f)-1;i++){
        if(f[i]>='A' && f[i] <= 'Z'){
            f[i] +=32;
        }
        if(s[i]>='A' && s[i] <= 'Z'){
            s[i] +=32;
        }
    }
    for(i=0;i<strlen(f)-1;i++){
        if(f[i]<s[i]){
            printf("-1\n");
            return 0;
        }else if(f[i]>s[i]){
            printf("1\n");
            return 0;
        }
    }
    printf("0\n");
    return 0;
}
