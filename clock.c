#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<anderconio.h> 


int main (){
int h=15,m=2,s=00;
int key ;
char c;
printf("\e[0;34m%d:%d:%d \n\e[m",h,m,s);
do{
do{
s++;
if(s == 60){
m++;
s=0;
}
if(m == 60){
h++;
m=0;
}
if(h == 24){
h=0;
}
system("clear");
if((s<10) &&(m<10)&&(h<10))
        printf("\e[7;33m0%d:0%d:0%d \n\e[m",h,m,s);
    else if((m<10)&&(h<10))
        printf("\e[7;33m0%d:0%d:%d \n\e[m",h,m,s);
    else if((s<10)&&(h<10))
        printf("\e[7;33m0%d:%d:0%d \n\e[m",h,m,s);
    else if((s<10) &&(m<10))
        printf("\e[7;33m%d:0%d:0%d \n\e[m",h,m,s);
    else if((s<10))
        printf("\e[7;33m%d:%d:0%d \n\e[m",h,m,s);
    else if((m<10))
        printf("\e[7;33m%d:0%d:%d \n\e[m",h,m,s);
    else if((h<10))
        printf("\e[7;33m0%d:%d:%d \n\e[m",h,m,s);
    else
        printf("\e[7;33m%d:%d:%d \n\e[m",h,m,s);
    printf("press any key to modify the time!\n");       
sleep(1);
}while(!kbhit());
do{
    c=getch();
    if(c == 104){
        h++;
        if(h == 24){
        h=0;
        }
    }
    if(c == 109){
        m++;
        if(m == 60){
            m=0;
        }
    }
    if(c == 115){
        s++;
        if(s == 60){
            s=0;
        }
    }
    system("clear");
    if((s<10) &&(m<10)&&(h<10))
        printf("\e[7;34m0%d:0%d:0%d \n\e[m",h,m,s);
    else if((m<10)&&(h<10))
        printf("\e[7;34m0%d:0%d:%d \n\e[m",h,m,s);
    else if((s<10)&&(h<10))
        printf("\e[7;34m0%d:%d:0%d \n\e[m",h,m,s);
    else if((s<10) &&(m<10))
        printf("\e[7;34m%d:0%d:0%d \n\e[m",h,m,s);
    else if((s<10))
        printf("\e[7;34m%d:%d:0%d \n\e[m",h,m,s);
    else if((m<10))
        printf("\e[7;34m%d:0%d:%d \n\e[m",h,m,s);
    else if((h<10))
        printf("\e[7;34m0%d:%d:%d \n\e[m",h,m,s);
    else
        printf("\e[7;34m%d:%d:%d \n\e[m",h,m,s);  
    printf("press h to change hour\n");
    printf("press m to change minute\n");
    printf("press s to change second\n");
    printf("press Q to restart clock\n");     
}while(c != 113);
}while(1);
return 0;
}
