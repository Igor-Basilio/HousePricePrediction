########## MACROS ###########################################################################
#############################################################################################

# Requires CMake > 3.15
if(${CMAKE_VERSION} VERSION_LESS "3.15")
    message(FATAL_ERROR "The 'CMakeDeps' generator only works with CMake >= 3.15")
endif()

if(libxcrypt_FIND_QUIETLY)
    set(libxcrypt_MESSAGE_MODE VERBOSE)
else()
    set(libxcrypt_MESSAGE_MODE STATUS)
endif()

include(${CMAKE_CURRENT_LIST_DIR}/cmakedeps_macros.cmake)
include(${CMAKE_CURRENT_LIST_DIR}/libxcryptTargets.cmake)
include(CMakeFindDependencyMacro)

check_build_type_defined()

foreach(_DEPENDENCY ${libxcrypt_FIND_DEPENDENCY_NAMES} )
    # Check that we have not already called a find_package with the transitive dependency
    if(NOT ${_DEPENDENCY}_FOUND)
        find_dependency(${_DEPENDENCY} REQUIRED ${${_DEPENDENCY}_FIND_MODE})
    endif()
endforeach()

set(libxcrypt_VERSION_STRING "4.4.36")
set(libxcrypt_INCLUDE_DIRS ${libxcrypt_INCLUDE_DIRS_RELEASE} )
set(libxcrypt_INCLUDE_DIR ${libxcrypt_INCLUDE_DIRS_RELEASE} )
set(libxcrypt_LIBRARIES ${libxcrypt_LIBRARIES_RELEASE} )
set(libxcrypt_DEFINITIONS ${libxcrypt_DEFINITIONS_RELEASE} )


# Only the last installed configuration BUILD_MODULES are included to avoid the collision
foreach(_BUILD_MODULE ${libxcrypt_BUILD_MODULES_PATHS_RELEASE} )
    message(${libxcrypt_MESSAGE_MODE} "Conan: Including build module from '${_BUILD_MODULE}'")
    include(${_BUILD_MODULE})
endforeach()


