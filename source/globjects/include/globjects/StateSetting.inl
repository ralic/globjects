
#pragma once


#include <globjects/base/FunctionCall.h>


namespace globjects
{


template <typename... Arguments>
StateSetting::StateSetting(void (*function)(Arguments...), Arguments... arguments)
    : StateSetting(std::unique_ptr<AbstractFunctionCall>(new FunctionCall<Arguments...>(function, arguments...)))
{
}


} // namespace globjects
