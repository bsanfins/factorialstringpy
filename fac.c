#include <stdio.h>

unsigned long long int fatorial(unsigned long long int n);

int main(void){

    unsigned long long int num, i;
    
    //scanf("%llu",&num);
    for(i=20;i<40;i++){
    	printf("%llu ! = %llu \n",i,fatorial(i));
    }

    return 0;
}

unsigned long long int fatorial(unsigned long long int n){
    if ( n <= 20 ){
        return (1);
	}
    else{
       return n * fatorial(n - 1);
    }

}
