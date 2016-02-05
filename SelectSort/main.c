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

        //首先假设下标为i的数是无序数组中最小的数；
        minIndex = i;
        //从无序区中找出最小的数
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                //不断记录最小数的下标；
                minIndex = j;
            }
        }
        //把无序区中最小的数放到有序区的最后一个位置；
        swap(&a[i],&a[minIndex]);
    }
}

void swap(int *a,int *b){

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}