int deter3(int a[3][3]){
    int d = 0;
    for(int i = 0; i < 3; i ++){
        d += (a[0][i] * a[1][(i + 1) % 3] * a[2][(i + 2) % 3]) - (a[1][(i + 2) % 3] * a[2][(i + 1) % 3]);
    }
    return d;
}

int deter2(int a[2][2]){
    int d = (a[0][0] * a[1][1]) - (a[1][0] * a[0][1]);
    return d;
}

void mult3(int a[3][3], int b[3][3]){
    int c[3][3];
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j++){
            c[i][j] = 0;
            for(int k = 0; k < 3; k ++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}

void mult2(int a[2][2], int b[2][2]){
    int c[2][2];
    for(int i = 0; i < 2; i ++){
        for(int j = 0; j < 2; j++){
            c[i][j] = 0;
            for(int k = 0; k < 2; k ++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i = 0; i < 2; i ++){
        for(int j = 0; j < 2; j ++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}

void inverse3(int a[3][3]){
    int d = 0;
    for(int i = 0; i < 3; i ++){
        d += (a[0][i] * a[1][(i + 1) % 3] * a[2][(i + 2) % 3]) - (a[1][(i + 2) % 3] * a[2][(i + 1) % 3]);
    }
    float b[3][3];
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            b[i][j] = ((a[(j + 1) % 3][(i + 1) % 3] * a[(j + 2) % 3][(i + 2) % 3]) - (a[(j + 1) % 3][(i + 2) % 3] * a[(j + 2) % 3][(i + 1) % 3])) / (float)d;
            printf("%.2f\t", b[i][j]);
            }
        printf("\n");
    }
}

void add3(int a[3][3], int b[3][3]){
    int c[3][3];
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}

void sub3(int a[3][3], int b[3][3]){
    int c[3][3];
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}

void adjoint3(int a[3][3]){
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
}