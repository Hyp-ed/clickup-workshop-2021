

class Rectangle {

    public:
        
        Rectangle(int hei, int wid){

              h = hei;
              w = wid;

        }

        void setHeight(int h);
        void setWidth(int w);
        
        int getHeight();
        int getWidth();

        int getArea();
        int getPerimeter();    

    private:
        int h;
        int w;
};