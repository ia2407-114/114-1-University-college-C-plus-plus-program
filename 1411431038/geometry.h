#ifndef GEOMETRY_H
#define GEOMETRY_H

#include <string>

// 1. 基礎類別：圖形
class shape {
protected:
    std::string name;       // 圖形名稱
    float shape_area;       // 圖形面積或體積

public:
    shape();                // 建構元宣告
    void area();            // 顯示資訊函式宣告
};

// 2. 衍生類別：長方形（單層繼承自 shape）
class rectangle : public shape {
protected:
    float length;           // 長
    float width;            // 寬

public:
    void data_input();      // 輸入長寬函式宣告
};

// 3. 衍生類別：長方體（多層繼承自 rectangle）
class cube : public rectangle {
private:
    float height;           // 高

public:
    void data_input();      // 覆寫輸入函式宣告（含高與體積計算）
};

#endif
