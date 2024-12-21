#include <stdio.h>
int main()

{
    int i, j, x, y;
    int choice;
    int determinant_1;
    int determinant_2;
    int arr1[2][2];
    int arr2[3][3];

    printf("CHOOSE ONE MATRIX FROM BELOW OPTIONS:\n");
    printf("1.  2x2 MATRIX\n");
    printf("2.  3x3 MATRIX\n");
    printf("ENTER MATRIX OF YOUR CHOICE: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("ENTER THE ELEMENTS OF 2*2 MATRIX: \n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("ELEMENT [%d][%d]: ", i, j);
                scanf("%d", &arr1[i][j]);
            }
        }
        printf("\n");
        determinant_1 = arr1[0][0] * arr1[1][1] - arr1[0][1] * arr1[1][0];
        printf("DETERMINANT OF 2*2 MATRIX IS: %d\n", determinant_1);
        break;

    case 2:
        printf("ENTER THE ELEMENTS OF 3*3 MATRIX: \n");
        for (x = 0; x < 3; x++)
        {
            for (y = 0; y < 3; y++)
            {
                printf("ELEMENT [%d][%d]: ", x, y);
                scanf("%d", &arr2[x][y]);
            }
        }
        printf("\n");
        determinant_2 = arr2[0][0] * (arr2[1][1] * arr2[2][2] - arr2[1][2] * arr2[2][1]) - arr2[0][1] * (arr2[1][0] * arr2[2][2] - arr2[1][2] * arr2[2][0]) + arr2[0][2] * (arr2[1][0] * arr2[2][1] - arr2[1][1] * arr2[2][0]);
        printf("DETERMINANT OF 3*3 MATRIX IS: %d\n", determinant_2);
        break;

    default:

        printf("PLEASE CHOOSE THE TYPE OF MATRIX YOU WANT");
    }

    return 0;
}