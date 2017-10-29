file(REMOVE_RECURSE
  "libsolutions.pdb"
  "libsolutions.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/solutions.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
