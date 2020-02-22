#ifndef UTILITY_H
#define UTILITY_H

#include <typeindex>
#include <typeinfo>
#include <cxxabi.h>
#include <memory>
#include <string>
#include <windows.h>

namespace UTIL
{
    static const char *Demangle(const char *name)
    {
     char buffer[1024];
     size_t size=1024;
     int status;
     char *ret=abi::__cxa_demangle(name,buffer,&size,&status);
     return ret;
    }

    template<typename T>
    const char *Get_type(T var)
    {
     return Demangle(typeid(T).name());
    }

    template<typename T>
    const char *Get_type()
    {
     return Demangle(typeid(T).name());
    }

    bool Set_console_size(int width, int height);
}

template<typename T, typename... Args>
std::unique_ptr<T> make_unique(Args&&... args)
{
 return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

#endif // UTILITY_H
