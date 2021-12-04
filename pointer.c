//#include<stdio.h>
//int main(){
//    int x=5;
//    printf("%d\n",x);
//    printf("%d\n",&x);
//    printf("%d",*&x);
//}
#include<stdio.h>
void swap(int *x,int*y){
    int t=*x;
    *x=*y;
    *y=t;
}
int main(){
    int a,b;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);

}