#include <Functions/FunctionFactory.h>
#include <Functions/FunctionStringToString.h>
#include <Functions/firstSignificantSubdomain.h>


namespace DB
{

struct NameFirstSignificantSubdomain { static constexpr auto name = "firstSignificantSubdomain"; };
using FunctionFirstSignificantSubdomain = FunctionStringToString<ExtractSubstringImpl<ExtractFirstSignificantSubdomain>, NameFirstSignificantSubdomain>;

void registerFunctionFirstSignificantSubdomain(FunctionFactory & factory)
{
    factory.registerFunction<FunctionFirstSignificantSubdomain>();
}

}
