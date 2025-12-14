#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "trac_ik_lib::trac_ik" for configuration "Release"
set_property(TARGET trac_ik_lib::trac_ik APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(trac_ik_lib::trac_ik PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libtrac_ik.so"
  IMPORTED_SONAME_RELEASE "libtrac_ik.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS trac_ik_lib::trac_ik )
list(APPEND _IMPORT_CHECK_FILES_FOR_trac_ik_lib::trac_ik "${_IMPORT_PREFIX}/lib/libtrac_ik.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
