/*
*Date: 02/05/2016
*Author: Abdus Salam
*Contact: salam4268@gmail.com
*Source: http://lightoj.com
*Problem No: 1000
*Name: Greetings from LightOJ
*/

#include <stdio.h>

int main()
{
    int t, a, b, cn;

    scanf("%d", &t);

    cn=0;
    while(t--) {
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n", ++cn, (a+b));
    }
    return 0;
}
