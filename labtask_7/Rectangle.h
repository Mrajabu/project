
#include <string>

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(); // Default constructor
    ~Rectangle(); // Destructor

    // Accessor methods
    void setLength(float l);
    void setWidth(float w);
    float getLength() const;
    float getWidth() const;

    // Function to calculate area
    float calculateArea() const;
};
