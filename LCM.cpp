#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int main()

{   int a,b,L,t;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    t=a>b?a:b;
    printf("The bigger number is %d\n",t);
    for(L=t;L<=a*b;L=L+t){
        if(L%a==0 && L%b==0){
                break;

        }
    }

    printf("LCM is %d",L);
    return 0;
}
