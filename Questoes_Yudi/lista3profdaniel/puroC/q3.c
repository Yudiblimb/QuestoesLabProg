#include <stdio.h>
#include <math.h>

int main(){
    double a1, p1, v1;
    double a2, p2, v2;
    
    puts("digite os dados do centroide 1");
    scanf("%lf %lf %lf", &a1, &p1, &v1);
    
    puts("digite os dados do centroide 2");
    scanf("%lf %lf %lf", &a2, &p2, &v2);
    
    int n;
    puts("digite a quatidade de objetos");
    scanf("%d", &n);
    
    int acertos_cheb = 0;
    int acertos_man = 0;
    int acertos_euc = 0;
    
    int i = 0;
    while(i < n){
        double a, p, v;
        int gt;
        
        puts("digite a area perimetro vertices e o gt do objeto");
        scanf("%lf %lf %lf %d", &a, &p, &v, &gt);
        
        // chebyshev
        double dif_a1 = fabs(a - a1);
        double dif_p1 = fabs(p - p1);
        double dif_v1 = fabs(v - v1);
        
        double d_cheb1 = dif_a1;
        if(dif_p1 > d_cheb1) d_cheb1 = dif_p1;
        if(dif_v1 > d_cheb1) d_cheb1 = dif_v1;
        
        double dif_a2 = fabs(a - a2);
        double dif_p2 = fabs(p - p2);
        double dif_v2 = fabs(v - v2);
        
        double d_cheb2 = dif_a2;
        if(dif_p2 > d_cheb2) d_cheb2 = dif_p2;
        if(dif_v2 > d_cheb2) d_cheb2 = dif_v2;
        
        int cl_cheb = 0;
        if(d_cheb1 < d_cheb2){
            cl_cheb = 1;
        } else if(d_cheb2 < d_cheb1){
            cl_cheb = 2;
        }
        
        if(cl_cheb == gt){
            acertos_cheb++;
        }
        
        // manhattan
        double d_man1 = dif_a1 + dif_p1 + dif_v1;
        double d_man2 = dif_a2 + dif_p2 + dif_v2;
        
        int cl_man = 0;
        if(d_man1 < d_man2){
            cl_man = 1;
        } else if(d_man2 < d_man1){
            cl_man = 2;
        }
        
        if(cl_man == gt){
            acertos_man++;
        }
        
        // euclidiana
        double d_euc1 = sqrt((a-a1)*(a-a1) + (p-p1)*(p-p1) + (v-v1)*(v-v1));
        double d_euc2 = sqrt((a-a2)*(a-a2) + (p-p2)*(p-p2) + (v-v2)*(v-v2));
        
        int cl_euc = 0;
        if(d_euc1 < d_euc2){
            cl_euc = 1;
        } else if(d_euc2 < d_euc1){
            cl_euc = 2;
        }
        
        if(cl_euc == gt){
            acertos_euc++;
        }
        
        i++;
    }
    
    double acc_cheb = ((double)acertos_cheb / n) * 100.0;
    double acc_man = ((double)acertos_man / n) * 100.0;
    double acc_euc = ((double)acertos_euc / n) * 100.0;
    
    printf("acuracia chebyshev %.2lf\n", acc_cheb);
    printf("acuracia manhattan %.2lf\n", acc_man);
    printf("acuracia euclidiana %.2lf\n", acc_euc);
    
    if(acc_cheb > acc_man && acc_cheb > acc_euc){
        puts("melhor metodo chebyshev");
    } else if(acc_man > acc_cheb && acc_man > acc_euc){
        puts("melhor metodo manhattan");
    } else if(acc_euc > acc_cheb && acc_euc > acc_man){
        puts("melhor metodo euclidiana");
    } else {
        puts("empate entre metodos");
    }
    
    return 0;
}
