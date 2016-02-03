//
//  main.c
//  SelectSort
//
//  Created by chenyufeng on 16/2/3.
//  Copyright © 2016年 chenyufengweb. All rights reserved.
//

#include <stdio.h>

void selectSort(int *a,int n);
void swap(int *a,int *b);

int main(int argc, const char * argv[]) {


    int a[] = {6,1,4,9,0,3};
    selectSort(a,6);
    for (int i = 0; i < 6 ; i++) {
        printf("%d ",a[i]);
    }

    return 0;
}

void selectSort(int *a,int n){

    int i,j,minIndex;
    for (i = 0; i < n; i++) {

        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        swap(&a[i],&a[minIndex]);
    }
}

void swap(int *a,int *b){

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}