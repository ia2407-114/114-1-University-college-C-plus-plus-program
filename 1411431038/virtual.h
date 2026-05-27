#ifndef virtual_H
#define virtual_H

// 抽象基底類別
class Shap {
public:
    virtual double Volume() const = 0;
    virtual ~Shap() {}           
};

// 圓錐體類別宣告
class Cone : public Shap {
private:
    double radius;
    double height;
public:
    Cone(double r, double h);         
    virtual double Volume() const override;    
};

// 球體類別宣告
class Sphere : public Shap {
private:
    double radius;
public:
    Sphere(double r);
    virtual double Volume() const override;
};

// 圓柱體類別宣告
class Cylinder : public Shap {
private:
    double radius;
    double height;
public:
    Cylinder(double r, double h);
    virtual double Volume() const override;
};

#endif 
