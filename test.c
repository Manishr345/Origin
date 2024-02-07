#include<stdio.h>
#include "matcom.h"
int main(){
    int a[3][3], b[3][3], c[3][3], c2[2][2], a2[2][2], b2[2][2], option;
    printf("1. Inverse of 3x3 Matrix\n2.Deteminant of 2x2 Matrix\n3.Determinant of 3x3 Matrix\n4.Multiplication of 2x2 Matrices\n5.Multiplication of 3x3 Matrices\n6.Addition of 3x3 Matrices\n7.Subtraction of 3x3 Matrices\n8.Adjoint of 3x3 Matrix\n9.Adjoint of 2x2 Matrix\nChoose one of the options above: ");
    scanf("%d", &option);
    switch(option){
        case 1:
        printf("Enter the elements of 3x3 Matrix: \n");
        for(int i = 0; i < 3; i ++){
            for(int j = 0; j < 3; j ++){
                scanf("%d", &a[i][j]);
            }
        }
        printf("Inverse: \n");
        inverse3(a);
        break;

        case 2: 
        printf("Enter the elements of 2x2 matrix: \n");
        for(int i = 0; i < 2; i ++){
            for(int j = 0; j < 2; j ++){
                scanf("%d", &a2[i][j]);
            }
        }
        printf("Determinant: %d", deter2(a2));
        break;

        case 3:
        printf("Enter the elements of 3x3 matrix: \n");
        for(int i = 0; i < 3; i ++){
            for(int j = 0; j < 3; j ++){
                scanf("%d", &a[i][j]);
            }
        }
        printf("Dterminant: %d", deter3(a));
        break;

        case 4:
        printf("Enter the elements of first matrix: \n");
        for(int i = 0; i < 2; i ++){
            for(int j = 0; j < 2; j ++){
                scanf("%d", &a2[i][j]);
            }
        }
        printf("Enter the elements of second matrix: \n");
        for(int i = 0; i < 2; i ++){
            for(int j = 0; j < 2; j ++){
                scanf("%d", &b2[i][j]);
            }
        }
        printf("Multiplication of Matrix: \n");
        mult2(a2, b2);
        break;

        case 5:
        printf("Enter the elements of first matrix: \n");
        for(int i = 0; i < 3; i ++){
            for(int j = 0; j < 3; j ++){
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the elements of second matrix: \n");
        for(int i = 0; i < 3; i ++){
            for(int j = 0; j < 3; j ++){
                scanf("%d", &b[i][j]);
            }
        }
        printf("Multiplication of Matrices: \n");
        mult3(a, b);
        break;
        case 6:
        printf("Enter the elements of first matrix: \n");
        for(int i = 0; i < 3; i ++){
            for(int j = 0; j < 3; j ++){
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the elements of second matrix: \n");
        for(int i = 0; i < 3; i ++){
            for(int j = 0; j < 3; j ++){
                scanf("%d", &b[i][j]);
            }
        }
        printf("Addition of Matrices: \n");
        add3(a, b);
        break;

        case 7:
         printf("Enter the elements of first matrix: \n");
        for(int i = 0; i < 3; i ++){
            for(int j = 0; j < 3; j ++){
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the elements of second matrix: \n");
        for(int i = 0; i < 3; i ++){
            for(int j = 0; j < 3; j ++){
                scanf("%d", &b[i][j]);
            }
        }
        printf("Subtraction of Matrices: \n");
        sub3(a, b);
        break;

        case 8:
        printf("Enter the elements of Matrix: \n");
        for(int i = 0; i < 3; i ++){
            for(int j = 0; j < 3; j ++){
                scanf("%d", &a[i][j]);
            }
        }
        printf("Adjoint: \n");
        adjoint3(a);
        break;

	case 9:
	printf("Enter the elements of Matrix: \n");
	for(int i = 0; i < 2; i ++){
		for(int j = 0; j < 2; j ++){
			scanf("%d", &a2[i][j]);
		}
	}
	adjoint2(a2);
	break;
    }
    return 0;
}
