# Minimum cmake verison 3.1 required for the variable CMAKE_CXX_STANDARD
cmake_minimum_required(VERSION 3.1)


set(PROJECT_NAME myhklib)

list(APPEND CMAKE_MODULE_PATH
        $ENV{HK_PILOT_DIR}/cmake
        )
include(GetVersionGit)
MESSAGE("Preparing project ${PROJECT_NAME} version ${PROJECT_VERSION}" )
project(${PROJECT_NAME} VERSION ${PROJECT_VERSION})
include(HKPackageBuilder)
hkbuilder_prepare_project()
set( PUBLIC_EXT_LIBS )
hk_check_dependencies()


add_subdirectory(UserTools)
add_subdirectory(test)
