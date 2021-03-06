#pragma once

#include <cstdint>

#include "CResRef.hpp"

namespace NWNXLib {

namespace API {

// Forward class declarations (defined in the source file)
struct CResPWK;

struct CResHelperTemplatedCResPWK2053u
{
    void** m_vtable;
    int32_t m_bAutoRequest;
    CResPWK* m_pRes;
    CResRef m_cResRef;
};

}

}
