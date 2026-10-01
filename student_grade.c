
#include <stdio.h>
#include <math.h>
   int main()
   {
    int a, b, c, x1,x2;
    printf("enter three number:");
    scanf("%d %d %d",&a,&b,&c);
    x1 = -b+(sqrt(b*b - 4*a*c)/2*a);
    x2 = -b-(sqrt(b*b - 4*a*c)/2*a);
    
    printf("%d %d",x1, x2);

    return 0;
    
    
        
   }



    

//printf("Thank you for using Student Grade Calculator!\n");
//}
// Student Grade Calculator - My First Git Project