#include <stdio.h>

int main(){

int a = 3;
int a2;
int n=0;
int c;
int c1;
int i;
int d=0;

for (a; a>0; a++){

a2=a+2;

c=0;
for(i=2; i<=a; i++){ 
if (a%i==0 && i!=a){
c=1;
break;
}
}

c1=0;
for(i=2; i<=a2; i++){ 
if (a2%i==0 && i!=a2){
c1=1;
break;
}
}

if (c==0 && c1==0){
printf("(%d, %d)\n", a, a2);

n=n+1;
if (n==10){
break;
}
}
}

return 0;

}
