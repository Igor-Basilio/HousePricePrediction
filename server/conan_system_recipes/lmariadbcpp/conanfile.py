from conan import ConanFile
from conan.tools.cmake import cmake_layout

class mariadbcpp(ConanFile):

    name = "mariadbcpp"
    version = "system"
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeDeps", "CMakeToolchain"

    def package_info(self):
        self.cpp_info.system_libs = ["mariadbcpp"]
        self.cpp_info.includedirs = ["/usr/include/mariadb"]

