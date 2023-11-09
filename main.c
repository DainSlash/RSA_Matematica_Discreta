#include <stdio.h>
#include<stdbool.h>

int main(){
    printf("Codigo feito por FELIPE CAMARANO, aperte CTRL+C para encerrar ou feche no x vermelho :D\n\n");


    long int MODN;
    printf("Insira o valor de MOD N: ");
    scanf("%lu",&MODN);
    while (1)
    {
        long int c ,n[10], i=2,t,a=0,s=0,p,tt, result[10];
        printf("\nInsira o valor do bloco: ");
        scanf("%lu",&n[a]);
        printf("Insira o valor de 'e' ou 'e-1': ");
        scanf("%lu",&t);
        c=n[a];
        tt=t;
        for(a=0;a<10;a++) result[a] = 1;
        a=0;
        printf("\n");
        while (1){
            a++;
            n[a] = (n[a-1]*n[a-1])%MODN;
            printf("%lu elevado a %lu = %lu\n",c,i,n[a]);
            if(i*2>=t){
                bool impar = (t%2==1);
                while(a!=0){
                    if((t-i)>0){
                        t-=i;
                        result[s++] = n[a];
                    }
                    a--;
                    i/=2;
                }
                if(impar){
                    result[s++] = n[a];
                }
                break;
            }
            i*=2;
        }
        printf("\n");
        p=s;
        s=0;
        while(p>1){
            printf("%lu*%lu = ",result[s],result[s+1]);
            result[s]=result[s]*result[++s]%MODN;
            printf("%lu\n",result[s]);
            p--;
        }
        printf("\n%lu elevado a %lu = %lu\n",c,tt,result[s]);
        printf("\n");
    }
    return 0;
}