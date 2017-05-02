#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "explore.h"

int main() {

    int i, j, k, n;
    size_t sz;
    double x, y, z;

/*  Here we declare an integer array */
    int m[10];

/*  Here we create a structure for holding an order */
    struct _order {
        int part_no;
        int qty;
        char name[20];
        float price;
    } typedef order;

/*  And here we declare two structures.  div_t is
    created in the stdlib.h header.  order was
    created right above. */
    div_t dt;
    order o;

    sz = sizeof(order);
    printf("Size of the order structure is %d\n", sz);
    sz = offsetof(order, price);
    printf("Offset of the price in the order structure is %d\n", sz);
    
/*  You access the elements of the structure using the dot operator */
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

