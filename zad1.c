#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

#define COUNT

typedef struct{
    double x;
    double y;
}point_t;



typedef struct node {
     point_t A;
     point_t B;
     struct node *next;
} node_t;



double areaRects(node_t* list);
void filterRects(node_t** list, double min, double max);

int main(){
    return 0;
}

double areaRects(node_t* list){
    double height, width, area;
    height = ((list->A.y) - (list->B.y));
    width = ((list->A.x) - (list->B.x));
    area = height*width;
    return (area);
}

void filterRects(node_t** list, double min, double max){
   int maximum=*list;
   if(max==INT_MAX)
    for(int j=0;j<10;j++){
        if( maximum[j] < max ) 
        max=&maximum[j];
    }    
    return max;
   
}
         
         
