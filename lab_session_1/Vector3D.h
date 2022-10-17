class Vector3D{
    public:
    // Here we define the constructor function
    Vector3D(double x, double y, double z);

    //Here we define the getters
    double x();
    double y();
    double z();

    //Here we define the setters
    void setx(double x);
    void sety(double y);
    void setz(double z);

    //Here we define a print utility
    void print();

    //Here we define the member functions
    Vector3D vectorProduct(Vector3D v);
    double scalarProduct(Vector3D v);
    double angle(Vector3D v);
    double magnitude();
    double theta();
    double phi();

    //Here we define the operators between objects
    Vector3D operator+(const Vector3D& v) const;
    Vector3D operator-(const Vector3D& v) const;
    Vector3D operator*(const double& v) const;
    Vector3D operator/(const double& v) const;
    Vector3D operator=(const Vector3D& v);

    //Here we define two functions that convert between coordinates
    Vector3D spherical();
    Vector3D rectangular();

    private:
    double x_, y_, z_;

};
