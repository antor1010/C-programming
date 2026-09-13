//q1
#include<stdio.h>
int main(){
int age=16;
int canDrive=age>=18;
printf("Your Age:%d\n",age);
printf("Can Drive? %d\n",canDrive);
return 0;
}
//q2
#include <stdio.h>
#include<stdbool.h>
int main() {
    int age=65;
    int isMember=0;
    bool isEligible=age>=65 || isMember;
    printf("Eligible for discount? %d\n", isEligible);
    
    return 0;
}
