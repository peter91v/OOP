/*---------------------------------------------*\
| File: Matrix                                  |
| Date: 01.12.2019                              |
| progtimeest: 25min                            |
| progtimereal: 30min                           |
| author: Peter Varga                           |
| e-mail: pvarga.its-b2019@fh-salzburg.ac.at    |
| Salzburg University of Applied Sciences       |
| Information Technology & Systems Managment    |
| SWE1 - ILV04, exercise 6                      |
\*---------------------------------------------*/
#include<stdio.h>
int main(){
    int disp[3][3];

    int i, j;
    for(i=0; i<3; i++) {
        for(j=0;j<3;j++) {
            printf("Enter value for disp[%d][%d]:",i,j);
            scanf("%d", &disp[i][j]);
        }
    }
    //Displaying array elements
    printf("Two Dimensional array elements:\n");
    for(i=0; i<3; i++) {
        for(j=0;j<3;j++) {
            printf("%d ", disp[i][j]);
            if(j==2){
                printf("\n");
            }
        }
    }
    return 0;
}