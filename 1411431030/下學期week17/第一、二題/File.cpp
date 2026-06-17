#include "File.h"

using namespace std;
void write()
{

    struct cinema
    {
        char name[10];  // 電影名稱
        char date[9];   // 上映日期
        char place[7];  // 上映廳處 
        int price;      // 票價 
    };


    struct cinema movie;


    ofstream writebinaryfile;

    writebinaryfile.open("movie.bin", ios_base::out | ios_base::binary);
    if (writebinaryfile.fail())
    {
        cout << "movie.bin檔案無法開啟!\n";
        exit(1);
    }

    cout << "建立電影資訊:";
    do
    {
        cout << "\n電影名稱:";
        cin >> movie.name;
        cout << "上映日期:";
        cin >> movie.date;
        cout << "上映廳處:";
        cin >> movie.place;
        cout << "票價:";
        cin >> movie.price;


        writebinaryfile.write((char*)&movie, sizeof(struct cinema));

        cout << "是否繼續輸入? (y/n):";
    } while (toupper(_getche()) == 'Y');


    cout << '\n';

    writebinaryfile.close();
    if (writebinaryfile.fail())
    {
        cout << "movie.bin檔案無法關閉!\n";
        exit(1);
    }
}

void read()
{
    // 定義cinema結構型態
    struct cinema
    {
        char name[10];  // 電影名稱
        char date[9];   // 上映日期
        char place[7];  // 上映廳處 
        int price;      // 票價 
    };


    struct cinema movie;

 
    ifstream readbinaryfile;


    readbinaryfile.open("movie.bin", ios_base::in | ios_base::binary);
    if (readbinaryfile.fail())
    {
        cout << "movie.bin檔案無法開啟!\n";
        exit(1);
    }
    cout << "電影資訊:\n";

    while (1)
    {

        readbinaryfile.read((char*)&movie, sizeof(struct cinema));

        if (!readbinaryfile.eof())
        {
            cout << "電影名稱:" << movie.name << '\t'
                << "上映日期:" << movie.date << '\n'
                << "上映廳處:" << movie.place << '\t'
                << "票價:" << movie.price << "\n\n";
        }
        else
            break;
    }
     
    readbinaryfile.clear();

    readbinaryfile.close();
    if (readbinaryfile.fail())
    {
        cout << "movie.bin檔案無法關閉!\n";
        exit(1);
    }
}

void randomread() {
    // 定義cinema結構資料型態
    struct cinema
    {
        char name[10];  // 電影名稱
        char date[9];   // 上映日期
        char place[7];  // 上映廳處 
        int price;      // 票價 
    };


    struct cinema movie;


    ifstream readbinaryfile;


    readbinaryfile.open("movie.bin", ios_base::in | ios_base::binary);
    if (readbinaryfile.fail())
    {
        cout << "movie.bin檔案無法開啟!\n";
        exit(1);
    }
    cout << "電影資訊:\n";
    int i = 1;

    // 顯示所有的電影資訊 
    while (1)
    {
        // 讀取1筆cimena結構型態的資料，並存入movie結構變數
        readbinaryfile.read((char*)&movie, sizeof(struct cinema));

        // readbinaryfile串流的檔案指標不在檔尾 
        if (!readbinaryfile.eof())
            cout << i << ".電影名稱:" << movie.name << '\n';
        else
            break;
        i++;
    }

    // 清除readbinaryfile串流的狀態      
    readbinaryfile.clear();

    cout << "輸入要看的電影名稱之序號:";
    int no;  // 電影名稱序號
    cin >> no;

    // 將檔案指標移動到距離檔頭
    // 「sizeof(struct cinema)*(no-1)」個位元組的位置
    readbinaryfile.seekg(sizeof(struct cinema) * (no - 1), ios::beg);

    // 讀取1筆cimena結構型態的資料，並存入movie結構變數
    readbinaryfile.read((char*)&movie, sizeof(struct cinema));

    // 資readbinaryfile串流的檔案指標不在檔尾 
    if (!readbinaryfile.eof())
        cout << "電影名稱:" << movie.name << '\t'
        << "上映日期:" << movie.date << '\n'
        << "上映廳處:" << movie.place << '\t'
        << "票價:" << movie.price << '\n';
    else
        cout << "查無電影資料:\n";

    // 清除readbinaryfile串流的狀態      
    readbinaryfile.clear();

    readbinaryfile.close();
    if (readbinaryfile.fail())
    {
        cout << "movie.bin檔案無法關閉!\n";
        exit(1);
    }
}

