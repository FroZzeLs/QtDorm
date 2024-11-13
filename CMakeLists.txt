cmake_minimum_required(VERSION 3.5)

project(Dormitory VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Sql Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Sql Widgets)

set(PROJECT_SOURCES
        main.cpp



)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Dormitory
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        /home/sergey/Dormitory/source/addstudentwindow.cpp /home/sergey/Dormitory/headers/addstudentwindow.h /home/sergey/Dormitory/ui/addstudentwindow.ui
        /home/sergey/Dormitory/source/mainwindow.cpp /home/sergey/Dormitory/headers/mainwindow.h /home/sergey/Dormitory/ui/mainwindow.ui
        /home/sergey/Dormitory/source/reportswindow.cpp /home/sergey/Dormitory/headers/reportswindow.h /home/sergey/Dormitory/ui/reportswindow.ui
        /home/sergey/Dormitory/source/studentswindow.cpp /home/sergey/Dormitory/headers/studentswindow.h /home/sergey/Dormitory/ui/studentswindow.ui
        main.cpp
        resource.qrc
        /home/sergey/Dormitory/source/database.cpp /home/sergey/Dormitory/headers/database.h
        /home/sergey/Dormitory/headers/person.h /home/sergey/Dormitory/source/person.cpp
        /home/sergey/Dormitory/headers/resident.h /home/sergey/Dormitory/source/resident.cpp
        /home/sergey/Dormitory/headers/logic.h /home/sergey/Dormitory/source/logic.cpp
        /home/sergey/Dormitory/headers/studentresident.h /home/sergey/Dormitory/source/studentresident.cpp
        /home/sergey/Dormitory/headers/blockmanager.h /home/sergey/Dormitory/source/blockmanager.cpp

        /home/sergey/Dormitory/headers/studentinfowindow.h /home/sergey/Dormitory/source/studentinfowindow.cpp /home/sergey/Dormitory/ui/studentinfowindow.ui
        /home/sergey/Dormitory/headers/activitywindow.h /home/sergey/Dormitory/source/activitywindow.cpp /home/sergey/Dormitory/ui/activitywindow.ui

        /home/sergey/Dormitory/headers/voluntarysquadwindow.h /home/sergey/Dormitory/source/voluntarysquadwindow.cpp /home/sergey/Dormitory/ui/voluntarysquadwindow.ui
        /home/sergey/Dormitory/headers/councilactivitywindow.h /home/sergey/Dormitory/source/councilactivitywindow.cpp /home/sergey/Dormitory/ui/councilactivitywindow.ui

    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Dormitory APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Dormitory SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Dormitory
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Dormitory PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt6::Sql)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Dormitory)
endif()
set_target_properties(Dormitory PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Dormitory
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Dormitory)
endif()
