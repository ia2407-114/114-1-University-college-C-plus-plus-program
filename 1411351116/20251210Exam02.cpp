/*題目2 :建立兩個大小為10的整數陣列，分別存放學生學號以對應的計概成績。
寫一個排序副程式，將兩個陣列傳遞至副程式中，依照計概成績由小到大排序，
由主程式印出排序後的結果。
id[ ]學號: {12,13,14,15,16,17,19,21,22,23,24,26,27,28,29,31,32,33,36,37}
score[ ]成績: {66,67,66,70,73,74,75,75,62,32,44,46,27,12,80,63,66,90,11,66}*/

#include <stdio.h>
#define SIZE 20
void rate(int id[], int score[]);
int main() {
	int id[SIZE] = { 12,13,14,15,16,17,19,21,22,23,24,26,27,28,29,31,32,33,36,37 };
	int score[SIZE] = { 66,67,66,70,73,74,75,75,62,32,44,46,27,12,80,63,66,90,11,66 };
	rate(id, score);
	for (int i = 0; i < SIZE; i++) {
		printf("學號: %d,成績: %d\n",id[i],score[i]);
	}
}
void rate(int id[], int score[]) {
	for (int i = 0; i < SIZE - 1; i++) {
		for (int j = 0; j < SIZE - 1 - i; j++) {
			if (score[j] > score[j + 1]) {
				int temp = score[j];
				score[j] = score[j + 1];
				score[j + 1] = temp;

				int temp2 = id[j];
				id[j] = id[j + 1];
				id[j + 1] = temp2;
			}
		}
	}
	
}