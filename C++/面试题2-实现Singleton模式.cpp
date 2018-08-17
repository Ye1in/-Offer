#include <iostream>
class Singleton
{
public:
  static Singleton *getInstance();

private:
  Singleton();
  Singleton(const &Singleton);
  Singleton &operator=(const &Singleton);
  static Singleton *instance;
};
Singleton *Singleton::instance = new Singleton();
Singleton *Singleton::getInstance()
{
  if (instance == NULL)
  {
    lock();
    if (instance == NULL)
    {
      instance = new Singleton();
    }
    unlock();
  }
}