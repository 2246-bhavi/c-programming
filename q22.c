#include<stdio.h>
int main()
{
    float cp,sp,p,l,per;
    printf("enter cp and sp:");
    scanf("%f %f",&cp,&sp);

    if(sp>cp)
    {
        p=sp-cp;
        per=(p/cp)*100;
        printf("profit:%.0f\n",per);
    }
    else if(sp<cp)
    {
        l=cp-sp;
        per=(l/cp)*100;
        printf("loss:%.0f\n",per);
    }
    else{
        printf("no profit and no loss\n");
    }
    return 0;
}