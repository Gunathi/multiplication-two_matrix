#include<stdio.h>
#define size 50

void main(){

    int row1,col1,row2,col2,a[size][size],b[size][size],c[size][size],sum,i,j,k;

    printf("Enter number of rows and column do you enter for matrix 1: ");
    scanf("%d %d",&row1,&col1);
    printf("Enter number of rows and column do you enter for matrix 2: ");
    scanf("%d %d",&row2,&col2);

    if(col1==row2){

        printf("Enter elements of matrix 1: ");
            for(i=0; i<row1; i++){
                printf("\nEnter data for matrix 1, row %d:\n",i+1);
            for(j=0; j<col1; j++)
                scanf("%d",&a[i][j]);
        }

        printf("Enter elements of matrix 2: ");
            for(i=0; i<row2; i++){
                printf("\nEnter data for matrix 2, row %d:\n",i+1);
            for(j=0; j<col2; j++)
                scanf("%d",&b[i][j]);
        }

            printf("\n\n-----------------------------------------");
            printf("\nElements of a\n");
            printf("-----------------------------------------\n\n");
                for(i=0; i<row1; i++){
                    for(j=0; j<col1; j++){
                        printf("\t%d",a[i][j]);
                    }
                      printf("\n");
                }

            printf("\n\n-----------------------------------------");
            printf("\nElements of b\n");
            printf("-----------------------------------------\n\n");
                for(i=0; i<row2; i++){
                    for(j=0; j<col2; j++){
                        printf("\t%d",b[i][j]);
                    }
                      printf("\n");
                }

                //multiplication of two matrix//


                for(i=0; i<row1; i++){
                    for(j=0; j<col2; j++){
                        for(k=0; k<col1; k++){
                            sum += a[i][k]*b[k][j];
                        }
                        c[i][j] = sum;
                    }
                }

            printf("\n\n-----------------------------------------");
            printf("\nElements of c\n");
            printf("-----------------------------------------\n\n");

            for(i=0; i<row1; i++){
                    for(j=0; j<col2; j++){
                        printf("\t%d",c[i][j]);
                    }
                      printf("\n");
                }


    }
    else
        printf("Sorry!!! Can't multiply this matrixes.");

}
