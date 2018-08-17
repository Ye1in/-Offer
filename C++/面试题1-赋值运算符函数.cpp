#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <set>
#include <assert.h>
#include <queue>
#include <utility>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
class Bitmap
{
};
class Widget
{
  public:
    void swap(Widget &rhs);

  private:
    Bitmap *pb;
};
//function 1
Widget &Widget::operator=(const Widget &rhs)
{
    Bitmap *pOrig = pb;
    pb = new Bitmap(*rhs.pb);
    delete pOrig;
    return *this;
}
//function 2
Widget &Widget::operator=(const Widget &rhs)
{
    Widget temp(rhs);
    swap(temp);
    return *this;
}
Widget &Widget::operator=(const Widget rhs)
{
    swap(rhs);
    return *this;
}
