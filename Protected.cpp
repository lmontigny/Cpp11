/*
Public members of a class A are accessible for all and everyone.

Protected members of a class A are not accessible outside of A's code, but is accessible from the code of any class derived from A.

Private members of a class A are not accessible outside of A's code, or from the code of any class derived from A.
*/

class Example
{
public:
  void foo()
  {
    pub = 0;  // all okay!
    prot = 0;
    priv = 0;
  }

public:
  int pub;
protected:
  int prot;
private:
  int priv;
};

class Derived : public Example  // Derived is a child of Example
{
public:
  void bar()
  {
    pub = 0;  // okay -- public means i can access it
    prot = 0; // okay -- protected, but I'm a child, so I can access it
    priv = 0; // ERROR -- private, I can't access it
  }
};

class SomeOtherClass // not related to Example
{
public:
  void test(Example& e)
  {
    e.pub = 0; // okay -- public
    e.prot = 0; // ERROR -- I'm not a child, can't access it
    e.priv = 0; // ERROR
  }
};
