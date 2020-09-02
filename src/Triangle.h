class Triangle
{

private:
    double side1;
    double side2;
    double side3;

public:
    // Constructor
    Triangle(double s1, double s2, double s3)
    {
        this->side1 = s1;
        this->side2 = s2;
        this->side3 = s3;
    }

    // Getters
    double getSide1() { return this->side1; }
    double getSide2() { return this->side2; }
    double getSide3() { return this->side3; }

    // Setters
    void setSide(double s1, double s2, double s3)
    {
        this->side1 = s1;
        this->side2 = s2;
        this->side3 = s3;
    }

    // Instances methods
    double getArea();

    // Static methods
    static double sumAreas(Triangle *triangles[], int numTriangles)
    {
        double sum = 0.0;
        for (int i = 0; i < numTriangles; i++)
        {
            sum += triangles[i]->getArea();
        }
        return sum;
    }
};