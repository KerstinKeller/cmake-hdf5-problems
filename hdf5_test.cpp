#include <iostream>
#include <string>
#include <hdf5.h>

int main() {
  std::string FILE_NAME("h5tutr_dset.h5");
  
  //  create file access property
  hid_t fileAccessPropery = H5Pcreate(H5P_FILE_ACCESS);
  //  create file create property
  hid_t fileCreateProperty = H5Pcreate(H5P_FILE_CREATE);
  // Create a new file using the default property lists. 
  hid_t file_id_ = H5Fcreate(FILE_NAME.c_str(), H5F_ACC_TRUNC, fileCreateProperty, fileAccessPropery);

  if (file_id_ < 0)
      return file_id_;
  return 0;
}
