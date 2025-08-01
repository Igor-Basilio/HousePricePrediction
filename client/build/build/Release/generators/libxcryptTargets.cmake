# Load the debug and release variables
file(GLOB DATA_FILES "${CMAKE_CURRENT_LIST_DIR}/libxcrypt-*-data.cmake")

foreach(f ${DATA_FILES})
    include(${f})
endforeach()

# Create the targets for all the components
foreach(_COMPONENT ${libxcrypt_COMPONENT_NAMES} )
    if(NOT TARGET ${_COMPONENT})
        add_library(${_COMPONENT} INTERFACE IMPORTED)
        message(${libxcrypt_MESSAGE_MODE} "Conan: Component target declared '${_COMPONENT}'")
    endif()
endforeach()

if(NOT TARGET libxcrypt::libxcrypt)
    add_library(libxcrypt::libxcrypt INTERFACE IMPORTED)
    message(${libxcrypt_MESSAGE_MODE} "Conan: Target declared 'libxcrypt::libxcrypt'")
endif()
# Load the debug and release library finders
file(GLOB CONFIG_FILES "${CMAKE_CURRENT_LIST_DIR}/libxcrypt-Target-*.cmake")

foreach(f ${CONFIG_FILES})
    include(${f})
endforeach()