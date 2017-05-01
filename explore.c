#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "explore.h"

int main() {

    struct _order {
        int part_no;
        int qty;
        char name[20];
        float price;
    } typedef order;

    int i, j, k, n;
    int m[10];
    double x, y, z;
    div_t dt;

    order o;

    o.part_no = 2001;
    o.qty = 10;
    strncpy(o.name, "Fan Belt", 10);
    o.price = 8.75;

    printf("Part No: %d\nQuantity %d\nDesc %s\nPrice %5.2f\n\n", o.part_no, o.qty, o.name, o.price);
        
    i = 'y';
    j = 110;
    n = 0;

    m[0] = 55;
    m[1]=60;
    m[2]=65;
    m[3]=70;
    m[4]=75;
    m[5]=80;
    m[6]=85;
    m[7]=90;
    m[8]=95;
    m[9]=100;
    
    dt = div(j, i);
    
    x = 3.1415926;
    y = 6.02e23;
    z = -123.456;

    printf("%d\n%d\n%d\n\n", i, j, n);
    printf("%c\n%c\n\n", i, j);
    printf("%d\n%d\n\n", dt.quot, dt.rem);
    printf("%f\n%f\n%f\n\n", x, y, z);

    for(k=0; k<=10; k++) {
        printf("%d    %d\n", k, m[k]);
    }
    getchar();

    return 0;
}

