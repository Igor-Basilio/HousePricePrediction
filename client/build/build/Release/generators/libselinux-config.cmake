########## MACROS ###########################################################################
#############################################################################################

# Requires CMake > 3.15
if(${CMAKE_VERSION} VERSION_LESS "3.15")
    message(FATAL_ERROR "The 'CMakeDeps' generator only works with CMake >= 3.15")
endif()

if(libselinux_FIND_QUIETLY)
    set(libselinux_MESSAGE_MODE VERBOSE)
else()
    set(libselinux_MESSAGE_MODE STATUS)
endif()

include(${CMAKE_CURRENT_LIST_DIR}/cmakedeps_macros.cmake)
include(${CMAKE_CURRENT_LIST_DIR}/libselinuxTargets.cmake)
include(CMakeFindDependencyMacro)

check_build_type_defined()

foreach(_DEPENDENCY ${libselinux_FIND_DEPENDENCY_NAMES} )
    # Check that we have not already called a find_package with the transitive dependency
    if(NOT ${_DEPENDENCY}_FOUND)
        find_dependency(${_DEPENDENCY} REQUIRED ${${_DEPENDENCY}_FIND_MODE})
    endif()
endforeach()

set(libselinux_VERSION_STRING "3.6")
set(libselinux_INCLUDE_DIRS ${libselinux_INCLUDE_DIRS_RELEASE} )
set(libselinux_INCLUDE_DIR ${libselinux_INCLUDE_DIRS_RELEASE} )
set(libselinux_LIBRARIES ${libselinux_LIBRARIES_RELEASE} )
set(libselinux_DEFINITIONS ${libselinux_DEFINITIONS_RELEASE} )


# Only the last installed configuration BUILD_MODULES are included to avoid the collision
foreach(_BUILD_MODULE ${libselinux_BUILD_MODULES_PATHS_RELEASE} )
    message(${libselinux_MESSAGE_MODE} "Conan: Including build module from '${_BUILD_MODULE}'")
    include(${_BUILD_MODULE})
endforeach()


