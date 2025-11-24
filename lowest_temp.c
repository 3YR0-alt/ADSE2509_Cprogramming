#include <stdio.h>

int main()
{
    char d1=10,d2=10,d3=10;
    float t1,t2,t3;

    //Put in the data
    printf("\n---------------------------------");
    printf("%s", d1);
    printf("enter the temparature for %s:"d1);
    scanf("%f", &t1);

     printf("\n---------------------------------");
    printf("%s", d2);
    printf("enter the temparature for %s:"d2);
    scanf("%f",&t2);

     printf("\n---------------------------------");
    printf("%s", d3);
    printf("enter the temparature for %s:"d3);
    scanf("%f", &t3);

    printf("\n----------------------------------")

    if(t1<t3)
    {
        printf("%s is the coldest with a temparature of %f degrees",d1, t1);

    }
    else
    {
        printf("%s is the coldest with a temparature of %f degrees",d3,t3);

    }
}
else
{
    if (t2<t3)
    {
        printf("%s is the coldest with a temparature of %f degrees",d2,t2);

    }
    else
    {
        printf("%s is the coldest with %f degrees", d3,t3);
    }
}
