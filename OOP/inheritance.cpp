#include <iostream> // for iostream
class BaseClass{
    public:
      void function1();
    private:
      void function2();
    protected:
      void function3();
};

// ! Private functions are inaccessible 
class DerivedClass : public BaseClass {
    // functions type remains same 
};

class DerivedClass2: protected BaseClass{
    // public -> protected
    // protected -> protected
};

class DerivedClass3: private BaseClass{
    // public -> private
    //protected -> private
};