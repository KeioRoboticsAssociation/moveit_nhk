# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_mizuki_arm_short_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED mizuki_arm_short_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(mizuki_arm_short_FOUND FALSE)
  elseif(NOT mizuki_arm_short_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(mizuki_arm_short_FOUND FALSE)
  endif()
  return()
endif()
set(_mizuki_arm_short_CONFIG_INCLUDED TRUE)

# output package information
if(NOT mizuki_arm_short_FIND_QUIETLY)
  message(STATUS "Found mizuki_arm_short: 0.0.0 (${mizuki_arm_short_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'mizuki_arm_short' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${mizuki_arm_short_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(mizuki_arm_short_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${mizuki_arm_short_DIR}/${_extra}")
endforeach()
