#include <iostream>
using namespace std;

#include "myclass.h"


#ifdef __cplusplus
extern "C"
{
#endif


/* extern "C" */int call_cpp_class_add(int a, int b)
{
    MyClass mc;

    return mc.add(a, b);
}




#ifdef __cplusplus
}
#endif
