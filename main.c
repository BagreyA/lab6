#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){ 

    float sred = 0;
    float sum = 0;
    int s = 1, a, n, del, count, count_prost_do = 0, count_prost_after = 0, b, count_sov_do = 0, sum_del, count_sov_after = 0;

    srand(time(NULL));
    printf("Vvedite razmer massiva: ");
    scanf("%d", &b);
    int arr[b];
    for(int i = 0; i < b; i++) arr[i] = rand()%1000;
    printf("Ishodniy massiv:\n");
    for(int i = 0; i < b; i++) printf("%d\n", arr[i]);

    for(int i = 0; i < b; i++) {sred = sred + arr[i];}
    sred = sred / b;
    printf("\nsred znach = %f\n", sred);
    
    printf("\n");
    for(a = 0; a < b; a++){
    count = 0;
    for (int del = 2; del < arr[a]; del++) {
        if ((arr[a] == 0) || (arr[a] == 1)) break;
        if (arr[a] % del == 0) count = count + 1;
    }
    if((count == 0) && (arr[a] != 1) && (arr[a] != 0)) {
        printf("%d\n", arr[a]);
        count_prost_do = count_prost_do + 1;
    }
    }
    printf("prostyh chisel do: %d\n", count_prost_do);

    for (int i = 0; i < b; i++){ 
    sum_del = 0;
    for (int del = 1; del < arr[i]; del++){
        if (arr[i] % del == 0){
            sum_del = sum_del + del; 
        }
    }
    if (sum_del == arr[i]) {
        count_sov_do = count_sov_do + 1;
        printf("%d - soversh chislo\n", arr[i]); }

    }
    printf("Soversh chisel do: %d", count_sov_do);

    printf("\n\n");
    for(a = 0; a < b; a++){
    count = 0;
    for (int del = 2; del < arr[a]; del++) {
        if ((arr[a] == 0) || (arr[a] == 1)) break;
        if (arr[a] % del == 0) count = count + 1;
    }
    if((count == 0) && (arr[a] != 1) && (arr[a] != 0) && (arr[a] < sred)) {
        printf("%d\n", arr[a]);
        count_prost_after = count_prost_after + 1;
    }
    }
    printf("prostyh chisel posle: %d\n", count_prost_after);

    for (int i = 0; i < b; i++){ 
    sum_del = 0;
    for (int del = 1; del < arr[i]; del++){
        if (arr[i] % del == 0){
            sum_del = sum_del + del; 
        }
    }
    if ((sum_del == arr[i]) && (arr[a] < sred)){
        count_sov_after = count_sov_after + 1;
        printf("%d - soversh chislo\n", arr[i]); }

    }
    printf("Soversh chisel posle: %d", count_sov_after);
    printf("\n");
    printf("\nMassiv posle udaleniya:");
    for (int i = 0; i < b; i++){
    if(arr[i] < sred){
        printf("\n%d", arr[i]);
    }
    }

return 0;
}
