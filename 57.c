/*
input : iRow = 4 , iCol = 4 
output :

*  *  *  *
*  *  *
*  *
*

*/
#include<stdio.h>
void Display(int,int);
int main()
{
    int iValue1,iValue2 = 0 ;
    printf("Enter number of Rows\n");
    scanf("%d",&iValue1);
    printf("Enter number of columns\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    return 0 ;
}
void Display(int iRow , int iCol)
{
    int i , j = 0 , num  = 0 ;
    for(i =1 ; i<=iRow ; i++)
    {
        for(j =1 ; j <= iCol ; j++)
        {
            if(j<=(iCol-num))
            {
                printf("*\t");
            }
        }
        printf("\n");
        num++;
    }
}