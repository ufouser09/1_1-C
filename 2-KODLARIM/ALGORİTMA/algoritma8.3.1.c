#include <stdio.h>
int main()
{
	//degiskenleri tan�mla
    int n1, n2;
    //2 tane sayi al
    printf("Enter two positive integers: ");
    scanf("%d %d",&n1,&n2);
	
    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD = %d",n1);

    return 0;
}
//kod cal�sd�
//sayfa 6
//obeb bulab program
