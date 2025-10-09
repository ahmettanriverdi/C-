#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main(void)
{
    int a;                      // 1. normal bir değişken
    int *ptr1 = &a;             // 2. a'nın adresini tutan pointer
    int **ptr2 = &ptr1;         // 3. ptr1’in adresini tutan pointer
    int ***ptr3 = &ptr2;        // 4. ptr2’nin adresini tutan pointer
    int ****ptr4 = &ptr3;       // 5. ptr3’ün adresini tutan pointer
    int *****ptr5 = &ptr4;      // 6. ptr4’ün adresini tutan pointer
    int ******ptr6 = &ptr5;     // 7. ptr5’in adresini tutan pointer
    int *******ptr7 = &ptr6;    // 8. ptr6’nın adresini tutan pointer
    int ********ptr8 = &ptr7;   // 9. ptr7’nin adresini tutan pointer
    int *********ptr9 = &ptr8;  // 10. ptr8’in adresini tutan pointer (9 yıldız seviyeli pointer)

    a = 0;                      // a'nın başlangıç değeri
    ft_ultimate_ft(ptr9);       // fonksiyona 9 katmanlı pointer gönderiliyor
    printf("a = %d\n", a);      // sonuç olarak a = 42 yazmalı

    return 0;                   // program başarılı bitti
}