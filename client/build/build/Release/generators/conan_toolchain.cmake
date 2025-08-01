# Conan automatically generated toolchain file
# DO NOT EDIT MANUALLY, it will be overwritten

# Avoid including toolchain file several times (bad if appending to variables like
#   CMAKE_CXX_FLAGS. See https://github.com/android/ndk/issues/323
include_guard()
message(STATUS "Using Conan toolchain: ${CMAKE_CURRENT_LIST_FILE}")
if(${CMAKE_VERSION} VERSION_LESS "3.15")
    message(FATAL_ERROR "The 'CMakeToolchain' generator only works with CMake >= 3.15")
endif()

########## 'user_toolchain' block #############
# Include one or more CMake user toolchain from tools.cmake.cmaketoolchain:user_toolchain



########## 'generic_system' block #############
# Definition of system, platform and toolset





########## 'compilers' block #############



########## 'arch_flags' block #############
# Define C++ flags, C flags and linker flags from 'settings.arch'

message(STATUS "Conan toolchain: Defining architecture flag: -m64")
string(APPEND CONAN_CXX_FLAGS " -m64")
string(APPEND CONAN_C_FLAGS " -m64")
string(APPEND CONAN_SHARED_LINKER_FLAGS " -m64")
string(APPEND CONAN_EXE_LINKER_FLAGS " -m64")


########## 'libcxx' block #############
# Definition of libcxx from 'compiler.libcxx' setting, defining the
# right CXX_FLAGS for that libcxx



########## 'cppstd' block #############
# Define the C++ and C standards from 'compiler.cppstd' and 'compiler.cstd'

function(conan_modify_std_watch variable access value current_list_file stack)
    set(conan_watched_std_variable "20")
    if (${variable} STREQUAL "CMAKE_C_STANDARD")
        set(conan_watched_std_variable "")
    endif()
    if ("${access}" STREQUAL "MODIFIED_ACCESS" AND NOT "${value}" STREQUAL "${conan_watched_std_variable}")
        message(STATUS "Warning: Standard ${variable} value defined in conan_toolchain.cmake to ${conan_watched_std_variable} has been modified to ${value} by ${current_list_file}")
    endif()
    unset(conan_watched_std_variable)
endfunction()

message(STATUS "Conan toolchain: C++ Standard 20 with extensions ON")
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
variable_watch(CMAKE_CXX_STANDARD conan_modify_std_watch)


########## 'extra_flags' block #############
# Include extra C++, C and linker flags from configuration tools.build:<type>flags
# and from CMakeToolchain.extra_<type>_flags

# Conan conf flags start: 
# Conan conf flags end


########## 'cmake_flags_init' block #############
# Define CMAKE_<XXX>_FLAGS from CONAN_<XXX>_FLAGS

foreach(config IN LISTS CMAKE_CONFIGURATION_TYPES)
    string(TOUPPER ${config} config)
    if(DEFINED CONAN_CXX_FLAGS_${config})
      string(APPEND CMAKE_CXX_FLAGS_${config}_INIT " ${CONAN_CXX_FLAGS_${config}}")
    endif()
    if(DEFINED CONAN_C_FLAGS_${config})
      string(APPEND CMAKE_C_FLAGS_${config}_INIT " ${CONAN_C_FLAGS_${config}}")
    endif()
    if(DEFINED CONAN_SHARED_LINKER_FLAGS_${config})
      string(APPEND CMAKE_SHARED_LINKER_FLAGS_${config}_INIT " ${CONAN_SHARED_LINKER_FLAGS_${config}}")
    endif()
    if(DEFINED CONAN_EXE_LINKER_FLAGS_${config})
      string(APPEND CMAKE_EXE_LINKER_FLAGS_${config}_INIT " ${CONAN_EXE_LINKER_FLAGS_${config}}")
    endif()
endforeach()

if(DEFINED CONAN_CXX_FLAGS)
  string(APPEND CMAKE_CXX_FLAGS_INIT " ${CONAN_CXX_FLAGS}")
endif()
if(DEFINED CONAN_C_FLAGS)
  string(APPEND CMAKE_C_FLAGS_INIT " ${CONAN_C_FLAGS}")
endif()
if(DEFINED CONAN_SHARED_LINKER_FLAGS)
  string(APPEND CMAKE_SHARED_LINKER_FLAGS_INIT " ${CONAN_SHARED_LINKER_FLAGS}")
endif()
if(DEFINED CONAN_EXE_LINKER_FLAGS)
  string(APPEND CMAKE_EXE_LINKER_FLAGS_INIT " ${CONAN_EXE_LINKER_FLAGS}")
endif()


########## 'extra_variables' block #############
# Definition of extra CMake variables from tools.cmake.cmaketoolchain:extra_variables



########## 'try_compile' block #############
# Blocks after this one will not be added when running CMake try/checks

get_property( _CMAKE_IN_TRY_COMPILE GLOBAL PROPERTY IN_TRY_COMPILE )
if(_CMAKE_IN_TRY_COMPILE)
    message(STATUS "Running toolchain IN_TRY_COMPILE")
    return()
endif()


########## 'find_paths' block #############
# Define paths to find packages, programs, libraries, etc.
if(EXISTS "${CMAKE_CURRENT_LIST_DIR}/conan_cmakedeps_paths.cmake")
  message(STATUS "Conan toolchain: Including CMakeDeps generated conan_cmakedeps_paths.cmake")
  include("${CMAKE_CURRENT_LIST_DIR}/conan_cmakedeps_paths.cmake")
else()

set(CMAKE_FIND_PACKAGE_PREFER_CONFIG ON)

# Definition of CMAKE_MODULE_PATH
list(PREPEND CMAKE_MODULE_PATH "/home/Igor/.conan2/p/b/proto8f407a57f53e3/p/lib/cmake/protobuf" "/home/Igor/.conan2/p/b/opens77e4f8a23c001/p/lib/cmake")
# the generators folder (where conan generates files, like this toolchain)
list(PREPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR})

# Definition of CMAKE_PREFIX_PATH, CMAKE_XXXXX_PATH
# The explicitly defined "builddirs" of "host" context dependencies must be in PREFIX_PATH
list(PREPEND CMAKE_PREFIX_PATH "/home/Igor/.conan2/p/b/proto8f407a57f53e3/p/lib/cmake/protobuf" "/home/Igor/.conan2/p/b/opens77e4f8a23c001/p/lib/cmake")
# The Conan local "generators" folder, where this toolchain is saved.
list(PREPEND CMAKE_PREFIX_PATH ${CMAKE_CURRENT_LIST_DIR} )
list(PREPEND CMAKE_LIBRARY_PATH "/home/Igor/.conan2/p/b/grpc4476e4ecef39b/p/lib" "/home/Igor/.conan2/p/b/proto8f407a57f53e3/p/lib" "/home/Igor/.conan2/p/b/absei0ae0473405a93/p/lib" "/home/Igor/.conan2/p/b/c-are5036133917c49/p/lib" "/home/Igor/.conan2/p/b/opens77e4f8a23c001/p/lib" "/home/Igor/.conan2/p/b/re2b46574a43da85/p/lib" "/home/Igor/.conan2/p/b/libsy2fad5ae2f0003/p/lib" "/home/Igor/.conan2/p/b/libca1294f98fd0832/p/lib" "/home/Igor/.conan2/p/b/libmodcb9ad120de9a/p/lib" "/home/Igor/.conan2/p/b/libxcc89651afcd14a/p/lib" "/home/Igor/.conan2/p/b/libse74ec6ba591d85/p/lib" "/home/Igor/.conan2/p/b/pcre222e79b7521c2a/p/lib" "/home/Igor/.conan2/p/b/zlib5469ac630c9be/p/lib" "/home/Igor/.conan2/p/b/bzip22e4f36a5ab7ba/p/lib" "/home/Igor/.conan2/p/b/lz4192c96358ce80/p/lib" "/home/Igor/.conan2/p/b/xz_ut9bb4db01684dd/p/lib" "/home/Igor/.conan2/p/b/zstd63a8be83009b6/p/lib")
list(PREPEND CMAKE_INCLUDE_PATH "/home/Igor/.conan2/p/b/grpc4476e4ecef39b/p/include" "/home/Igor/.conan2/p/b/proto8f407a57f53e3/p/include" "/home/Igor/.conan2/p/b/absei0ae0473405a93/p/include" "/home/Igor/.conan2/p/b/c-are5036133917c49/p/include" "/home/Igor/.conan2/p/b/opens77e4f8a23c001/p/include" "/home/Igor/.conan2/p/b/re2b46574a43da85/p/include" "/home/Igor/.conan2/p/b/libsy2fad5ae2f0003/p/include" "/home/Igor/.conan2/p/b/libca1294f98fd0832/p/include" "/home/Igor/.conan2/p/b/libmodcb9ad120de9a/p/include" "/home/Igor/.conan2/p/b/libmodcb9ad120de9a/p/include/libmount" "/home/Igor/.conan2/p/b/libxcc89651afcd14a/p/include" "/home/Igor/.conan2/p/b/libse74ec6ba591d85/p/include" "/home/Igor/.conan2/p/b/pcre222e79b7521c2a/p/include" "/home/Igor/.conan2/p/b/zlib5469ac630c9be/p/include" "/home/Igor/.conan2/p/b/bzip22e4f36a5ab7ba/p/include" "/home/Igor/.conan2/p/b/lz4192c96358ce80/p/include" "/home/Igor/.conan2/p/b/xz_ut9bb4db01684dd/p/include" "/home/Igor/.conan2/p/b/zstd63a8be83009b6/p/include")
set(CONAN_RUNTIME_LIB_DIRS "/home/Igor/.conan2/p/b/grpc4476e4ecef39b/p/lib" "/home/Igor/.conan2/p/b/proto8f407a57f53e3/p/lib" "/home/Igor/.conan2/p/b/absei0ae0473405a93/p/lib" "/home/Igor/.conan2/p/b/c-are5036133917c49/p/lib" "/home/Igor/.conan2/p/b/opens77e4f8a23c001/p/lib" "/home/Igor/.conan2/p/b/re2b46574a43da85/p/lib" "/home/Igor/.conan2/p/b/libsy2fad5ae2f0003/p/lib" "/home/Igor/.conan2/p/b/libca1294f98fd0832/p/lib" "/home/Igor/.conan2/p/b/libmodcb9ad120de9a/p/lib" "/home/Igor/.conan2/p/b/libxcc89651afcd14a/p/lib" "/home/Igor/.conan2/p/b/libse74ec6ba591d85/p/lib" "/home/Igor/.conan2/p/b/pcre222e79b7521c2a/p/lib" "/home/Igor/.conan2/p/b/zlib5469ac630c9be/p/lib" "/home/Igor/.conan2/p/b/bzip22e4f36a5ab7ba/p/lib" "/home/Igor/.conan2/p/b/lz4192c96358ce80/p/lib" "/home/Igor/.conan2/p/b/xz_ut9bb4db01684dd/p/lib" "/home/Igor/.conan2/p/b/zstd63a8be83009b6/p/lib" )

endif()


########## 'pkg_config' block #############
# Define pkg-config from 'tools.gnu:pkg_config' executable and paths

if (DEFINED ENV{PKG_CONFIG_PATH})
set(ENV{PKG_CONFIG_PATH} "${CMAKE_CURRENT_LIST_DIR}:$ENV{PKG_CONFIG_PATH}")
else()
set(ENV{PKG_CONFIG_PATH} "${CMAKE_CURRENT_LIST_DIR}:")
endif()


########## 'rpath' block #############
# Defining CMAKE_SKIP_RPATH



########## 'output_dirs' block #############
# Definition of CMAKE_INSTALL_XXX folders

set(CMAKE_INSTALL_BINDIR "bin")
set(CMAKE_INSTALL_SBINDIR "bin")
set(CMAKE_INSTALL_LIBEXECDIR "bin")
set(CMAKE_INSTALL_LIBDIR "lib")
set(CMAKE_INSTALL_INCLUDEDIR "include")
set(CMAKE_INSTALL_OLDINCLUDEDIR "include")


########## 'variables' block #############
# Definition of CMake variables from CMakeToolchain.variables values

# Variables
# Variables  per configuration



########## 'preprocessor' block #############
# Preprocessor definitions from CMakeToolchain.preprocessor_definitions values

# Preprocessor definitions per configuration



if(CMAKE_POLICY_DEFAULT_CMP0091)  # Avoid unused and not-initialized warnings
endif()
