#include <stdio.h>
#define SIZE 10
#define NAME_LEN 20

// p.333 拷貝副程式（你原本的 copy1）
void copy1(char* s1, const char* s2)
{
    for (; ((*s1 = *s2) != '\0'); ++s1, ++s2);
}

// 交換兩個 int（傳位址）
void swap_int(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// 交換兩個 float（傳位址）
void swap_float(float* a, float* b)
{
    float t = *a;
    *a = *b;
    *b = t;
}

// 交換兩個「學生資料列」(3 個欄位)：stu[i][0..2]
// stu 是 10x3，所以一列就是 int row[3]
void swap_row3(int rowA[3], int rowB[3])
{
    for (int k = 0; k < 3; k++) {
        swap_int(&rowA[k], &rowB[k]);
    }
}

// 字串交換副程式：必須用 copy1 完成
// 注意：name[i] 指向可寫的字元陣列（name_buf[i]），所以能交換內容
void swap_name(char* a, char* b)
{
    char temp[NAME_LEN];
    copy1(temp, a);
    copy1(a, b);
    copy1(b, temp);
}

// 依平均由大到小排序（泡沫排序），全部資料一起換
void sort_by_avg_desc(char* name[], int stu[][3], float avg[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (avg[j] < avg[j + 1]) {
                swap_float(&avg[j], &avg[j + 1]);
                swap_row3(stu[j], stu[j + 1]);
                swap_name(name[j], name[j + 1]);
            }
        }
    }
}

int main(void)
{
    // 1) 姓名：指標陣列 name，字串本體放在 name_buf
    const char* init_name[SIZE] = {
        "Danny","Mary","Jimmy","Peter","Sue",
        "John","Hearts","Diamonds","Clubs","Spades"
    };

    char name_buf[SIZE][NAME_LEN];
    char* name[SIZE];

    for (int i = 0; i < SIZE; i++) {
        name[i] = name_buf[i];          // 指標指向每個可寫的字串空間
        copy1(name_buf[i], init_name[i]); // 用 copy1 拷貝進去
    }

    // 2) 10x3 整數陣列：每列一個學生
    // 欄位約定：0=學號, 1=數學, 2=計概
    int stu[SIZE][3] = {
        {11, 70, 85},
        {15, 80, 92},
        {13, 75, 78},
        {18, 90, 85},
        {12, 85, 90},
        {17, 70, 85},
        {14, 82, 76},
        {19, 92, 95},
        {16, 88, 88},
        {20, 70, 85}
    };

    // 3) 平均成績 float[10]
    float avg[SIZE];

    for (int i = 0; i < SIZE; i++) {
        avg[i] = (stu[i][1] + stu[i][2]) / 2.0f;
    }

    printf("排序前：\n");
    printf("姓名\t學號\t數學成績\t計概成績\t平均成績\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%s\t%d\t%d\t\t%d\t\t%.2f\n",
            name[i], stu[i][0], stu[i][1], stu[i][2], avg[i]);
    }

    // 4) 排序（依平均由大到小）
    sort_by_avg_desc(name, stu, avg, SIZE);

    printf("\n排序後（依平均成績由大到小）：\n");
    printf("姓名\t學號\t數學成績\t計概成績\t平均成績\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%s\t%d\t%d\t\t%d\t\t%.2f\n",
            name[i], stu[i][0], stu[i][1], stu[i][2], avg[i]);
    }

    return 0;
}
