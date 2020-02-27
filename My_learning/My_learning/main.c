//#include <stdio.h>
//#define SEC_PER_MIN 60  //一分钟60秒
//int main()
//{
//    int sec, min, left;
//    printf("Convent seconds to minutes and seconds!\n");
//    printf("Enter the number of seconds (<0 to quit):\n");
//    scanf("%d",&sec);
//    while (sec>0){
//        min = sec / SEC_PER_MIN;
//        left = sec % SEC_PER_MIN;
//        printf("%d seconds is %d minutes,%d seconds.\n",sec,min,left);
//        printf("Enter next value (<=0 to quit):");
//        scanf("%d",&sec);
//    }
//    printf("Done!\n");
//    return 0;
//}


//#include <stdio.h>
//int main(){
//    int num1 = 36;
//    int num2 = 99;
////    while (num < 21){
////        printf("%4d,%6d\n",num,num * num);
////        num = num + 1;
////    }
//    printf("num1 is %2d, num2 is %d \n",num1,num2);
//    return 0;
//}


//#include <stdio.h>
//void pound(int n);
//int main(){
//    int times = 2;
//    char ch = '!';
//    float f = 6.0f;
//
////    pound(times);
//    pound(ch);
////    pound(f);
//
//    return 0;
//}
//void pound(int n){
//    while (n-- >0)
//        printf("#\n");
//        printf("sizeofn n");
//    printf("\n");
//}


//#include <stdio.h>
//int main(void)
//{
//    int num;
//    int sum = 0;
//    int status;
//
//    printf("Please enter an integer to be summed \n");
//    printf("(enter q to quit):");
//    status = scanf("%1d", &num);
//    while (status == 1)
//    {  // == 意思是 等于
//        sum = sum + sum;
//        printf("%d",sum);
//        printf("Please enter next integer (enter q to quit) :");
//        scanf("%1d", &num);
//        printf("%d\n",status);
//    }
//    printf("Those integers sum to %1d.\n", sum );
//
//    return 0;
//}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    long num;
    long sum = 0L;
    int status, i;

    printf("Please enter an integer to be summed ");
    printf("(enter q to quit):");
    status = scanf("%d", &num);
    while (status == 1){  // == 意思是 等于
        sum += num;//sum = sum + num;
        i += 1;//i = i + 1;
        printf("当前是第%d次循环，sum的值是%d\n", i, sum);
        printf("Please enter next integer (enter q to quit) :");
        status = scanf("%d", &num);
    }
    printf("Those integers sum to %1d.\n",sum );
    return 0;
}
