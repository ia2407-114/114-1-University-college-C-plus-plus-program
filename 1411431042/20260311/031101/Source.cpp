#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

struct student {
    int id;
    string name;
    int computer;
    int math;
    double avg;
};

struct listNode {
    student data;
    listNode* nextPtr;
};

typedef listNode* ListNodePtr;

bool isEmpty(ListNodePtr sPtr);
void insert(ListNodePtr& sPtr, student stu);
void printList(ListNodePtr currentPtr);
bool deleteNode(ListNodePtr& sPtr, int id);

int main()
{
    ListNodePtr startPtr = NULL;

    int n;
    cout << "輸入學生人數: ";
    cin >> n;

    student stu;

    for (int i = 0; i < n; i++)
    {
        cout << "\n輸入 id name computer math: ";
        cin >> stu.id >> stu.name >> stu.computer >> stu.math;

        stu.avg = (stu.computer + stu.math) / 2.0;

        insert(startPtr, stu);
    }

    cout << "\n學生鏈結串列內容:\n";
    printList(startPtr);

    int id;

    while (true)
    {
        cout << "\n輸入要刪除的學生id (輸入0結束): ";
        cin >> id;

        if (id == 0)
            break;

        if (deleteNode(startPtr, id))
            cout << "刪除成功\n";
        else
            cout << "找不到資料\n";

        cout << "\n目前鏈結串列內容:\n";
        printList(startPtr);
    }

    cout << "\n程式結束\n";

    return 0;
}

bool isEmpty(ListNodePtr sPtr)
{
    return sPtr == NULL;
}

void insert(ListNodePtr& sPtr, student stu)
{
    ListNodePtr newPtr = new listNode;

    newPtr->data = stu;
    newPtr->nextPtr = NULL;

    ListNodePtr previousPtr = NULL;
    ListNodePtr currentPtr = sPtr;

    while (currentPtr != NULL && stu.id > currentPtr->data.id)
    {
        previousPtr = currentPtr;
        currentPtr = currentPtr->nextPtr;
    }

    if (previousPtr == NULL)
    {
        newPtr->nextPtr = sPtr;
        sPtr = newPtr;
    }
    else
    {
        previousPtr->nextPtr = newPtr;
        newPtr->nextPtr = currentPtr;
    }
}

bool deleteNode(ListNodePtr& sPtr, int id)
{
    ListNodePtr previousPtr = NULL;
    ListNodePtr currentPtr = sPtr;

    while (currentPtr != NULL && currentPtr->data.id != id)
    {
        previousPtr = currentPtr;
        currentPtr = currentPtr->nextPtr;
    }

    if (currentPtr == NULL)
        return false;

    if (previousPtr == NULL)
        sPtr = currentPtr->nextPtr;
    else
        previousPtr->nextPtr = currentPtr->nextPtr;

    delete currentPtr;
    return true;
}

void printList(ListNodePtr currentPtr)
{
    if (isEmpty(currentPtr))
    {
        cout << "List is empty\n";
    }
    else
    {
        cout << "ID\tName\tComp\tMath\tAvg\n";

        while (currentPtr != NULL)
        {
            cout << currentPtr->data.id << "\t"
                << currentPtr->data.name << "\t"
                << currentPtr->data.computer << "\t"
                << currentPtr->data.math << "\t"
                << currentPtr->data.avg << endl;

            currentPtr = currentPtr->nextPtr;
        }
    }
}