#include <stdio.h>

int Kiem_tra_so_chinh_phuong(int n)
{
    if (n < 0)
    {
        return 0;
    }
    int i = 1;
    while (i * i <= n)
    {
        if (i * i == n)
        {
            return 1;
        }
    i++;
    }
    return 0;
}

int Dem_So_Chinh_Phuong(int n)
{
    int Dem = 0;
    for(int i = 0 ; i < n; i++)
    {
        if(Kiem_tra_so_chinh_phuong(i))
            Dem++;
    }
    printf("\nCo %d so chinh phuong", Dem);
    return Dem;
}

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if(Kiem_tra_so_chinh_phuong(i))
        {
            printf("%d\t", i);
        }
    }
    
    Dem_So_Chinh_Phuong(n);
    
    return 0;
    
}
