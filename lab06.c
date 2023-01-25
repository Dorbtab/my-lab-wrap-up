/*

สรุป lab06

ข้อที่ 1

#include <stdio.h>

int main() {

    int h, m;
    char fm, lm;

    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %c%c", &h, &m, &fm, &lm);

    if (fm == 'A' || fm == 'a'){
        if (h == 12)
            h = 0;
    }else if (fm == 'P' || fm == 'p')
        if (h < 12)
            h = h + 12;

    printf("Equivalent 24-hour time: %02d:%02d", h, m);
    return 0;
}

----------------------------------------------------------------

ข้อที่ 2

#include <stdio.h>


int main() {

    int n = 0, credit = 0, totalCredit = 0;
    float gpa = 0 , totalQuality = 0;
    char gradeChar;
    int gradeNum;

    printf("Enter number of subject(s): ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n){
        printf("Enter credit,grade for subject #%d: ", i);
        scanf("%d,%c", &credit, &gradeChar);
        if (gradeChar == 'A' || gradeChar == 'a')
            gradeNum = 4.0;
        else if (gradeChar == 'B' || gradeChar == 'b')
            gradeNum = 3.0;
        else if (gradeChar == 'C' || gradeChar == 'c')
            gradeNum = 2.0;
        else if (gradeChar == 'D' || gradeChar == 'd')
            gradeNum = 1.0;
        if (gradeChar == 'F' || gradeChar == 'f')
            gradeNum = 0.0;

        totalQuality += credit*gradeNum;
        totalCredit += credit;

        i++;
    }

    gpa = totalQuality/totalCredit;
    printf("GPA = %.2f", gpa);
    

    return 0;
}

----------------------------------------------------------------

ข้อที่ 3

#include <stdio.h>
#define ARRAY_SIZE 99


int main() {

    int i, j;
    int A[ARRAY_SIZE] = {0};

    for (i = 2; i < ARRAY_SIZE; i++)
        A[i] = 1;

    for (i = 2; i < ARRAY_SIZE; i++) {
        for (j = 2; j < ARRAY_SIZE; j++)
            if (j%i == 0 && j != i)
                A[j] = 0;
    }

    for (i = 2; i < ARRAY_SIZE; i++)
        if (A[i] == 1)
            printf("%d ",i);
    
    printf("\n");
    return 0;
}

----------------------------------------------------------------

ข้อที่ 4

#include <stdio.h>

#define BOARD_SIZE    8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main() {
    
    int board[BOARD_SIZE][BOARD_SIZE] = {0};

    int numPieces;
    char pieceChar;

    scanf("%d", &numPieces);
    
    for (int i = 0; i < numPieces; i++){
        int x, y;
        scanf(" %c(%d, %d)", &pieceChar, &x, &y);
        setPieceOnTable(board, pieceChar, y, x);
    }
    
    printf("------------------\n");
    printf("  0 1 2 3 4 5 6 7\n");

    for (int i = 0; i < BOARD_SIZE; i++){
        printf("%d|", i);
        for (int j = 0; j < BOARD_SIZE; j++){
            if (board[i][j] == 0)
                printf(" |", board[i][j]);
            else    
                printf("%c|", board[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos )
{ 
    board[xPos][yPos] = piece;
}

----------------------------------------------------------------

ข้อที่ 5

#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(int board[][BOARD_SIZE], int i, int j) {
  
    int gap = i - j;
    int add = i + j;
    int m, n;
    for (m = 0; m < BOARD_SIZE; m++){
        printf("%d|",m);
        for (n = 0; n < BOARD_SIZE; n++){
            if (m == i && n == j)
                board[m][n] = 'B';
            else if ( (m-n == gap) || (m + n == add))
                board[m][n] = 'X';
            else    
                board[m][n] = ' ';
            printf("%c|", board[m][n]);
        }
        printf("\n------------------\n");
    }
    


}

int main() {

  
    int board[BOARD_SIZE][BOARD_SIZE] = {0};
    int x, y;
    int i, j;
    
    printf("Enter Bishop's X Y position: ");
    scanf("%d %d", &x, &y);
    printf("  0 1 2 3 4 5 6 7\n");
    printf("------------------\n");
    bishopMoves(board, y, x);


}

----------------------------------------------------------------

ข้อที่ 6

#include<stdio.h>
int main()
{
    char item[25] = "Computer Programming";
    char *a1=item, *a2;
    printf("%s\n",a1);
    a2 = &item[5];
    printf("%s\n",a2);
    a2 =&item[8];
    printf("%s\n",a2);
    return 0;
}

----------------------------------------------------------------

ข้อที่ 7

#include <stdio.h>

void removeTarget(int *array, int size, int target);

int main()
{
	int num, count, target, i;

	scanf("%d", &num);
	scanf("%d", &count);

	int numbers[num];
	int *numbersPtr = &numbers[0];

	// initialize array numbers from 1 to num by numbersPtr
	for (i = 1; i <= num; numbersPtr++) {
	   *numbersPtr =
        *numbersPtr = i++;
	}

	// loop through count
	for (i = 0; i < count; i++) {
		scanf("%d", &target);
		removeTarget(&numbers[0], num, target);
	}

	numbersPtr = &numbers[0];

	// print elements in numbers using numberPtr
	for (; numbersPtr < &numbers[num]; numbersPtr++) {
	       printf("%d ", *numbersPtr);
	}
	puts("");
	return 0;
}

// remove target from array by pointer *array and append last position by 0
void removeTarget(int *array, int size, int target)
{
   
    int *arr = array;
    int t = 0;
    for (int i = 0; i < size; array++){
        if (i == (size - 1) && t == 1){
            *array = 0;
        }
        else if (*array == target){
            *array = *(array + 1);
            target = *array;
            t = 1;
        }   
        i++;
    }

}

----------------------------------------------------------------

ข้อที่ 8

#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner);

int main()
{
	int numPrisoners, m, i;

	scanf("%d", &numPrisoners);
	scanf("%d", &m);

	int prisoners[numPrisoners];
	int killed[numPrisoners];

	// generate array 1 to numPrisoners
	for (i = 0; i < numPrisoners; i++) {
		prisoners[i] = i + 1;
	}

	int *killerPtr = &prisoners[0];

	// printf("@@ &prisoners[0] %d\n", (int) &prisoners[0]);
	// printf("@@ &prisoners[%d] %d\n", numPrisoners - 1, (int) &prisoners[numPrisoners - 1]);

	// Select prisoner to be killed
	for (i = 0; i < numPrisoners; i++) {
        int f = 0;
        int c = 0;
        int g = 0;
        
        // for (int g = 0; g < numPrisoners; g++) 
		//     printf("%d ",prisoners[g]);
        // printf("\n");

        while (c < m){
            if (i == 0 && f == 0){
                f += 1; 
                c++;
            }
            
            else{
                killerPtr++;
                
                for (g = 0; g < numPrisoners; g++){
                    if (killerPtr > &prisoners[numPrisoners - 1]){
                        killerPtr = &prisoners[0];
                    }
                    else if (*killerPtr == 0){
                        killerPtr++;
                        
                    }
                    else{
                        break;
                    }
                }
                c++;
                // printf("*killerPtr in g = %d, c = %d\n", *killerPtr, c);
            }
        }


		// append number of prisoner who is killed to array `killed`
		killed[i] = *killerPtr;
		// remove number killed prisoner from array `prisoners`
		removeKilled(&prisoners[0], numPrisoners, *killerPtr);

	}

	for (i = 0; i < numPrisoners; i++) {
		printf("%d ", killed[i]);
	}
	return 0;
}

void removeKilled(int *array, int size, int killedPrisoner)
{
for (int i = 0; i < size; i++){
        // printf("killedPrisoners = %d\n", killedPrisoner);
        // printf("*array = %d\n", *array);
        if (*array == killedPrisoner){
            *array = 0;
            break;
        }
        array++;
    }

}

*/