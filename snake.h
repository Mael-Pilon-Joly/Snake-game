#include <iostream>

class Snake {
      int length;
      int width;
      int location_x;
      int location_y;

    public:

      int getLength(){
        return this->length;
      }

      int getWidth() {
        return this->width;
      }

      int getLocationX(){
        return this->location_x;
      }

      int getLocationY(){
        return this->location_y;
      }

      void setLength(int x){
        this->length = x;
        std::cout << "Set to length " << x << "\n";
      }

      void setWidth(int x){
        this->width = x;
        std::cout << "Set to width " << x << "\n";
      }

      void setLocationX(int x){
        this->location_x = x;
      }

      void setLocationY(int y){
        this->location_y = y;
      }
};