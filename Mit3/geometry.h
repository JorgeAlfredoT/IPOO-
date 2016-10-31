class Point{
private:
  int x,y;
public:
  Point(int x=0, int y=0);
  ~Point();
  void setX(const int new_x);
  void setY(const int new_y);
  int getX();
  int getY();
  void printPoint();
};


class PointArray: public Point {
private:
  int size;
  Point *data;
public:
  PointArray();
  ~PointArray();
  PointArray(PointArray &o);
  PointArray(const Point [],const int);
  void printPointArray();
  void push_back(const Point &);

};
