#include "filesearch.h"

int main()
{
    const char* filename = "movie.bin";

    // 1. 建立電影資訊並寫入檔案
    writeMoviesToFile(filename);

    // 2. 顯示檔案裡的所有電影名稱
    showAllMovieNames(filename);

    // 3. 讓使用者輸入序號查詢詳細資料
    searchMovieByNo(filename);

    return 0;
}