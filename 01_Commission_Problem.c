#include<stdio.h>

int main(){
    int lock, stock, barrel,c1, c2, c3, tlock=0, tstock=0, tbarrel=0;
    float lprice=45.0, sprice= 30.0, bprice= 25.0, sales= 0.0, com= 0.0;

    printf("Enter the number of locks and -1 for exiting");
    scanf("%d",&lock);
    while(lock!=-1){
        c1= (lock>=0 || lock<70);
        printf("Enter the number of stocks and barrels\n");
        scanf("%d %d", &stock, &barrel);
        c2= (stock>=0 || stock<80);
        c3= (barrel>= 0 || barrel< 90);
        if (c1)
            printf("Value of lock not in range 1..70");
        else{
            tlock= lock+tlock;
            if (tlock>70)
                printf("Value of lock not in range 1...70");
        }
        if (c2)
            printf("Value of stock not in range 1..80");
        else{
            tstock= lock+tstock;
            if (tstock>70)
                printf("Value of lock not in range 1...80");
        }
        if (c3)
            printf("Value of barrel  not in range 1..90");
        else{
            tbarrel= lock+tbarrel;
            if (tbarrel>70)
                printf("Value of barrel  not in range 1...90");
        }
         printf("Enter the number of locks and -1 for exiting");
    scanf("%d",&lock);
    }
    printf("The total number of locks are %d %d %d", &tlock, &tstock, &tbarrel);
    sales= tlock * lprice + tstock * sprice + tbarrel * bprice;
    printf("Sales %f", & sales);
    if (sales > 1800.0)
        com= 0.10* 800 + 0.15 * 1000 + 0.20 * (sales - 1800.0);
    else if (sales > 1000.0)
        com= 0.10*800 + 0.15* (sales - 1000.0);
    else
        com= 0.10 * sales;
    
    printf("Commission %f", &com);
}