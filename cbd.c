#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int conv_binario_decimal(char binario[]);

int main(){
    int num = 0, pot = 0;
    char binario[100];

    scanf("%s", &binario);
    num = conv_binario_decimal(binario);
    printf("%d\n", num);
    return 0;
}

int conv_binario_decimal(char binario[])
{
    for(int i = strlen(bianrio)-1; i>=0; i--){
        if(binario[i]=='1')
        num= num + pow(2, pot);
        pot = pot + 1;
    }
    return num;
}